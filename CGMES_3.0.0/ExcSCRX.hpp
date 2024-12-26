#ifndef ExcSCRX_H
#define ExcSCRX_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Simple excitation system with generic characteristics typical of many excitation systems; intended for use where negative field current could be a problem.
	*/
	class ExcSCRX : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcSCRX();
		~ExcSCRX() override;

		CIMPP::Boolean cswitch;  /* Power source switch (&lt;i&gt;Cswitch&lt;/i&gt;). true = fixed voltage of 1.0 PU false = generator terminal voltage. Default: false */
		CIMPP::PU emax;  /* Maximum field voltage output (&lt;i&gt;Emax&lt;/i&gt;) (&amp;gt; ExcSCRX.emin).  Typical value = 5. Default: nullptr */
		CIMPP::PU emin;  /* Minimum field voltage output (&lt;i&gt;Emin&lt;/i&gt;) (&amp;lt; ExcSCRX.emax).  Typical value = 0. Default: nullptr */
		CIMPP::PU k;  /* Gain (&lt;i&gt;K&lt;/i&gt;) (&amp;gt; 0).  Typical value = 200. Default: nullptr */
		CIMPP::Float rcrfd;  /* Ratio of field discharge resistance to field winding resistance ([&lt;i&gt;rc / rfd]&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float tatb;  /* Gain reduction ratio of lag-lead element ([&lt;i&gt;Ta&lt;/i&gt; / &lt;i&gt;Tb&lt;/i&gt;]). The parameter &lt;i&gt;Ta&lt;/i&gt; is not defined explicitly.  Typical value = 0.1. Default: 0.0 */
		CIMPP::Seconds tb;  /* Denominator time constant of lag-lead block (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */
		CIMPP::Seconds te;  /* Time constant of gain block (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,02. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcSCRX_factory();
}
#endif
