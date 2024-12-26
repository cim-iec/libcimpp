#ifndef UnderexcLim2Simplified_H
#define UnderexcLim2Simplified_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "UnderexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"

namespace CIMPP
{

	/*
	This model can be derived from UnderexcLimIEEE2. The limit characteristic (look -up table) is a single straight-line, the same as UnderexcLimIEEE2 (see Figure 10.4 (p 32), IEEE 421.5-2005 Section 10.2).
	*/
	class UnderexcLim2Simplified : public UnderexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		UnderexcLim2Simplified();
		~UnderexcLim2Simplified() override;

		CIMPP::PU kui;  /* Gain Under excitation limiter (Kui).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU p0;  /* Segment P initial point (P0).  Typical Value = 0. Default: nullptr */
		CIMPP::PU p1;  /* Segment P end point (P1).  Typical Value = 1. Default: nullptr */
		CIMPP::PU q0;  /* Segment Q initial point (Q0).  Typical Value = -0.31. Default: nullptr */
		CIMPP::PU q1;  /* Segment Q end point (Q1).  Typical Value = -0.1. Default: nullptr */
		CIMPP::PU vuimax;  /* Maximum error signal (V).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vuimin;  /* Minimum error signal (V).  Typical Value = 0. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* UnderexcLim2Simplified_factory();
}
#endif
