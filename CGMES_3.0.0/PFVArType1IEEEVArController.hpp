#ifndef PFVArType1IEEEVArController_H
#define PFVArType1IEEEVArController_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PFVArControllerType1Dynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	IEEE VAR controller type 1 which operates by moving the voltage reference directly. Reference: IEEE 421.5-2005, 11.3.
	*/
	class PFVArType1IEEEVArController : public PFVArControllerType1Dynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PFVArType1IEEEVArController();
		~PFVArType1IEEEVArController() override;

		CIMPP::Seconds tvarc;  /* Var controller time delay (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;VARC&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5. Default: nullptr */
		CIMPP::PU vvar;  /* Synchronous machine power factor (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;VAR&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::Float vvarcbw;  /* Var controller deadband (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;VARC_BW&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,02. Default: 0.0 */
		CIMPP::PU vvarref;  /* Var controller reference (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;VARREF&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU vvtmax;  /* Maximum machine terminal voltage needed for pf/VAr controller to be enabled (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;VTMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; PVFArType1IEEEVArController.vvtmin). Default: nullptr */
		CIMPP::PU vvtmin;  /* Minimum machine terminal voltage needed to enable pf/var controller (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;VTMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; PVFArType1IEEEVArController.vvtmax). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PFVArType1IEEEVArController_factory();
}
#endif
