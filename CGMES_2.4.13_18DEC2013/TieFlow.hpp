#ifndef TieFlow_H
#define TieFlow_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"

namespace CIMPP
{
	class ControlArea;
	class Terminal;

	/*
	A flow specification in terms of location and direction for a control area.
	*/
	class TieFlow : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		TieFlow();
		~TieFlow() override;

		CIMPP::ControlArea* ControlArea;  /* The control area of the tie flows. Default: 0 */
		CIMPP::Terminal* Terminal;  /* The terminal to which this tie flow belongs. Default: 0 */
		CIMPP::Boolean positiveFlowIn;  /* True if the flow into the terminal (load convention) is also flow into the control area.  For example, this attribute should be true if using the tie line terminal further away from the control area. For example to represent a tie to a shunt component (like a load or generator) in another area, this is the near end of a branch and this attribute would be specified as false. Default: false */

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
