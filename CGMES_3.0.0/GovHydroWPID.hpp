#ifndef GovHydroWPID_H
#define GovHydroWPID_H
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
	Woodward<sup>TM</sup> PID hydro governor. [Footnote: Woodward PID hydro governors are an example of suitable products available commercially. This information is given for the convenience of users of this document and does not constitute an endorsement by IEC of these products.]
	*/
	class GovHydroWPID : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroWPID();
		~GovHydroWPID() override;

		CIMPP::PU d;  /* Turbine damping factor (&lt;i&gt;D&lt;/i&gt;).  Unit = delta P / delta speed. Default: nullptr */
		CIMPP::PU gatmax;  /* Gate opening limit maximum (&lt;i&gt;Gatmax&lt;/i&gt;) (&amp;gt; GovHydroWPID.gatmin). Default: nullptr */
		CIMPP::PU gatmin;  /* Gate opening limit minimum (&lt;i&gt;Gatmin&lt;/i&gt;) (&amp;lt; GovHydroWPID.gatmax). Default: nullptr */
		CIMPP::PU gv1;  /* Gate position 1 (&lt;i&gt;Gv1&lt;/i&gt;). Default: nullptr */
		CIMPP::PU gv2;  /* Gate position 2 (&lt;i&gt;Gv2&lt;/i&gt;). Default: nullptr */
		CIMPP::PU gv3;  /* Gate position 3 (&lt;i&gt;Gv3&lt;/i&gt;) (= 1,0). Default: nullptr */
		CIMPP::PU kd;  /* Derivative gain (&lt;i&gt;Kd&lt;/i&gt;).  Typical value = 1,11. Default: nullptr */
		CIMPP::PU ki;  /* Reset gain (&lt;i&gt;Ki&lt;/i&gt;).  Typical value = 0,36. Default: nullptr */
		CIMPP::PU kp;  /* Proportional gain (&lt;i&gt;Kp&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values  (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU pgv1;  /* Output at &lt;i&gt;Gv1&lt;/i&gt; PU of &lt;i&gt;MWbase&lt;/i&gt; (&lt;i&gt;Pgv1&lt;/i&gt;). Default: nullptr */
		CIMPP::PU pgv2;  /* Output at &lt;i&gt;Gv2&lt;/i&gt; PU of &lt;i&gt;MWbase&lt;/i&gt; (&lt;i&gt;Pgv2&lt;/i&gt;). Default: nullptr */
		CIMPP::PU pgv3;  /* Output at &lt;i&gt;Gv3&lt;/i&gt; PU of &lt;i&gt;MWbase&lt;/i&gt; (&lt;i&gt;Pgv3&lt;/i&gt;). Default: nullptr */
		CIMPP::PU pmax;  /* Maximum power output (&lt;i&gt;Pmax&lt;/i&gt;) (&amp;gt; GovHydroWPID.pmin). Default: nullptr */
		CIMPP::PU pmin;  /* Minimum power output (&lt;i&gt;Pmin&lt;/i&gt;) (&amp;lt; GovHydroWPID.pmax). Default: nullptr */
		CIMPP::PU reg;  /* Permanent drop (&lt;i&gt;Reg&lt;/i&gt;). Default: nullptr */
		CIMPP::Seconds ta;  /* Controller time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tb;  /* Gate servo time constant (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds treg;  /* Speed detector time constant (&lt;i&gt;Treg&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tw;  /* Water inertia time constant (&lt;i&gt;Tw&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU velmax;  /* Maximum gate opening velocity (&lt;i&gt;Velmax&lt;/i&gt;) (&amp;gt; GovHydroWPID.velmin).  Unit = PU / s.  Typical value = 0. Default: nullptr */
		CIMPP::PU velmin;  /* Maximum gate closing velocity (&lt;i&gt;Velmin&lt;/i&gt;) (&amp;lt; GovHydroWPID.velmax).  Unit = PU / s.  Typical value = 0. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovHydroWPID_factory();
}
#endif
