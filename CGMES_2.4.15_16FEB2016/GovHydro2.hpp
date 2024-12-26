#ifndef GovHydro2_H
#define GovHydro2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	IEEE hydro turbine governor model represents plants with straightforward penstock configurations and hydraulic-dashpot governors.
	*/
	class GovHydro2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro2();
		~GovHydro2() override;

		CIMPP::PU aturb;  /* Turbine numerator multiplier (Aturb).  Typical Value = -1. Default: nullptr */
		CIMPP::PU bturb;  /* Turbine denominator multiplier (Bturb).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Frequency db1;  /* Intentional deadband width (db1).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::ActivePower db2;  /* Unintentional deadband (db2).  Unit = MW.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency eps;  /* Intentional db hysteresis (eps).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv1;  /* Nonlinear gain point 1, PU gv (Gv1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv2;  /* Nonlinear gain point 2, PU gv (Gv2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv3;  /* Nonlinear gain point 3, PU gv (Gv3).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv4;  /* Nonlinear gain point 4, PU gv (Gv4).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv5;  /* Nonlinear gain point 5, PU gv (Gv5).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv6;  /* Nonlinear gain point 6, PU gv (Gv6).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kturb;  /* Turbine gain (Kturb).  Typical Value = 1. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (MWbase) (&gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU pgv1;  /* Nonlinear gain point 1, PU power (Pgv1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv2;  /* Nonlinear gain point 2, PU power (Pgv2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv3;  /* Nonlinear gain point 3, PU power (Pgv3).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv4;  /* Nonlinear gain point 4, PU power (Pgv4).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv5;  /* Nonlinear gain point 5, PU power (Pgv5).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv6;  /* Nonlinear gain point 6, PU power (Pgv6).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pmax;  /* Maximum gate opening (Pmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU pmin;  /* Minimum gate opening; ().  Typical Value = 0. Default: nullptr */
		CIMPP::PU rperm;  /* Permanent droop (Rperm).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU rtemp;  /* Temporary droop (Rtemp).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds tg;  /* Gate servo time constant (Tg).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds tp;  /* Pilot servo valve time constant (Tp).  Typical Value = 0.03. Default: nullptr */
		CIMPP::Seconds tr;  /* Dashpot time constant (Tr).  Typical Value = 12. Default: nullptr */
		CIMPP::Seconds tw;  /* Water inertia time constant (Tw).  Typical Value = 2. Default: nullptr */
		CIMPP::Simple_Float uc;  /* Maximum gate closing velocity (Uc) (&lt;0).  Unit = PU/sec.   Typical Value = -0.1. Default: nullptr */
		CIMPP::Simple_Float uo;  /* Maximum gate opening velocity (Uo).  Unit = PU/sec.  Typical Value = 0.1. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovHydro2_factory();
}
#endif
