#ifndef Pss2ST_H
#define Pss2ST_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	PTI Microprocessor-Based Stabilizer type 1.
	*/
	class Pss2ST : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss2ST();
		~Pss2ST() override;

		CIMPP::InputSignalKind inputSignal1Type;  /* Type of input signal #1.  Typical Value = rotorAngularFrequencyDeviation. Default: 0 */
		CIMPP::InputSignalKind inputSignal2Type;  /* Type of input signal #2.  Typical Value = generatorElectricalPower. Default: 0 */
		CIMPP::PU k1;  /* Gain (K1). Default: nullptr */
		CIMPP::PU k2;  /* Gain (K2). Default: nullptr */
		CIMPP::PU lsmax;  /* Limiter (Lsmax). Default: nullptr */
		CIMPP::PU lsmin;  /* Limiter (Lsmin). Default: nullptr */
		CIMPP::Seconds t1;  /* Time constant (T1). Default: nullptr */
		CIMPP::Seconds t10;  /* Time constant (T10). Default: nullptr */
		CIMPP::Seconds t2;  /* Time constant (T2). Default: nullptr */
		CIMPP::Seconds t3;  /* Time constant (T3). Default: nullptr */
		CIMPP::Seconds t4;  /* Time constant (T4). Default: nullptr */
		CIMPP::Seconds t5;  /* Time constant (T5). Default: nullptr */
		CIMPP::Seconds t6;  /* Time constant (T6). Default: nullptr */
		CIMPP::Seconds t7;  /* Time constant (T7). Default: nullptr */
		CIMPP::Seconds t8;  /* Time constant (T8). Default: nullptr */
		CIMPP::Seconds t9;  /* Time constant (T9). Default: nullptr */
		CIMPP::PU vcl;  /* Cutoff limiter (Vcl). Default: nullptr */
		CIMPP::PU vcu;  /* Cutoff limiter (Vcu). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Pss2ST_factory();
}
#endif
