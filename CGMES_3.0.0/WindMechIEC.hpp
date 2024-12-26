#ifndef WindMechIEC_H
#define WindMechIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindTurbineType1or2IEC;
	class WindTurbineType3IEC;
	class WindTurbineType4bIEC;

	/*
	Two mass model. Reference: IEC 61400-27-1:2015, 5.6.2.1.
	*/
	class WindMechIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindMechIEC();
		~WindMechIEC() override;

		CIMPP::WindTurbineType1or2IEC* WindTurbineType1or2IEC;  /* Wind generator type 1 or type 2 model with which this wind mechanical model is associated. Default: 0 */
		CIMPP::WindTurbineType3IEC* WindTurbineType3IEC;  /* Wind turbine type 3 model with which this wind mechanical model is associated. Default: 0 */
		CIMPP::WindTurbineType4bIEC* WindTurbineType4bIEC;  /* Wind turbine type 4B model with which this wind mechanical model is associated. Default: 0 */
		CIMPP::PU cdrt;  /* Drive train damping (&lt;i&gt;c&lt;/i&gt;&lt;i&gt;&lt;sub&gt;drt&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;)&lt;/i&gt;. It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds hgen;  /* Inertia constant of generator (&lt;i&gt;H&lt;/i&gt;&lt;i&gt;&lt;sub&gt;gen&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds hwtr;  /* Inertia constant of wind turbine rotor (&lt;i&gt;H&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTR&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kdrt;  /* Drive train stiffness (&lt;i&gt;k&lt;/i&gt;&lt;i&gt;&lt;sub&gt;drt&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindMechIEC_factory();
}
#endif
