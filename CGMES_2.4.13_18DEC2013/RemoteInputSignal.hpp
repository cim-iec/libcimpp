#ifndef RemoteInputSignal_H
#define RemoteInputSignal_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "RemoteSignalKind.hpp"

namespace CIMPP
{
	class DiscontinuousExcitationControlDynamics;
	class PFVArControllerType1Dynamics;
	class PowerSystemStabilizerDynamics;
	class Terminal;
	class UnderexcitationLimiterDynamics;
	class VoltageCompensatorDynamics;
	class WindPlantDynamics;
	class WindTurbineType1or2Dynamics;
	class WindTurbineType3or4Dynamics;

	/*
	Supports connection to a terminal associated with a remote bus from which an input signal of a specific type is coming.
	*/
	class RemoteInputSignal : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		RemoteInputSignal();
		~RemoteInputSignal() override;

		CIMPP::DiscontinuousExcitationControlDynamics* DiscontinuousExcitationControlDynamics;  /* Discontinuous excitation control model using this remote input signal. Default: 0 */
		CIMPP::PFVArControllerType1Dynamics* PFVArControllerType1Dynamics;  /* Power Factor or VAr controller Type I model using this remote input signal. Default: 0 */
		CIMPP::PowerSystemStabilizerDynamics* PowerSystemStabilizerDynamics;  /* Power system stabilizer model using this remote input signal. Default: 0 */
		CIMPP::Terminal* Terminal;  /* Remote terminal with which this input signal is associated. Default: 0 */
		CIMPP::UnderexcitationLimiterDynamics* UnderexcitationLimiterDynamics;  /* Underexcitation limiter model using this remote input signal. Default: 0 */
		CIMPP::VoltageCompensatorDynamics* VoltageCompensatorDynamics;  /* Voltage compensator model using this remote input signal. Default: 0 */
		CIMPP::WindPlantDynamics* WindPlantDynamics;  /* The remote signal with which this power plant is associated. Default: 0 */
		CIMPP::WindTurbineType1or2Dynamics* WindTurbineType1or2Dynamics;  /* Wind generator Type 1 or Type 2 model using this remote input signal. Default: 0 */
		CIMPP::WindTurbineType3or4Dynamics* WindTurbineType3or4Dynamics;  /* Remote input signal used by these wind turbine Type 3 or 4 models. Default: 0 */
		CIMPP::RemoteSignalKind remoteSignalType;  /* Type of input signal. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* RemoteInputSignal_factory();
}
#endif
