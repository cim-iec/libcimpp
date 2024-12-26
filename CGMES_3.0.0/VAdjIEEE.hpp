#ifndef VAdjIEEE_H
#define VAdjIEEE_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "VoltageAdjusterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	IEEE voltage adjuster which is used to represent the voltage adjuster in either a power factor or VAr control system. Reference: IEEE 421.5-2005, 11.1.
	*/
	class VAdjIEEE : public VoltageAdjusterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		VAdjIEEE();
		~VAdjIEEE() override;

		CIMPP::Float adjslew;  /* Rate at which output of adjuster changes (&lt;i&gt;ADJ_SLEW&lt;/i&gt;).  Unit = s / PU.  Typical value = 300. Default: 0.0 */
		CIMPP::Seconds taoff;  /* Time that adjuster pulses are off (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;AOFF&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds taon;  /* Time that adjuster pulses are on (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;AON&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Float vadjf;  /* Set high to provide a continuous raise or lower (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ADJF&lt;/sub&gt;&lt;/i&gt;). Default: 0.0 */
		CIMPP::PU vadjmax;  /* Maximum output of the adjuster (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ADJMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; VAdjIEEE.vadjmin).  Typical value = 1,1. Default: nullptr */
		CIMPP::PU vadjmin;  /* Minimum output of the adjuster (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ADJMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; VAdjIEEE.vadjmax).  Typical value = 0,9. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* VAdjIEEE_factory();
}
#endif
