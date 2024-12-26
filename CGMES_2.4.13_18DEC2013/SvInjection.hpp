#ifndef SvInjection_H
#define SvInjection_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"

namespace CIMPP
{
	class TopologicalNode;

	/*
	The SvInjection is reporting the calculated bus injection minus the sum of the terminal flows. The terminal flow is positive out from the bus (load sign convention) and bus injection has positive flow into the bus. SvInjection may have the remainder after state estimation or slack after power flow calculation.
	*/
	class SvInjection : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		SvInjection();
		~SvInjection() override;

		CIMPP::TopologicalNode* TopologicalNode;  /* The injection flows state variables associated with the topological node. Default: 0 */
		CIMPP::ActivePower pInjection;  /* The active power injected into the bus in addition to injections from equipment terminals.  Positive sign means injection into the TopologicalNode (bus). Default: nullptr */
		CIMPP::ReactivePower qInjection;  /* The reactive power injected into the bus in addition to injections from equipment terminals. Positive sign means injection into the TopologicalNode (bus). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SvInjection_factory();
}
#endif
