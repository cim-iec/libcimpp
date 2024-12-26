#ifndef ExcAC4A_H
#define ExcAC4A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Modified IEEE AC4A alternator-supplied rectifier excitation system with different minimum controller output.
	*/
	class ExcAC4A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC4A();
		~ExcAC4A() override;

		CIMPP::PU ka;  /* Voltage regulator gain (Ka).  Typical Value = 200. Default: nullptr */
		CIMPP::PU kc;  /* Rectifier loading factor proportional to commutating reactance (Kc).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (Ta).  Typical Value = 0.015. Default: nullptr */
		CIMPP::Seconds tb;  /* Voltage regulator time constant (Tb).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds tc;  /* Voltage regulator time constant (Tc).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vimax;  /* Maximum voltage regulator input limit (Vimax).  Typical Value = 10. Default: nullptr */
		CIMPP::PU vimin;  /* Minimum voltage regulator input limit (Vimin).  Typical Value = -10. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (Vrmax).  Typical Value = 5.64. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (Vrmin).  Typical Value = -4.53. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcAC4A_factory();
}
#endif
