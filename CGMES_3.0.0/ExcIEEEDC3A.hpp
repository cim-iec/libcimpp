#ifndef ExcIEEEDC3A_H
#define ExcIEEEDC3A_H
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
	IEEE 421.5-2005 type DC3A model. This model represents older systems, in particular those DC commutator exciters with non-continuously acting regulators that were commonly used before the development of the continuously acting varieties.  These systems respond at basically two different rates, depending upon the magnitude of voltage error. For small errors, adjustment is made periodically with a signal to a motor-operated rheostat. Larger errors cause resistors to be quickly shorted or inserted and a strong forcing signal applied to the exciter. Continuous motion of the motor-operated rheostat occurs for these larger error signals, even though it is bypassed by contactor action. Reference: IEEE 421.5-2005, 5.3.
	*/
	class ExcIEEEDC3A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEDC3A();
		~ExcIEEEDC3A() override;

		CIMPP::PU efd1;  /* Exciter voltage at which exciter saturation is defined (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FD1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 3,375. Default: nullptr */
		CIMPP::PU efd2;  /* Exciter voltage at which exciter saturation is defined (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FD2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 3,15. Default: nullptr */
		CIMPP::Boolean exclim;  /* (&lt;i&gt;exclim&lt;/i&gt;).  IEEE standard is ambiguous about lower limit on exciter output. true = a lower limit of zero is applied to integrator output false = a lower limit of zero is not applied to integrator output. Typical value = true. Default: false */
		CIMPP::PU ke;  /* Exciter constant related to self-excited field (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU kv;  /* Fast raise/lower contact setting (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;V&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Float seefd1;  /* Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FD1&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;S&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;[E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FD1&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,267. Default: 0.0 */
		CIMPP::Float seefd2;  /* Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FD2&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;S&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;[E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FD2&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,068. Default: 0.0 */
		CIMPP::Seconds te;  /* Exciter time constant, integration rate associated with exciter control (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds trh;  /* Rheostat travel time (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RH&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 20. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt;= 0).  Typical value = 0. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcIEEEDC3A_factory();
}
#endif
