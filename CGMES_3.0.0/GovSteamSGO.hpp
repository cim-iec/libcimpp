#ifndef GovSteamSGO_H
#define GovSteamSGO_H
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
	Simplified steam turbine governor.
	*/
	class GovSteamSGO : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamSGO();
		~GovSteamSGO() override;

		CIMPP::PU k1;  /* One / PU regulation (&lt;i&gt;K1&lt;/i&gt;). Default: nullptr */
		CIMPP::PU k2;  /* Fraction (&lt;i&gt;K2&lt;/i&gt;). Default: nullptr */
		CIMPP::PU k3;  /* Fraction (&lt;i&gt;K3&lt;/i&gt;). Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU pmax;  /* Upper power limit (&lt;i&gt;Pmax&lt;/i&gt;) (&amp;gt; GovSteamSGO.pmin). Default: nullptr */
		CIMPP::Seconds pmin;  /* Lower power limit (&lt;i&gt;Pmin&lt;/i&gt;) (&amp;gt;= 0 and &amp;lt; GovSteamSGO.pmax). Default: nullptr */
		CIMPP::Seconds t1;  /* Controller lag (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t2;  /* Controller lead compensation (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t3;  /* Governor lag (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt; 0). Default: nullptr */
		CIMPP::Seconds t4;  /* Delay due to steam inlet volumes associated with steam chest and inlet piping (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t5;  /* Reheater delay including hot and cold leads (&lt;i&gt;T5&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t6;  /* Delay due to IP-LP turbine, crossover pipes and LP end hoods (&lt;i&gt;T6&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovSteamSGO_factory();
}
#endif
