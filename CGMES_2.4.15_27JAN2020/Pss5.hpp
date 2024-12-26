#ifndef Pss5_H
#define Pss5_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	Italian PSS - Detailed PSS.
	*/
	class Pss5 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss5();
		~Pss5() override;

		CIMPP::Boolean ctw2;  /* Selector for Second washout enabling (C). true = second washout filter is bypassed false = second washout filter in use. Typical Value = true. Default: false */
		CIMPP::PU deadband;  /* Stabilizer output dead band (DeadBand).  Typical Value = 0. Default: nullptr */
		CIMPP::Boolean isfreq;  /* Selector for Frequency/shaft speed input (IsFreq). true = speed false = frequency. Typical Value = true. Default: false */
		CIMPP::Simple_Float kf;  /* Frequency/shaft speed input gain (K).  Typical Value = 5. Default: nullptr */
		CIMPP::Simple_Float kpe;  /* Electric power input gain (K).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Simple_Float kpss;  /* PSS gain (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU pmm;  /* Minimum power PSS enabling (P).  Typical Value = 0.25. Default: nullptr */
		CIMPP::Seconds tl1;  /* Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tl2;  /* Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tl3;  /* Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tl4;  /* Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tpe;  /* Electric power filter time constant (T).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds tw1;  /* First WashOut (T).  Typical Value = 3.5. Default: nullptr */
		CIMPP::Seconds tw2;  /* Second WashOut (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Boolean vadat;  /*  Default: false */
		CIMPP::PU vsmn;  /* Stabilizer output max limit (V).  Typical Value = -0.1. Default: nullptr */
		CIMPP::PU vsmx;  /* Stabilizer output min limit (V).  Typical Value = 0.1. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Pss5_factory();
}
#endif
