/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Discrete.hpp"

#include <algorithm>
#include <sstream>

#include "DiscreteValue.hpp"
#include "ValueAliasSet.hpp"

using namespace CIMPP;

Discrete::Discrete() : ValueAliasSet(nullptr) {};
Discrete::~Discrete() {};





bool assign_DiscreteValue_Discrete(BaseClass*, BaseClass*);
bool assign_Discrete_DiscreteValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Discrete* element = dynamic_cast<Discrete*>(BaseClass_ptr1);
	DiscreteValue* element2 = dynamic_cast<DiscreteValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DiscreteValues.begin(), element->DiscreteValues.end(), element2) == element->DiscreteValues.end())
		{
			element->DiscreteValues.push_back(element2);
			return assign_DiscreteValue_Discrete(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ValueAliasSet_Discretes(BaseClass*, BaseClass*);
bool assign_Discrete_ValueAliasSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Discrete* element = dynamic_cast<Discrete*>(BaseClass_ptr1);
	ValueAliasSet* element2 = dynamic_cast<ValueAliasSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ValueAliasSet != element2)
		{
			element->ValueAliasSet = element2;
			return assign_ValueAliasSet_Discretes(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char Discrete::debugName[] = "Discrete";
const char* Discrete::debugString() const
{
	return Discrete::debugName;
}

void Discrete::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Discrete"), &Discrete_factory));
}

void Discrete::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Discrete::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Discrete.DiscreteValues"), &assign_Discrete_DiscreteValues));
	assign_map.insert(std::make_pair(std::string("cim:Discrete.ValueAliasSet"), &assign_Discrete_ValueAliasSet));
}

const BaseClassDefiner Discrete::declare()
{
	return BaseClassDefiner(Discrete::addConstructToMap, Discrete::addPrimitiveAssignFnsToMap, Discrete::addClassAssignFnsToMap, Discrete::debugName);
}

namespace CIMPP
{
	BaseClass* Discrete_factory()
	{
		return new Discrete;
	}
}
