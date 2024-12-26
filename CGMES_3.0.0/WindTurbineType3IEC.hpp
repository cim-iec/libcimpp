#ifndef WindTurbineType3IEC_H
#define WindTurbineType3IEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "WindTurbineType3or4IEC.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class WindAeroOneDimIEC;
	class WindAeroTwoDimIEC;
	class WindContPType3IEC;
	class WindContPitchAngleIEC;
	class WindGenType3IEC;
	class WindMechIEC;

	/*
	Parent class supporting relationships to IEC wind turbines type 3 including their control models.
	*/
	class WindTurbineType3IEC : public WindTurbineType3or4IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindTurbineType3IEC();
		~WindTurbineType3IEC() override;

		CIMPP::WindAeroOneDimIEC* WindAeroOneDimIEC;  /* Wind aerodynamic model associated with this wind generator type 3 model. Default: 0 */
		CIMPP::WindAeroTwoDimIEC* WindAeroTwoDimIEC;  /* Wind aerodynamic model associated with this wind turbine type 3 model. Default: 0 */
		CIMPP::WindContPType3IEC* WindContPType3IEC;  /* Wind control P type 3 model associated with this wind turbine type 3 model. Default: 0 */
		CIMPP::WindContPitchAngleIEC* WindContPitchAngleIEC;  /* Wind control pitch angle model associated with this wind turbine type 3. Default: 0 */
		CIMPP::WindGenType3IEC* WindGenType3IEC;  /* Wind generator type 3 model associated with this wind turbine type 3 model. Default: 0 */
		CIMPP::WindMechIEC* WindMechIEC;  /* Wind mechanical model associated with this wind turbine type 3 model. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindTurbineType3IEC_factory();
}
#endif
