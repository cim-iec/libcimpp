#ifndef GovHydro1_H
#define GovHydro1_H
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
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	Basic Hydro turbine governor model.
	*/
	class GovHydro1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro1();
		~GovHydro1() override;

		CIMPP::PU at;  /* Turbine gain (At) (&gt;0).  Typical Value = 1.2. Default: nullptr */
		CIMPP::PU dturb;  /* Turbine damping factor (Dturb) (&gt;=0).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU gmax;  /* Maximum gate opening (Gmax) (&gt;0).  Typical Value = 1. Default: nullptr */
		CIMPP::PU gmin;  /* Minimum gate opening (Gmin) (&gt;=0).  Typical Value = 0. Default: nullptr */
		CIMPP::PU hdam;  /* Turbine nominal head (hdam).  Typical Value = 1. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (MWbase) (&gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU qnl;  /* No-load flow at nominal head (qnl) (&gt;=0).  Typical Value = 0.08. Default: nullptr */
		CIMPP::PU rperm;  /* Permanent droop (R) (&gt;0).  Typical Value = 0.04. Default: nullptr */
		CIMPP::PU rtemp;  /* Temporary droop (r) (&gt;R).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Seconds tf;  /* Filter time constant () (&gt;0).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds tg;  /* Gate servo time constant (Tg) (&gt;0).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds tr;  /* Washout time constant (Tr) (&gt;0).  Typical Value = 5. Default: nullptr */
		CIMPP::Seconds tw;  /* Water inertia time constant (Tw) (&gt;0).  Typical Value = 1. Default: nullptr */
		CIMPP::Simple_Float velm;  /* Maximum gate velocity (Vlem) (&gt;0).  Typical Value = 0.2. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovHydro1_factory();
}
#endif
