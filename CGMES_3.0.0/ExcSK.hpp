#ifndef ExcSK_H
#define ExcSK_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "ApparentPower.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Slovakian excitation system.  UEL and secondary voltage control are included in this model. When this model is used, there cannot be a separate underexcitation limiter or VAr controller model.
	*/
	class ExcSK : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcSK();
		~ExcSK() override;

		CIMPP::PU efdmax;  /* Field voltage clipping upper level limit (&lt;i&gt;Efdmax&lt;/i&gt;) (&amp;gt; ExcSK.efdmin). Default: nullptr */
		CIMPP::PU efdmin;  /* Field voltage clipping lower level limit (&lt;i&gt;Efdmin&lt;/i&gt;) (&amp;lt; ExcSK.efdmax). Default: nullptr */
		CIMPP::PU emax;  /* Maximum field voltage output (&lt;i&gt;Emax&lt;/i&gt;) (&amp;gt; ExcSK.emin).  Typical value = 20. Default: nullptr */
		CIMPP::PU emin;  /* Minimum field voltage output (&lt;i&gt;Emin&lt;/i&gt;) (&amp;lt; ExcSK.emax).  Typical value = -20. Default: nullptr */
		CIMPP::PU k;  /* Gain (&lt;i&gt;K&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU k1;  /* Parameter of underexcitation limit (&lt;i&gt;K1&lt;/i&gt;).  Typical value = 0,1364. Default: nullptr */
		CIMPP::PU k2;  /* Parameter of underexcitation limit (&lt;i&gt;K2&lt;/i&gt;).  Typical value = -0,3861. Default: nullptr */
		CIMPP::PU kc;  /* PI controller gain (&lt;i&gt;Kc&lt;/i&gt;).  Typical value = 70. Default: nullptr */
		CIMPP::PU kce;  /* Rectifier regulation factor (&lt;i&gt;Kce&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kd;  /* Exciter internal reactance (&lt;i&gt;Kd&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kgob;  /* P controller gain (&lt;i&gt;Kgob&lt;/i&gt;).  Typical value = 10. Default: nullptr */
		CIMPP::PU kp;  /* PI controller gain (&lt;i&gt;Kp&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kqi;  /* PI controller gain of integral component (&lt;i&gt;Kqi&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kqob;  /* Rate of rise of the reactive power (&lt;i&gt;Kqob&lt;/i&gt;). Default: nullptr */
		CIMPP::PU kqp;  /* PI controller gain (&lt;i&gt;Kqp&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU nq;  /* Deadband of reactive power (&lt;i&gt;nq&lt;/i&gt;).  Determines the range of sensitivity.  Typical value = 0,001. Default: nullptr */
		CIMPP::Boolean qconoff;  /* Secondary voltage control state (&lt;i&gt;Qc_on_off&lt;/i&gt;). true = secondary voltage control is on false = secondary voltage control is off. Typical value = false. Default: false */
		CIMPP::PU qz;  /* Desired value (setpoint) of reactive power, manual setting (&lt;i&gt;Qz&lt;/i&gt;). Default: nullptr */
		CIMPP::Boolean remote;  /* Selector to apply automatic calculation in secondary controller model (&lt;i&gt;remote&lt;/i&gt;). true = automatic calculation is activated false = manual set is active; the use of desired value of reactive power (&lt;i&gt;Qz&lt;/i&gt;) is required. Typical value = true. Default: false */
		CIMPP::ApparentPower sbase;  /* Apparent power of the unit (&lt;i&gt;Sbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MVA.  Typical value = 259. Default: nullptr */
		CIMPP::Seconds tc;  /* PI controller phase lead time constant (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 8. Default: nullptr */
		CIMPP::Seconds te;  /* Time constant of gain block (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds ti;  /* PI controller phase lead time constant (&lt;i&gt;Ti&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2. Default: nullptr */
		CIMPP::Seconds tp;  /* Time constant (&lt;i&gt;Tp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds tr;  /* Voltage transducer time constant (&lt;i&gt;Tr&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,01. Default: nullptr */
		CIMPP::PU uimax;  /* Maximum error (&lt;i&gt;UImax&lt;/i&gt;) (&amp;gt; ExcSK.uimin).  Typical value = 10. Default: nullptr */
		CIMPP::PU uimin;  /* Minimum error (&lt;i&gt;UImin&lt;/i&gt;) (&amp;lt; ExcSK.uimax).  Typical value = -10. Default: nullptr */
		CIMPP::PU urmax;  /* Maximum controller output (&lt;i&gt;URmax&lt;/i&gt;) (&amp;gt; ExcSK.urmin).  Typical value = 10. Default: nullptr */
		CIMPP::PU urmin;  /* Minimum controller output (&lt;i&gt;URmin&lt;/i&gt;) (&amp;lt; ExcSK.urmax).  Typical value = -10. Default: nullptr */
		CIMPP::PU vtmax;  /* Maximum terminal voltage input (&lt;i&gt;Vtmax&lt;/i&gt;) (&amp;gt; ExcSK.vtmin).  Determines the range of voltage deadband.  Typical value = 1,05. Default: nullptr */
		CIMPP::PU vtmin;  /* Minimum terminal voltage input (&lt;i&gt;Vtmin&lt;/i&gt;) (&amp;lt; ExcSK.vtmax).  Determines the range of voltage deadband.  Typical value = 0,95. Default: nullptr */
		CIMPP::PU yp;  /* Maximum output (&lt;i&gt;Yp&lt;/i&gt;).  Typical value = 1. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcSK_factory();
}
#endif
