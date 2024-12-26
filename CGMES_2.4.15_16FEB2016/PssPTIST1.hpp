#ifndef PssPTIST1_H
#define PssPTIST1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	PTI Microprocessor-Based Stabilizer type 1.
	*/
	class PssPTIST1 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssPTIST1();
		~PssPTIST1() override;

		CIMPP::Seconds dtc;  /* Time step related to activation of controls (Dtc).  Typical Value = 0.025. Default: nullptr */
		CIMPP::Seconds dtf;  /* Time step frequency calculation (Dtf).  Typical Value = 0.025. Default: nullptr */
		CIMPP::Seconds dtp;  /* Time step active power calculation (Dtp).  Typical Value = 0.0125. Default: nullptr */
		CIMPP::PU k;  /* Gain (K).  Typical Value = 9. Default: nullptr */
		CIMPP::PU m;  /* (M).  M=2*H.  Typical Value = 5. Default: nullptr */
		CIMPP::Seconds t1;  /* Time constant (T1).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Seconds t2;  /* Time constant (T2).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds t3;  /* Time constant (T3).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds t4;  /* Time constant (T4).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds tf;  /* Time constant (Tf).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds tp;  /* Time constant (Tp).  Typical Value = 0.2. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PssPTIST1_factory();
}
#endif
