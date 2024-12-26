#ifndef ExternalNetworkInjection_H
#define ExternalNetworkInjection_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "RegulatingCondEq.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"
#include "ActivePowerPerFrequency.hpp"
#include "Boolean.hpp"
#include "CurrentFlow.hpp"
#include "Float.hpp"
#include "Integer.hpp"
#include "PU.hpp"
#include "ReactivePower.hpp"

namespace CIMPP
{

	/*
	This class represents the external network and it is used for IEC 60909 calculations.
	*/
	class ExternalNetworkInjection : public RegulatingCondEq
	{
	public:
		/* constructor initialising all attributes to null */
		ExternalNetworkInjection();
		~ExternalNetworkInjection() override;

		CIMPP::ActivePowerPerFrequency governorSCD;  /* Power Frequency Bias. This is the change in power injection divided by the change in frequency and negated.  A positive value of the power frequency bias provides additional power injection upon a drop in frequency. Default: nullptr */
		CIMPP::Boolean ikSecond;  /* Indicates whether initial symmetrical short-circuit current and power have been calculated according to IEC (Ik`).  Used only if short circuit calculations are done according to superposition method. Default: false */
		CIMPP::CurrentFlow maxInitialSymShCCurrent;  /* Maximum initial symmetrical short-circuit currents (Ik` max) in A (Ik` = Sk`/(SQRT(3) Un)). Used for short circuit data exchange according to IEC 60909. Default: nullptr */
		CIMPP::ActivePower maxP;  /* Maximum active power of the injection. Default: nullptr */
		CIMPP::ReactivePower maxQ;  /* Maximum reactive power limit. It is used for modelling of infeed for load flow exchange and not for short circuit modelling. Default: nullptr */
		CIMPP::Float maxR0ToX0Ratio;  /* Maximum ratio of zero sequence resistance of Network Feeder to its zero sequence reactance (R(0)/X(0) max). Used for short circuit data exchange according to IEC 60909. Default: 0.0 */
		CIMPP::Float maxR1ToX1Ratio;  /* Maximum ratio of positive sequence resistance of Network Feeder to its positive sequence reactance (R(1)/X(1) max). Used for short circuit data exchange according to IEC 60909. Default: 0.0 */
		CIMPP::Float maxZ0ToZ1Ratio;  /* Maximum ratio of zero sequence impedance to its positive sequence impedance (Z(0)/Z(1) max). Used for short circuit data exchange according to IEC 60909. Default: 0.0 */
		CIMPP::CurrentFlow minInitialSymShCCurrent;  /* Minimum initial symmetrical short-circuit currents (Ik` min) in A (Ik` = Sk`/(SQRT(3) Un)). Used for short circuit data exchange according to IEC 60909. Default: nullptr */
		CIMPP::ActivePower minP;  /* Minimum active power of the injection. Default: nullptr */
		CIMPP::ReactivePower minQ;  /* Minimum reactive power limit. It is used for modelling of infeed for load flow exchange and not for short circuit modelling. Default: nullptr */
		CIMPP::Float minR0ToX0Ratio;  /* Indicates whether initial symmetrical short-circuit current and power have been calculated according to IEC (Ik`). Used for short circuit data exchange according to IEC 6090. Default: 0.0 */
		CIMPP::Float minR1ToX1Ratio;  /* Minimum ratio of positive sequence resistance of Network Feeder to its positive sequence reactance (R(1)/X(1) min). Used for short circuit data exchange according to IEC 60909. Default: 0.0 */
		CIMPP::Float minZ0ToZ1Ratio;  /* Minimum ratio of zero sequence impedance to its positive sequence impedance (Z(0)/Z(1) min). Used for short circuit data exchange according to IEC 60909. Default: 0.0 */
		CIMPP::ActivePower p;  /* Active power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
		CIMPP::ReactivePower q;  /* Reactive power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
		CIMPP::Integer referencePriority;  /* Priority of unit for use as powerflow voltage phase angle reference bus selection. 0 = don t care (default) 1 = highest priority. 2 is less than 1 and so on. Default: 0 */
		CIMPP::PU voltageFactor;  /* Voltage factor in pu, which was used to calculate short-circuit current Ik` and power Sk`.  Used only if short circuit calculations are done according to superposition method. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExternalNetworkInjection_factory();
}
#endif
