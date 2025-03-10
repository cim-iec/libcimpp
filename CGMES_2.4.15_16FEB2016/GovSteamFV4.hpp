#ifndef GovSteamFV4_H
#define GovSteamFV4_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	Detailed electro-hydraulic governor for steam unit.
	*/
	class GovSteamFV4 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamFV4();
		~GovSteamFV4() override;

		CIMPP::PU cpsmn;  /* Minimum value of pressure regulator output (Cpsmn).  Typical Value = -1. Default: nullptr */
		CIMPP::PU cpsmx;  /* Maximum value of pressure regulator output (Cpsmx).  Typical Value = 1. Default: nullptr */
		CIMPP::PU crmn;  /* Minimum value of regulator set-point (Crmn).  Typical Value = 0. Default: nullptr */
		CIMPP::PU crmx;  /* Maximum value of regulator set-point (Crmx).  Typical Value = 1.2. Default: nullptr */
		CIMPP::PU kdc;  /* Derivative gain of pressure regulator (Kdc).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kf1;  /* Frequency bias (reciprocal of droop) (Kf1).  Typical Value = 20. Default: nullptr */
		CIMPP::PU kf3;  /* Frequency control (reciprocal of droop) (Kf3).  Typical Value = 20. Default: nullptr */
		CIMPP::PU khp;  /* Fraction  of total turbine output generated by HP part (Khp).  Typical Value = 0.35. Default: nullptr */
		CIMPP::PU kic;  /* Integral gain of pressure regulator (Kic).  Typical Value = 0.0033. Default: nullptr */
		CIMPP::PU kip;  /* Integral gain of pressure feedback regulator (Kip).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU kit;  /* Integral gain of electro-hydraulic regulator (Kit).  Typical Value = 0.04. Default: nullptr */
		CIMPP::PU kmp1;  /* First gain coefficient of  intercept valves characteristic (Kmp1).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU kmp2;  /* Second gain coefficient of intercept valves characteristic (Kmp2).  Typical Value = 3.5. Default: nullptr */
		CIMPP::PU kpc;  /* Proportional gain of pressure regulator (Kpc).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU kpp;  /* Proportional gain of pressure feedback regulator (Kpp).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kpt;  /* Proportional gain of electro-hydraulic regulator (Kpt).  Typical Value = 0.3. Default: nullptr */
		CIMPP::PU krc;  /* Maximum variation of fuel flow (Krc).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU ksh;  /* Pressure loss due to flow friction in the boiler tubes (Ksh).  Typical Value = 0.08. Default: nullptr */
		CIMPP::PU lpi;  /* Maximum negative power error (Lpi).  Typical Value = -0.15. Default: nullptr */
		CIMPP::PU lps;  /* Maximum positive power error (Lps).  Typical Value = 0.03. Default: nullptr */
		CIMPP::PU mnef;  /* Lower limit for frequency correction (MN).  Typical Value = -0.05. Default: nullptr */
		CIMPP::PU mxef;  /* Upper limit for frequency correction (MX).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU pr1;  /* First value of pressure set point static characteristic (Pr1).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU pr2;  /* Second value of pressure set point static characteristic, corresponding to Ps0 = 1.0 PU (Pr2).  Typical Value = 0.75. Default: nullptr */
		CIMPP::PU psmn;  /* Minimum value of pressure set point static characteristic (Psmn).  Typical Value = 1. Default: nullptr */
		CIMPP::PU rsmimn;  /* Minimum value of integral regulator (Rsmimn).  Typical Value = 0. Default: nullptr */
		CIMPP::PU rsmimx;  /* Maximum value of integral regulator (Rsmimx).  Typical Value = 1.1. Default: nullptr */
		CIMPP::PU rvgmn;  /* Minimum value of integral regulator (Rvgmn).  Typical Value = 0. Default: nullptr */
		CIMPP::PU rvgmx;  /* Maximum value of integral regulator (Rvgmx).  Typical Value = 1.2. Default: nullptr */
		CIMPP::PU srmn;  /* Minimum valve opening (Srmn).  Typical Value = 0. Default: nullptr */
		CIMPP::PU srmx;  /* Maximum valve opening (Srmx).  Typical Value = 1.1. Default: nullptr */
		CIMPP::PU srsmp;  /* Intercept valves characteristic discontinuity point (Srsmp).  Typical Value = 0.43. Default: nullptr */
		CIMPP::Simple_Float svmn;  /* Maximum regulator gate closing velocity (Svmn).  Typical Value = -0.0333. Default: nullptr */
		CIMPP::Simple_Float svmx;  /* Maximum regulator gate opening velocity (Svmx).  Typical Value = 0.0333. Default: nullptr */
		CIMPP::Seconds ta;  /* Control valves rate opening time (Ta).  Typical Value = 0.8. Default: nullptr */
		CIMPP::Seconds tam;  /* Intercept valves rate opening time (Tam).  Typical Value = 0.8. Default: nullptr */
		CIMPP::Seconds tc;  /* Control valves rate closing time (Tc).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds tcm;  /* Intercept valves rate closing time (Tcm).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds tdc;  /* Derivative time constant of pressure regulator (Tdc).  Typical Value = 90. Default: nullptr */
		CIMPP::Seconds tf1;  /* Time constant of fuel regulation (Tf1).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds tf2;  /* Time constant of steam chest (Tf2).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds thp;  /* High pressure (HP) time constant of the turbine (Thp).  Typical Value = 0.15. Default: nullptr */
		CIMPP::Seconds tmp;  /* Low pressure (LP) time constant of the turbine (Tmp).  Typical Value = 0.4. Default: nullptr */
		CIMPP::Seconds trh;  /* Reheater  time constant of the turbine (Trh).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds tv;  /* Boiler time constant (Tv).  Typical Value = 60. Default: nullptr */
		CIMPP::Seconds ty;  /* Control valves servo time constant (Ty).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU y;  /* Coefficient of linearized equations of turbine (Stodola formulation) (Y).  Typical Value = 0.13. Default: nullptr */
		CIMPP::PU yhpmn;  /* Minimum control valve position (Yhpmn).  Typical Value = 0. Default: nullptr */
		CIMPP::PU yhpmx;  /* Maximum control valve position (Yhpmx).  Typical Value = 1.1. Default: nullptr */
		CIMPP::PU ympmn;  /* Minimum intercept valve position (Ympmn).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ympmx;  /* Maximum intercept valve position (Ympmx).  Typical Value = 1.1. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* GovSteamFV4_factory();
}
#endif
