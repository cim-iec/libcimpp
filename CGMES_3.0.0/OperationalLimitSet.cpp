/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OperationalLimitSet.hpp"

#include <algorithm>
#include <sstream>

#include "Equipment.hpp"
#include "OperationalLimit.hpp"
#include "ACDCTerminal.hpp"

using namespace CIMPP;

OperationalLimitSet::OperationalLimitSet() : Equipment(nullptr), Terminal(nullptr) {};
OperationalLimitSet::~OperationalLimitSet() {};






bool assign_Equipment_OperationalLimitSet(BaseClass*, BaseClass*);
bool assign_OperationalLimitSet_Equipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OperationalLimitSet* element = dynamic_cast<OperationalLimitSet*>(BaseClass_ptr1);
	Equipment* element2 = dynamic_cast<Equipment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Equipment != element2)
		{
			element->Equipment = element2;
			return assign_Equipment_OperationalLimitSet(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_OperationalLimit_OperationalLimitSet(BaseClass*, BaseClass*);
bool assign_OperationalLimitSet_OperationalLimitValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OperationalLimitSet* element = dynamic_cast<OperationalLimitSet*>(BaseClass_ptr1);
	OperationalLimit* element2 = dynamic_cast<OperationalLimit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->OperationalLimitValue.begin(), element->OperationalLimitValue.end(), element2) == element->OperationalLimitValue.end())
		{
			element->OperationalLimitValue.push_back(element2);
			return assign_OperationalLimit_OperationalLimitSet(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ACDCTerminal_OperationalLimitSet(BaseClass*, BaseClass*);
bool assign_OperationalLimitSet_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OperationalLimitSet* element = dynamic_cast<OperationalLimitSet*>(BaseClass_ptr1);
	ACDCTerminal* element2 = dynamic_cast<ACDCTerminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Terminal != element2)
		{
			element->Terminal = element2;
			return assign_ACDCTerminal_OperationalLimitSet(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char OperationalLimitSet::debugName[] = "OperationalLimitSet";
const char* OperationalLimitSet::debugString() const
{
	return OperationalLimitSet::debugName;
}

void OperationalLimitSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:OperationalLimitSet"), &OperationalLimitSet_factory));
}

void OperationalLimitSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void OperationalLimitSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitSet.Equipment"), &assign_OperationalLimitSet_Equipment));
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitSet.OperationalLimitValue"), &assign_OperationalLimitSet_OperationalLimitValue));
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitSet.Terminal"), &assign_OperationalLimitSet_Terminal));
}

const BaseClassDefiner OperationalLimitSet::declare()
{
	return BaseClassDefiner(OperationalLimitSet::addConstructToMap, OperationalLimitSet::addPrimitiveAssignFnsToMap, OperationalLimitSet::addClassAssignFnsToMap, OperationalLimitSet::debugName);
}

namespace CIMPP
{
	BaseClass* OperationalLimitSet_factory()
	{
		return new OperationalLimitSet;
	}
}
