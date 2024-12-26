#ifndef PssSH_H
#define PssSH_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Siemens<sup>TM</sup> "H infinity" power system stabilizer with generator electrical power input. [Footnote: Siemens "H infinity" power system stabilizers are an example of suitable products available commercially. This information is given for the convenience of users of this document and does not constitute an endorsement by IEC of these products.]
	*/
	class PssSH : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssSH();
		~PssSH() override;

		CIMPP::PU k;  /* Main gain (&lt;i&gt;K&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU k0;  /* Gain 0 (&lt;i&gt;K0&lt;/i&gt;).  Typical value = 0,012. Default: nullptr */
		CIMPP::PU k1;  /* Gain 1 (&lt;i&gt;K1&lt;/i&gt;).  Typical value = 0,488. Default: nullptr */
		CIMPP::PU k2;  /* Gain 2 (&lt;i&gt;K2&lt;/i&gt;).  Typical value = 0,064. Default: nullptr */
		CIMPP::PU k3;  /* Gain 3 (&lt;i&gt;K3&lt;/i&gt;).  Typical value = 0,224. Default: nullptr */
		CIMPP::PU k4;  /* Gain 4 (&lt;i&gt;K4&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t1;  /* Time constant 1 (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,076. Default: nullptr */
		CIMPP::Seconds t2;  /* Time constant 2 (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,086. Default: nullptr */
		CIMPP::Seconds t3;  /* Time constant 3 (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt; 0).   Typical value = 1,068. Default: nullptr */
		CIMPP::Seconds t4;  /* Time constant 4 (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,913. Default: nullptr */
		CIMPP::Seconds td;  /* Input time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;d&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */
		CIMPP::PU vsmax;  /* Output maximum limit (&lt;i&gt;Vsmax&lt;/i&gt;) (&amp;gt; PssSH.vsmin).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU vsmin;  /* Output minimum limit (&lt;i&gt;Vsmin&lt;/i&gt;) (&amp;lt; PssSH.vsmax).  Typical value = -0,1. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PssSH_factory();
}
#endif
