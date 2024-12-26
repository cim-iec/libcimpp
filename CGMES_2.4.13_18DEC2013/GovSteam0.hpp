#ifndef GovSteam0_H
#define GovSteam0_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	A simplified steam turbine governor model.
	*/
	class GovSteam0 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteam0();
		~GovSteam0() override;

		CIMPP::PU dt;  /* Turbine damping coefficient (Dt).  Unit = delta P / delta speed. Typical Value = 0. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (MWbase)  (&gt;0).  Unit = MW. Default: nullptr */
		CIMPP::PU r;  /* Permanent droop (R).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds t1;  /* Steam bowl time constant (T1).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds t2;  /* Numerator time constant of T2/T3 block (T2).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds t3;  /* Reheater time constant (T3).  Typical Value = 10. Default: nullptr */
		CIMPP::PU vmax;  /* Maximum valve position, PU of mwcap (Vmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vmin;  /* Minimum valve position, PU of mwcap (Vmin).  Typical Value = 0. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovSteam0_factory();
}
#endif
