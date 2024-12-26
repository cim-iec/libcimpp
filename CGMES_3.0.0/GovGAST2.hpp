#ifndef GovGAST2_H
#define GovGAST2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"
#include "Float.hpp"
#include "Integer.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Temperature.hpp"

namespace CIMPP
{

	/*
	Gas turbine.
	*/
	class GovGAST2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGAST2();
		~GovGAST2() override;

		CIMPP::Float a;  /* Valve positioner (&lt;i&gt;A&lt;/i&gt;). Default: 0.0 */
		CIMPP::PU af1;  /* Exhaust temperature parameter (&lt;i&gt;Af1&lt;/i&gt;).  Unit = PU temperature.  Based on temperature in degrees C. Default: nullptr */
		CIMPP::PU af2;  /* Coefficient equal to 0,5(1-speed) (&lt;i&gt;Af2&lt;/i&gt;). Default: nullptr */
		CIMPP::Float b;  /* Valve positioner (&lt;i&gt;B&lt;/i&gt;). Default: 0.0 */
		CIMPP::PU bf1;  /* (&lt;i&gt;Bf1&lt;/i&gt;).  &lt;i&gt;Bf1&lt;/i&gt; = &lt;i&gt;E&lt;/i&gt;(1 - &lt;i&gt;W&lt;/i&gt;) where &lt;i&gt;E&lt;/i&gt; (speed sensitivity coefficient) is 0,55 to 0,65 x &lt;i&gt;Tr&lt;/i&gt;.  Unit = PU temperature.  Based on temperature in degrees C. Default: nullptr */
		CIMPP::PU bf2;  /* Turbine torque coefficient K&lt;sub&gt;hhv&lt;/sub&gt; (depends on heating value of fuel stream in combustion chamber) (&lt;i&gt;Bf2&lt;/i&gt;). Default: nullptr */
		CIMPP::Float c;  /* Valve positioner (&lt;i&gt;C&lt;/i&gt;). Default: 0.0 */
		CIMPP::PU cf2;  /* Coefficient defining fuel flow where power output is 0% (&lt;i&gt;Cf2&lt;/i&gt;).  Synchronous but no output.  Typically 0,23 x K&lt;sub&gt;hhv&lt;/sub&gt; (23% fuel flow). Default: nullptr */
		CIMPP::Seconds ecr;  /* Combustion reaction time delay (&lt;i&gt;Ecr&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds etd;  /* Turbine and exhaust delay (&lt;i&gt;Etd&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::PU k3;  /* Ratio of fuel adjustment (&lt;i&gt;K3&lt;/i&gt;). Default: nullptr */
		CIMPP::PU k4;  /* Gain of radiation shield (&lt;i&gt;K4&lt;/i&gt;). Default: nullptr */
		CIMPP::PU k5;  /* Gain of radiation shield (&lt;i&gt;K5&lt;/i&gt;). Default: nullptr */
		CIMPP::PU k6;  /* Minimum fuel flow (&lt;i&gt;K6&lt;/i&gt;). Default: nullptr */
		CIMPP::PU kf;  /* Fuel system feedback (&lt;i&gt;Kf&lt;/i&gt;). Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::Seconds t;  /* Fuel control time constant (&lt;i&gt;T&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t3;  /* Radiation shield time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t4;  /* Thermocouple time constant (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t5;  /* Temperature control time constant (&lt;i&gt;T5&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Temperature tc;  /* Temperature control (&lt;i&gt;Tc&lt;/i&gt;).  Unit = [SYMBOL REMOVED]F or [SYMBOL REMOVED]C depending on parameters &lt;i&gt;Af1&lt;/i&gt; and &lt;i&gt;Bf1&lt;/i&gt;. Default: nullptr */
		CIMPP::Seconds tcd;  /* Compressor discharge time constant (&lt;i&gt;Tcd&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tf;  /* Fuel system time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::PU tmax;  /* Maximum turbine limit (&lt;i&gt;Tmax&lt;/i&gt;) (&amp;gt; GovGAST2.tmin). Default: nullptr */
		CIMPP::PU tmin;  /* Minimum turbine limit (&lt;i&gt;Tmin&lt;/i&gt;) (&amp;lt; GovGAST2.tmax). Default: nullptr */
		CIMPP::Temperature tr;  /* Rated temperature (&lt;i&gt;Tr&lt;/i&gt;).  Unit = [SYMBOL REMOVED]C depending on parameters&lt;i&gt; Af1 &lt;/i&gt;and &lt;i&gt;Bf1&lt;/i&gt;. Default: nullptr */
		CIMPP::ActivePower trate;  /* Turbine rating (&lt;i&gt;Trate&lt;/i&gt;).  Unit = MW. Default: nullptr */
		CIMPP::Seconds tt;  /* Temperature controller integration rate (&lt;i&gt;Tt&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::PU w;  /* Governor gain (1/droop) on turbine rating (&lt;i&gt;W&lt;/i&gt;). Default: nullptr */
		CIMPP::Seconds x;  /* Governor lead time constant (&lt;i&gt;X&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds y;  /* Governor lag time constant (&lt;i&gt;Y&lt;/i&gt;) (&amp;gt; 0). Default: nullptr */
		CIMPP::Integer z;  /* Governor mode (&lt;i&gt;Z&lt;/i&gt;). 1 = droop 0 = isochronous. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovGAST2_factory();
}
#endif
