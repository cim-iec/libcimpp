/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ValueToAlias.hpp"

#include <algorithm>
#include <sstream>

#include "ValueAliasSet.hpp"
#include "Integer.hpp"

using namespace CIMPP;

ValueToAlias::ValueToAlias() : ValueAliasSet(nullptr) {};
ValueToAlias::~ValueToAlias() {};



bool assign_ValueToAlias_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ValueToAlias* element = dynamic_cast<ValueToAlias*>(BaseClass_ptr1))
	{
		buffer >> element->value;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ValueAliasSet_Values(BaseClass*, BaseClass*);
bool assign_ValueToAlias_ValueAliasSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ValueToAlias* element = dynamic_cast<ValueToAlias*>(BaseClass_ptr1);
	ValueAliasSet* element2 = dynamic_cast<ValueAliasSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ValueAliasSet != element2)
		{
			element->ValueAliasSet = element2;
			return assign_ValueAliasSet_Values(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char ValueToAlias::debugName[] = "ValueToAlias";
const char* ValueToAlias::debugString() const
{
	return ValueToAlias::debugName;
}

void ValueToAlias::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ValueToAlias"), &ValueToAlias_factory));
}

void ValueToAlias::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ValueToAlias.value"), &assign_ValueToAlias_value));
}

void ValueToAlias::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ValueToAlias.ValueAliasSet"), &assign_ValueToAlias_ValueAliasSet));
}

const BaseClassDefiner ValueToAlias::declare()
{
	return BaseClassDefiner(ValueToAlias::addConstructToMap, ValueToAlias::addPrimitiveAssignFnsToMap, ValueToAlias::addClassAssignFnsToMap, ValueToAlias::debugName);
}

namespace CIMPP
{
	BaseClass* ValueToAlias_factory()
	{
		return new ValueToAlias;
	}
}
