#ifndef UnderexcLimX1_H
#define UnderexcLimX1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "UnderexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	<font color="#0f0f0f">Allis-Chalmers minimum excitation limiter.</font>
	*/
	class UnderexcLimX1 : public UnderexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		UnderexcLimX1();
		~UnderexcLimX1() override;

		CIMPP::PU k;  /* Minimum excitation limit slope (&lt;i&gt;K&lt;/i&gt;) (&amp;gt; 0). Default: nullptr */
		CIMPP::PU kf2;  /* Differential gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;F2&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU km;  /* Minimum excitation limit gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;M&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU melmax;  /* Minimum excitation limit value (&lt;i&gt;MELMAX&lt;/i&gt;). Default: nullptr */
		CIMPP::Seconds tf2;  /* Differential time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;F2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tm;  /* Minimum excitation limit time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;M&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* UnderexcLimX1_factory();
}
#endif
