#ifndef LoadGenericNonLinear_H
#define LoadGenericNonLinear_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "LoadDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "GenericNonLinearLoadModelKind.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	These load models (known also as generic non-linear dynamic (GNLD) load models) can be used in mid-term and long-term voltage stability simulations (i.e., to study voltage collapse), as they can replace a more detailed representation of aggregate load, including induction motors, thermostatically controlled and static loads.
	*/
	class LoadGenericNonLinear : public LoadDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		LoadGenericNonLinear();
		~LoadGenericNonLinear() override;

		CIMPP::Simple_Float bs;  /* Steady state voltage index for reactive power (BS). Default: nullptr */
		CIMPP::Simple_Float bt;  /* Transient voltage index for reactive power (BT). Default: nullptr */
		CIMPP::GenericNonLinearLoadModelKind genericNonLinearLoadModelType;  /* Type of generic non-linear load model. Default: 0 */
		CIMPP::Simple_Float ls;  /* Steady state voltage index for active power (LS). Default: nullptr */
		CIMPP::Simple_Float lt;  /* Transient voltage index for active power (LT). Default: nullptr */
		CIMPP::Simple_Float pt;  /* Dynamic portion of active load (P). Default: nullptr */
		CIMPP::Simple_Float qt;  /* Dynamic portion of reactive load (Q). Default: nullptr */
		CIMPP::Seconds tp;  /* Time constant of lag function of active power (T). Default: nullptr */
		CIMPP::Seconds tq;  /* Time constant of lag function of reactive power (T). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* LoadGenericNonLinear_factory();
}
#endif
