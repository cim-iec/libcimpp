#ifndef ExcIEEEDC4B_H
#define ExcIEEEDC4B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	The class represents IEEE Std 421.5-2005 type DC4B model. These excitation systems utilize a field-controlled dc commutator exciter with a continuously acting voltage regulator having supplies obtained from the generator or auxiliary bus.  Reference: IEEE Standard 421.5-2005 Section 5.4.
	*/
	class ExcIEEEDC4B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEDC4B();
		~ExcIEEEDC4B() override;

		CIMPP::PU efd1;  /* Exciter voltage at which exciter saturation is defined (E).  Typical Value = 1.75. Default: nullptr */
		CIMPP::PU efd2;  /* Exciter voltage at which exciter saturation is defined (E).  Typical Value = 2.33. Default: nullptr */
		CIMPP::PU ka;  /* Voltage regulator gain (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kd;  /* Regulator derivative gain (K).  Typical Value = 20. Default: nullptr */
		CIMPP::PU ke;  /* Exciter constant related to self-excited field (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kf;  /* Excitation control system stabilizer gain (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ki;  /* Regulator integral gain (K).  Typical Value = 20. Default: nullptr */
		CIMPP::PU kp;  /* Regulator proportional gain (K).  Typical Value = 20. Default: nullptr */
		CIMPP::Boolean oelin;  /* OEL input (OELin). true = LV gate false = subtract from error signal. Typical Value = true. Default: false */
		CIMPP::Simple_Float seefd1;  /* Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.08. Default: nullptr */
		CIMPP::Simple_Float seefd2;  /* Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.27. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (T).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds td;  /* Regulator derivative filter time constant(T).  Typical Value = 0.01. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter time constant, integration rate associated with exciter control (T).  Typical Value = 0.8. Default: nullptr */
		CIMPP::Seconds tf;  /* Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
		CIMPP::Boolean uelin;  /* UEL input (UELin). true = HV gate false = add to error signal. Typical Value = true. Default: false */
		CIMPP::PU vemin;  /* Minimum exciter voltage output(V).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (V).  Typical Value = 2.7. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (V).  Typical Value = -0.9. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcIEEEDC4B_factory();
}
#endif
