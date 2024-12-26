#ifndef ExcRQB_H
#define ExcRQB_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Excitation system type RQB (four-loop regulator, r?gulateur quatre boucles, developed in France) primarily used in nuclear or thermal generating units. This excitation system shall be always used together with power system stabilizer type PssRQB.
	*/
	class ExcRQB : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcRQB();
		~ExcRQB() override;

		CIMPP::Float ki0;  /* Voltage reference input gain (&lt;i&gt;Ki0&lt;/i&gt;).  Typical value = 12,7. Default: 0.0 */
		CIMPP::Float ki1;  /* Voltage input gain (&lt;i&gt;Ki1&lt;/i&gt;).  Typical value = -16,8. Default: 0.0 */
		CIMPP::Float klir;  /* OEL input gain (&lt;i&gt;KLIR&lt;/i&gt;).  Typical value = 12,13. Default: 0.0 */
		CIMPP::Float klus;  /* Limiter gain (&lt;i&gt;KLUS&lt;/i&gt;).  Typical value = 50. Default: 0.0 */
		CIMPP::PU lsat;  /* Integrator limiter (&lt;i&gt;LSAT&lt;/i&gt;).  Typical value = 5,73. Default: nullptr */
		CIMPP::PU lus;  /* Setpoint (&lt;i&gt;LUS&lt;/i&gt;).  Typical value = 0,12. Default: nullptr */
		CIMPP::Seconds mesu;  /* Voltage input time constant (&lt;i&gt;MESU&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds t4m;  /* Input time constant (&lt;i&gt;T4M&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5. Default: nullptr */
		CIMPP::Seconds tc;  /* Lead lag time constant (&lt;i&gt;TC&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds te;  /* Lead lag time constant (&lt;i&gt;TE&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,22. Default: nullptr */
		CIMPP::Seconds tf;  /* Exciter time constant (&lt;i&gt;TF&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,01. Default: nullptr */
		CIMPP::PU ucmax;  /* Maximum voltage reference limit (&lt;i&gt;UCMAX&lt;/i&gt;) (&amp;gt; ExcRQB.ucmin).  Typical value = 1,1. Default: nullptr */
		CIMPP::PU ucmin;  /* Minimum voltage reference limit (&lt;i&gt;UCMIN&lt;/i&gt;) (&amp;lt; ExcRQB.ucmax).  Typical value = 0,9. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcRQB_factory();
}
#endif
