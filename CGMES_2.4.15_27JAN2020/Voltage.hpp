#ifndef Voltage_H
#define Voltage_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class Voltage : public BaseClass
	{

	public:
		Voltage();
		virtual ~Voltage();
		Voltage(long double value);
		static const BaseClassDefiner declare();
		Voltage& operator=(long double &rop);
		Voltage& operator+=(const Voltage& rhs);
		Voltage& operator-=(const Voltage& rhs);
		Voltage& operator*=(const Voltage& rhs);
		Voltage& operator/=(const Voltage& rhs);
		friend std::istream& operator>>(std::istream& lop, Voltage& rop);
		operator long double();

		long double value = 0.0;
		bool initialized = false;

		static const char debugName[];
		virtual const char* debugString();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
	};
}
#endif
