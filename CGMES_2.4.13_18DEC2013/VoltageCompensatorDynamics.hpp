#ifndef VoltageCompensatorDynamics_H
#define VoltageCompensatorDynamics_H
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
	class ExcitationSystemDynamics;
	class RemoteInputSignal;

	/*
	Voltage compensator function block whose behaviour is described by reference to a standard model
	*/
	class VoltageCompensatorDynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		VoltageCompensatorDynamics();
		~VoltageCompensatorDynamics() override;

		CIMPP::ExcitationSystemDynamics* ExcitationSystemDynamics;  /* Excitation system model with which this voltage compensator is associated. Default: 0 */
		CIMPP::RemoteInputSignal* RemoteInputSignal;  /* Remote input signal used by this voltage compensator model. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* VoltageCompensatorDynamics_factory();
}
#endif
