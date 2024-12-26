#ifndef LimitTypeKind_H
#define LimitTypeKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	The enumeration defines the kinds of the limit types.
	*/
	class LimitTypeKind
	{
	public:
		enum LimitTypeKind_ENUM
		{
			/**
			 * The Permanent Admissible Transmission Loading (PATL) is the loading in Amps, MVA or MW that can be accepted by a network branch for an unlimited duration without any risk for the material. The duration attribute is not used and shall be excluded for the PATL limit type. Hence only one limit value exists for the PATL type.
			 */
			patl,
			/**
			 * Permanent Admissible Transmission Loading Threshold  (PATLT) is a value in engineering units defined for PATL and calculated using percentage less than 100 of the PATL type intended to alert operators of an arising condition. The percentage should be given in the name of the OperationalLimitSet. The aceptableDuration is another way to express the severity of the limit.
			 */
			patlt,
			/**
			 * Temporarily Admissible Transmission Loading (TATL) which is the loading in Amps, MVA or MW that can be accepted by a branch for a certain limited duration. The TATL can be defined in different ways:   Such a definition of TATL can depend on the initial operating conditions of the network element (sag situation of a line). The duration attribute can be used define several TATL limit types. Hence multiple TATL limit values may exist having different durations.
			 */
			tatl,
			/**
			 * Tripping Current (TC) is the ultimate intensity without any delay. It is defined as the threshold the line will trip without any possible remedial actions. The tripping of the network element is ordered by protections against short circuits or by overload protections, but in any case, the activation delay of these protections is not compatible with the reaction delay of an operator (less than one minute). The duration is always zero and the duration attribute may be left out. Hence only one limit value exists for the TC type.
			 */
			tc,
			/**
			 * Tripping Current Threshold  (TCT) is a value in engineering units defined for TC and calculated using percentage less than 100 of the TC type intended to alert operators of an arising condition. The percentage should be given in the name of the OperationalLimitSet. The aceptableDuration is another way to express the severity of the limit.
			 */
			tct,
			/**
			 * Referring to the rating of the equipments, a voltage too high can lead to accelerated ageing or the destruction of the equipment.  This limit type may or may not have duration.
			 */
			highVoltage,
			/**
			 * A too low voltage can disturb the normal operation of some protections and transformer equipped with on-load tap changers, electronic power devices or can affect the behaviour of the auxiliaries of generation units. This limit type may or may not have duration.
			 */
			lowVoltage,
		};

		LimitTypeKind() : value(), initialized(false) {}
		LimitTypeKind(LimitTypeKind_ENUM value) : value(value), initialized(true) {}

		LimitTypeKind& operator=(LimitTypeKind_ENUM rop);
		operator LimitTypeKind_ENUM() const;

		LimitTypeKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, LimitTypeKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const LimitTypeKind& obj);
	};
}
#endif
