#ifndef OperationalLimitType_H
#define OperationalLimitType_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "LimitTypeKind.hpp"
#include "OperationalLimitDirectionKind.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class OperationalLimit;

	/*
	The operational meaning of a category of limits.
	*/
	class OperationalLimitType : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		OperationalLimitType();
		~OperationalLimitType() override;

		std::list<CIMPP::OperationalLimit*> OperationalLimit;  /* The operational limits associated with this type of limit. Default: 0 */
		CIMPP::Seconds acceptableDuration;  /* The nominal acceptable duration of the limit.  Limits are commonly expressed in terms of the a time limit for which the limit is normally acceptable.   The actual acceptable duration of a specific limit may depend on other local factors such as temperature or wind speed. Default: nullptr */
		CIMPP::OperationalLimitDirectionKind direction;  /* The direction of the limit. Default: 0 */
		CIMPP::LimitTypeKind limitType;  /* Types of limits defined in the ENTSO-E Operational Handbook Policy 3. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* OperationalLimitType_factory();
}
#endif
