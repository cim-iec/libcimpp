#ifndef ExcREXS_H
#define ExcREXS_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "ExcREXSFeedbackSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	General Purpose Rotating Excitation System Model.  This model can be used to represent a wide range of excitation systems whose DC power source is an AC or DC generator. It encompasses IEEE type AC1, AC2, DC1, and DC2 excitation system models.
	*/
	class ExcREXS : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcREXS();
		~ExcREXS() override;

		CIMPP::PU e1;  /* Field voltage value 1 (E1).  Typical Value = 3. Default: nullptr */
		CIMPP::PU e2;  /* Field voltage value 2 (E2).  Typical Value = 4. Default: nullptr */
		CIMPP::ExcREXSFeedbackSignalKind fbf;  /* Rate feedback signal flag (Fbf). Typical Value = fieldCurrent. Default: 0 */
		CIMPP::PU flimf;  /* Limit type flag (Flimf).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kc;  /* Rectifier regulation factor (Kc).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU kd;  /* Exciter regulation factor (Kd).  Typical Value = 2. Default: nullptr */
		CIMPP::PU ke;  /* Exciter field proportional constant (Ke).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kefd;  /* Field voltage feedback gain (Kefd).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds kf;  /* Rate feedback gain (Kf).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU kh;  /* Field voltage controller feedback gain (Kh).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kii;  /* Field Current Regulator Integral Gain (Kii).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kip;  /* Field Current Regulator Proportional Gain (Kip).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ks;  /* Coefficient to allow different usage of the model-speed coefficient (Ks).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kvi;  /* Voltage Regulator Integral Gain (Kvi).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kvp;  /* Voltage Regulator Proportional Gain (Kvp).  Typical Value = 2800. Default: nullptr */
		CIMPP::PU kvphz;  /* V/Hz limiter gain (Kvphz).  Typical Value = 0. Default: nullptr */
		CIMPP::PU nvphz;  /* Pickup speed of V/Hz limiter (Nvphz).  Typical Value = 0. Default: nullptr */
		CIMPP::PU se1;  /* Saturation factor at E1 (Se1).  Typical Value = 0.0001. Default: nullptr */
		CIMPP::PU se2;  /* Saturation factor at E2 (Se2).  Typical Value = 0.001. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage Regulator time constant (Ta).  Typical Value = 0.01. Default: nullptr */
		CIMPP::Seconds tb1;  /* Lag time constant (Tb1).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tb2;  /* Lag time constant (Tb2).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc1;  /* Lead time constant (Tc1).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc2;  /* Lead time constant (Tc2).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter field time constant (Te).  Typical Value = 1.2. Default: nullptr */
		CIMPP::Seconds tf;  /* Rate feedback time constant (Tf).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tf1;  /* Feedback lead time constant (Tf1).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tf2;  /* Feedback lag time constant (Tf2).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tp;  /* Field current Bridge time constant (Tp).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vcmax;  /* Maximum compounding voltage (Vcmax).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vfmax;  /* Maximum Exciter Field Current (Vfmax).  Typical Value = 47. Default: nullptr */
		CIMPP::PU vfmin;  /* Minimum Exciter Field Current (Vfmin).  Typical Value = -20. Default: nullptr */
		CIMPP::PU vimax;  /* Voltage Regulator Input Limit (Vimax).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum controller output (Vrmax).  Typical Value = 47. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum controller output (Vrmin).  Typical Value = -20. Default: nullptr */
		CIMPP::PU xc;  /* Exciter compounding reactance (Xc).  Typical Value = 0. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcREXS_factory();
}
#endif
