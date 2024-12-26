#ifndef VCompIEEEType1_H
#define VCompIEEEType1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "VoltageCompensatorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Reference: IEEE Standard 421.5-2005 Section 4.
	*/
	class VCompIEEEType1 : public VoltageCompensatorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		VCompIEEEType1();
		~VCompIEEEType1() override;

		CIMPP::PU rc;  /*  Default: nullptr */
		CIMPP::Seconds tr;  /*  Default: nullptr */
		CIMPP::PU xc;  /*  Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* VCompIEEEType1_factory();
}
#endif
