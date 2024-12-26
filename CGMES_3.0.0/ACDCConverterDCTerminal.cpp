/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ACDCConverterDCTerminal.hpp"

#include <algorithm>
#include <sstream>

#include "ACDCConverter.hpp"
#include "DCPolarityKind.hpp"

using namespace CIMPP;

ACDCConverterDCTerminal::ACDCConverterDCTerminal() : DCConductingEquipment(nullptr) {};
ACDCConverterDCTerminal::~ACDCConverterDCTerminal() {};



bool assign_ACDCConverterDCTerminal_polarity(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverterDCTerminal* element = dynamic_cast<ACDCConverterDCTerminal*>(BaseClass_ptr1))
	{
		buffer >> element->polarity;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ACDCConverter_DCTerminals(BaseClass*, BaseClass*);
bool assign_ACDCConverterDCTerminal_DCConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ACDCConverterDCTerminal* element = dynamic_cast<ACDCConverterDCTerminal*>(BaseClass_ptr1);
	ACDCConverter* element2 = dynamic_cast<ACDCConverter*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DCConductingEquipment != element2)
		{
			element->DCConductingEquipment = element2;
			return assign_ACDCConverter_DCTerminals(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char ACDCConverterDCTerminal::debugName[] = "ACDCConverterDCTerminal";
const char* ACDCConverterDCTerminal::debugString() const
{
	return ACDCConverterDCTerminal::debugName;
}

void ACDCConverterDCTerminal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ACDCConverterDCTerminal"), &ACDCConverterDCTerminal_factory));
}

void ACDCConverterDCTerminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverterDCTerminal.polarity"), &assign_ACDCConverterDCTerminal_polarity));
}

void ACDCConverterDCTerminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverterDCTerminal.DCConductingEquipment"), &assign_ACDCConverterDCTerminal_DCConductingEquipment));
}

const BaseClassDefiner ACDCConverterDCTerminal::declare()
{
	return BaseClassDefiner(ACDCConverterDCTerminal::addConstructToMap, ACDCConverterDCTerminal::addPrimitiveAssignFnsToMap, ACDCConverterDCTerminal::addClassAssignFnsToMap, ACDCConverterDCTerminal::debugName);
}

namespace CIMPP
{
	BaseClass* ACDCConverterDCTerminal_factory()
	{
		return new ACDCConverterDCTerminal;
	}
}
