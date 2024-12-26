#ifndef BusNameMarker_H
#define BusNameMarker_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "Integer.hpp"

namespace CIMPP
{
	class ACDCTerminal;
	class ReportingGroup;

	/*
	Used to apply user standard names to topology buses. Typically used for "bus/branch" case generation. Associated with one or more terminals that are normally connected with the bus name.    The associated terminals are normally connected by non-retained switches. For a ring bus station configuration, all busbar terminals in the ring are typically associated.   For a breaker and a half scheme, both busbars would normally be associated.  For a ring bus, all busbars would normally be associated.  For a "straight" busbar configuration, normally only the main terminal at the busbar would be associated.
	*/
	class BusNameMarker : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		BusNameMarker();
		~BusNameMarker() override;

		CIMPP::ReportingGroup* ReportingGroup;  /* The bus name markers that belong to this reporting group. Default: 0 */
		std::list<CIMPP::ACDCTerminal*> Terminal;  /* The terminals associated with this bus name marker. Default: 0 */
		CIMPP::Integer priority;  /* Priority of bus name marker for use as topology bus name.  Use 0 for don t care.  Use 1 for highest priority.  Use 2 as priority is less than 1 and so on. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* BusNameMarker_factory();
}
#endif
