#ifndef ExcST3A_H
#define ExcST3A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "AngleDegrees.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Modified IEEE ST3A static excitation system with added speed multiplier.
	*/
	class ExcST3A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST3A();
		~ExcST3A() override;

		CIMPP::PU efdmax;  /* Maximum AVR output (Efdmax).  Typical Value = 6.9. Default: nullptr */
		CIMPP::PU kc;  /* Rectifier loading factor proportional to commutating reactance (Kc). Typical Value = 1.1. Default: nullptr */
		CIMPP::PU kg;  /* Feedback gain constant of the inner loop field regulator (Kg).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ki;  /* Potential circuit gain coefficient (Ki).  Typical Value = 4.83. Default: nullptr */
		CIMPP::PU kj;  /* AVR gain (Kj).  Typical Value = 200. Default: nullptr */
		CIMPP::PU km;  /* Forward gain constant of the inner loop field regulator (Km).  Typical Value = 7.04. Default: nullptr */
		CIMPP::PU kp;  /* Potential source gain (Kp) (&gt;0).  Typical Value = 4.37. Default: nullptr */
		CIMPP::PU ks;  /* Coefficient to allow different usage of the model-speed coefficient (Ks).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ks1;  /* Coefficient to allow different usage of the model-speed coefficient (Ks1).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tb;  /* Voltage regulator time constant (Tb).  Typical Value = 6.67. Default: nullptr */
		CIMPP::Seconds tc;  /* Voltage regulator time constant (Tc).  Typical Value = 1. Default: nullptr */
		CIMPP::AngleDegrees thetap;  /* Potential circuit phase angle (thetap).  Typical Value = 20. Default: nullptr */
		CIMPP::Seconds tm;  /* Forward time constant of inner loop field regulator (Tm).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vbmax;  /* Maximum excitation voltage (Vbmax).  Typical Value = 8.63. Default: nullptr */
		CIMPP::PU vgmax;  /* Maximum inner loop feedback voltage (Vgmax).  Typical Value = 6.53. Default: nullptr */
		CIMPP::PU vimax;  /* Maximum voltage regulator input limit (Vimax).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU vimin;  /* Minimum voltage regulator input limit (Vimin).  Typical Value = -0.2. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (Vrmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (Vrmin).  Typical Value = 0. Default: nullptr */
		CIMPP::PU xl;  /* Reactance associated with potential source (Xl).  Typical Value = 0.09. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcST3A_factory();
}
#endif
