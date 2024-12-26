#ifndef TapChanger_H
#define TapChanger_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerSystemResource.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "Integer.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class SvTapStep;
	class TapChangerControl;
	class TapSchedule;

	/*
	Mechanism for changing transformer winding tap positions.
	*/
	class TapChanger : public PowerSystemResource
	{
	public:
		/* constructor initialising all attributes to null */
		TapChanger();
		~TapChanger() override;

		CIMPP::SvTapStep* SvTapStep;  /* The tap step state associated with the tap changer. Default: 0 */
		CIMPP::TapChangerControl* TapChangerControl;  /* The regulating control scheme in which this tap changer participates. Default: 0 */
		std::list<CIMPP::TapSchedule*> TapSchedules;  /* A TapChanger can have TapSchedules. Default: 0 */
		CIMPP::Boolean controlEnabled;  /* Specifies the regulation status of the equipment.  True is regulating, false is not regulating. Default: false */
		CIMPP::Integer highStep;  /* Highest possible tap step position, advance from neutral. The attribute shall be greater than lowStep. Default: 0 */
		CIMPP::Integer lowStep;  /* Lowest possible tap step position, retard from neutral. Default: 0 */
		CIMPP::Boolean ltcFlag;  /* Specifies whether or not a TapChanger has load tap changing capabilities. Default: false */
		CIMPP::Integer neutralStep;  /* The neutral tap step position for this winding. The attribute shall be equal to or greater than lowStep and equal or less than highStep. It is the step position where the voltage is neutralU when the other terminals of the transformer are at the ratedU.  If there are other tap changers on the transformer those taps are kept constant at their neutralStep. Default: 0 */
		CIMPP::Voltage neutralU;  /* Voltage at which the winding operates at the neutral tap setting. It is the voltage at the terminal of the PowerTransformerEnd associated with the tap changer when all tap changers on the transformer are at their neutralStep position.  Normally neutralU of the tap changer is the same as ratedU of the PowerTransformerEnd, but it can differ in special cases such as when the tapping mechanism is separate from the winding more common on lower voltage transformers. This attribute is not relevant for PhaseTapChangerAsymmetrical, PhaseTapChangerSymmetrical and PhaseTapChangerLinear. Default: nullptr */
		CIMPP::Integer normalStep;  /* The tap step position used in `normal` network operation for this winding. For a `Fixed` tap changer indicates the current physical tap setting. The attribute shall be equal to or greater than lowStep and equal to or less than highStep. Default: 0 */
		CIMPP::Float step;  /* Tap changer position. Starting step for a steady state solution. Non integer values are allowed to support continuous tap variables. The reasons for continuous value are to support study cases where no discrete tap changer has yet been designed, a solution where a narrow voltage band forces the tap step to oscillate or to accommodate for a continuous solution as input. The attribute shall be equal to or greater than lowStep and equal to or less than highStep. Default: 0.0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* TapChanger_factory();
}
#endif
