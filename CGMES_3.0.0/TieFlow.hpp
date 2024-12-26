#ifndef TieFlow_H
#define TieFlow_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"

namespace CIMPP
{
	class ControlArea;
	class Terminal;

	/*
	Defines the structure (in terms of location and direction) of the net interchange constraint for a control area. This constraint may be used by either AGC or power flow.
	*/
	class TieFlow : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		TieFlow();
		~TieFlow() override;

		CIMPP::ControlArea* ControlArea;  /* The control area of the tie flows. Default: 0 */
		CIMPP::Terminal* Terminal;  /* The terminal to which this tie flow belongs. Default: 0 */
		CIMPP::Boolean positiveFlowIn;  /* Specifies the sign of the tie flow associated with a control area. True if positive flow into the terminal (load convention) is also positive flow into the control area.  See the description of ControlArea for further explanation of how TieFlow.positiveFlowIn is used. Default: false */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* TieFlow_factory();
}
#endif
