#ifndef MechanicalLoadDynamics_H
#define MechanicalLoadDynamics_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DynamicsFunctionBlock.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class AsynchronousMachineDynamics;
	class SynchronousMachineDynamics;

	/*
	Mechanical load function block whose behavior is described by reference to a standard model
	*/
	class MechanicalLoadDynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		MechanicalLoadDynamics();
		~MechanicalLoadDynamics() override;

		CIMPP::AsynchronousMachineDynamics* AsynchronousMachineDynamics;  /* Asynchronous machine model with which this mechanical load model is associated. Default: 0 */
		CIMPP::SynchronousMachineDynamics* SynchronousMachineDynamics;  /* Synchronous machine model with which this mechanical load model is associated. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* MechanicalLoadDynamics_factory();
}
#endif
