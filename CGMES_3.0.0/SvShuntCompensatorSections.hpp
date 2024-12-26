#ifndef SvShuntCompensatorSections_H
#define SvShuntCompensatorSections_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "Float.hpp"

namespace CIMPP
{
	class ShuntCompensator;

	/*
	State variable for the number of sections in service for a shunt compensator.
	*/
	class SvShuntCompensatorSections : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		SvShuntCompensatorSections();
		~SvShuntCompensatorSections() override;

		CIMPP::ShuntCompensator* ShuntCompensator;  /* The shunt compensator for which the state applies. Default: 0 */
		CIMPP::Float sections;  /* The number of sections in service as a continuous variable. The attribute shall be a positive value or zero. To get integer value scale with ShuntCompensator.bPerSection. Default: 0.0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SvShuntCompensatorSections_factory();
}
#endif
