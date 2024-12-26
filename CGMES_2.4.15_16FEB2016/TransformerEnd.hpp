#ifndef TransformerEnd_H
#define TransformerEnd_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "Integer.hpp"
#include "Reactance.hpp"
#include "Resistance.hpp"

namespace CIMPP
{
	class BaseVoltage;
	class PhaseTapChanger;
	class RatioTapChanger;
	class Terminal;

	/*
	A conducting connection point of a power transformer. It corresponds to a physical transformer winding terminal.  In earlier CIM versions, the TransformerWinding class served a similar purpose, but this class is more flexible because it associates to terminal but is not a specialization of ConductingEquipment.
	*/
	class TransformerEnd : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		TransformerEnd();
		~TransformerEnd() override;

		CIMPP::BaseVoltage* BaseVoltage;  /* Base voltage of the transformer end.  This is essential for PU calculation. Default: 0 */
		CIMPP::PhaseTapChanger* PhaseTapChanger;  /* Transformer end to which this phase tap changer belongs. Default: 0 */
		CIMPP::RatioTapChanger* RatioTapChanger;  /* Transformer end to which this ratio tap changer belongs. Default: 0 */
		CIMPP::Terminal* Terminal;  /* Terminal of the power transformer to which this transformer end belongs. Default: 0 */
		CIMPP::Integer endNumber;  /* Number for this transformer end, corresponding to the end`s order in the power transformer vector group or phase angle clock number.  Highest voltage winding should be 1.  Each end within a power transformer should have a unique subsequent end number.   Note the transformer end number need not match the terminal sequence number. Default: 0 */
		CIMPP::Boolean grounded;  /* (for Yn and Zn connections) True if the neutral is solidly grounded. Default: false */
		CIMPP::Resistance rground;  /* (for Yn and Zn connections) Resistance part of neutral impedance where `grounded` is true. Default: nullptr */
		CIMPP::Reactance xground;  /* (for Yn and Zn connections) Reactive part of neutral impedance where `grounded` is true. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* TransformerEnd_factory();
}
#endif
