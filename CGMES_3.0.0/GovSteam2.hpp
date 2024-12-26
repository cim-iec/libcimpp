#ifndef GovSteam2_H
#define GovSteam2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Simplified governor.
	*/
	class GovSteam2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteam2();
		~GovSteam2() override;

		CIMPP::PU dbf;  /* Frequency deadband (&lt;i&gt;DBF&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::Float k;  /* Governor gain (reciprocal of droop) (&lt;i&gt;K&lt;/i&gt;).  Typical value = 20. Default: 0.0 */
		CIMPP::PU mnef;  /* Fuel flow maximum negative error value (&lt;i&gt;MN&lt;/i&gt;&lt;i&gt;&lt;sub&gt;EF&lt;/sub&gt;&lt;/i&gt;).  Typical value = -1. Default: nullptr */
		CIMPP::PU mxef;  /* Fuel flow maximum positive error value (&lt;i&gt;MX&lt;/i&gt;&lt;i&gt;&lt;sub&gt;EF&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU pmax;  /* Maximum fuel flow (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;MAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; GovSteam2.pmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU pmin;  /* Minimum fuel flow (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;MIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; GovSteam2.pmax).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t1;  /* Governor lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,45. Default: nullptr */
		CIMPP::Seconds t2;  /* Governor lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovSteam2_factory();
}
#endif
