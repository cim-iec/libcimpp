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
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Basic hydro turbine governor.
	*/
	class GovHydro1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro1();
		~GovHydro1() override;

		CIMPP::PU at;  /* Turbine gain (&lt;i&gt;At&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,2. Default: nullptr */
		CIMPP::PU dturb;  /* Turbine damping factor (&lt;i&gt;Dturb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU gmax;  /* Maximum gate opening (&lt;i&gt;Gmax&lt;/i&gt;) (&amp;gt; 0 and &amp;gt; GovHydro.gmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU gmin;  /* Minimum gate opening (&lt;i&gt;Gmin&lt;/i&gt;) (&amp;gt;= 0 and &amp;lt; GovHydro1.gmax).  Typical value = 0. Default: nullptr */
		CIMPP::PU hdam;  /* Turbine nominal head (&lt;i&gt;hdam&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU qnl;  /* No-load flow at nominal head (&lt;i&gt;qnl&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,08. Default: nullptr */
		CIMPP::PU rperm;  /* Permanent droop (&lt;i&gt;R&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,04. Default: nullptr */
		CIMPP::PU rtemp;  /* Temporary droop (&lt;i&gt;r&lt;/i&gt;) (&amp;gt; GovHydro1.rperm).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds tf;  /* Filter time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds tg;  /* Gate servo time constant (&lt;i&gt;Tg&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds tr;  /* Washout time constant (&lt;i&gt;Tr&lt;/i&gt;) (&amp;gt; 0).  Typical value = 5. Default: nullptr */
		CIMPP::Seconds tw;  /* Water inertia time constant (&lt;i&gt;Tw&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::Float velm;  /* Maximum gate velocity (&lt;i&gt;Vlem&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,2. Default: 0.0 */

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
