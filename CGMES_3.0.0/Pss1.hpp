#ifndef Pss1_H
#define Pss1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Italian PSS with three inputs (speed, frequency, power).
	*/
	class Pss1 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss1();
		~Pss1() override;

		CIMPP::Float kf;  /* Frequency power input gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;F&lt;/sub&gt;&lt;/i&gt;).  Typical value = 5. Default: 0.0 */
		CIMPP::Float komega;  /* Shaft speed power input gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;omega&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float kpe;  /* Electric power input gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PE&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Float ks;  /* PSS gain (&lt;i&gt;Ks&lt;/i&gt;).  Typical value = 1. Default: 0.0 */
		CIMPP::PU pmin;  /* Minimum power PSS enabling (&lt;i&gt;Pmin&lt;/i&gt;).  Typical value = 0,25. Default: nullptr */
		CIMPP::Seconds t10;  /* Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;10&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t5;  /* Washout (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;5&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 3,5. Default: nullptr */
		CIMPP::Seconds t6;  /* Filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;6&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t7;  /* Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;7&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). If = 0, both blocks are bypassed.  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t8;  /* Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;8&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t9;  /* Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;9&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  If = 0, both blocks are bypassed.  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tpe;  /* Electric power filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PE&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Boolean vadat;  /* &lt;font color=`#0f0f0f`&gt;Signal selector (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ADAT&lt;/sub&gt;&lt;/i&gt;).&lt;/font&gt; &lt;font color=`#0f0f0f`&gt;true = closed (generator power is greater than &lt;i&gt;Pmin&lt;/i&gt;)&lt;/font&gt; &lt;font color=`#0f0f0f`&gt;false = open (&lt;i&gt;Pe&lt;/i&gt; is smaller than &lt;i&gt;Pmin&lt;/i&gt;).&lt;/font&gt; &lt;font color=`#0f0f0f`&gt;Typical value = true.&lt;/font&gt; Default: false */
		CIMPP::PU vsmn;  /* Stabilizer output maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;SMN&lt;/sub&gt;&lt;/i&gt;).  Typical value = -0,06. Default: nullptr */
		CIMPP::PU vsmx;  /* Stabilizer output minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;SMX&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,06. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Pss1_factory();
}
#endif
