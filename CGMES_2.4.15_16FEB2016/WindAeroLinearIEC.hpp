#ifndef WindAeroLinearIEC_H
#define WindAeroLinearIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "AngleDegrees.hpp"
#include "PU.hpp"

namespace CIMPP
{
	class WindGenTurbineType3IEC;

	/*
	The linearised aerodynamic model.    Reference: IEC Standard 614000-27-1 Section 6.6.1.2.
	*/
	class WindAeroLinearIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindAeroLinearIEC();
		~WindAeroLinearIEC() override;

		CIMPP::WindGenTurbineType3IEC* WindGenTurbineType3IEC;  /* Wind generator type 3 model with which this wind aerodynamic model is associated. Default: 0 */
		CIMPP::PU dpomega;  /* Partial derivative of aerodynamic power with respect to changes in WTR speed (). It is case dependent parameter. Default: nullptr */
		CIMPP::PU dptheta;  /* Partial derivative of aerodynamic power with respect to changes in pitch angle (). It is case dependent parameter. Default: nullptr */
		CIMPP::PU omegazero;  /* Rotor speed if the wind turbine is not derated (). It is case dependent parameter. Default: nullptr */
		CIMPP::PU pavail;  /* Available aerodynamic power (). It is case dependent parameter. Default: nullptr */
		CIMPP::AngleDegrees thetazero;  /* Pitch angle if the wind turbine is not derated (). It is case dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindAeroLinearIEC_factory();
}
#endif
