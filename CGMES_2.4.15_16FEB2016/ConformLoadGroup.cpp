/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ConformLoadGroup.hpp"

#include <algorithm>
#include <sstream>

#include "ConformLoadSchedule.hpp"
#include "ConformLoad.hpp"

using namespace CIMPP;

ConformLoadGroup::ConformLoadGroup() {};
ConformLoadGroup::~ConformLoadGroup() {};





bool assign_ConformLoadSchedule_ConformLoadGroup(BaseClass*, BaseClass*);
bool assign_ConformLoadGroup_ConformLoadSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConformLoadGroup* element = dynamic_cast<ConformLoadGroup*>(BaseClass_ptr1);
	ConformLoadSchedule* element2 = dynamic_cast<ConformLoadSchedule*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ConformLoadSchedules.begin(), element->ConformLoadSchedules.end(), element2) == element->ConformLoadSchedules.end())
		{
			element->ConformLoadSchedules.push_back(element2);
			return assign_ConformLoadSchedule_ConformLoadGroup(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ConformLoad_LoadGroup(BaseClass*, BaseClass*);
bool assign_ConformLoadGroup_EnergyConsumers(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConformLoadGroup* element = dynamic_cast<ConformLoadGroup*>(BaseClass_ptr1);
	ConformLoad* element2 = dynamic_cast<ConformLoad*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->EnergyConsumers.begin(), element->EnergyConsumers.end(), element2) == element->EnergyConsumers.end())
		{
			element->EnergyConsumers.push_back(element2);
			return assign_ConformLoad_LoadGroup(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char ConformLoadGroup::debugName[] = "ConformLoadGroup";
const char* ConformLoadGroup::debugString() const
{
	return ConformLoadGroup::debugName;
}

void ConformLoadGroup::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ConformLoadGroup"), &ConformLoadGroup_factory));
}

void ConformLoadGroup::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ConformLoadGroup::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ConformLoadGroup.ConformLoadSchedules"), &assign_ConformLoadGroup_ConformLoadSchedules));
	assign_map.insert(std::make_pair(std::string("cim:ConformLoadGroup.EnergyConsumers"), &assign_ConformLoadGroup_EnergyConsumers));
}

const BaseClassDefiner ConformLoadGroup::declare()
{
	return BaseClassDefiner(ConformLoadGroup::addConstructToMap, ConformLoadGroup::addPrimitiveAssignFnsToMap, ConformLoadGroup::addClassAssignFnsToMap, ConformLoadGroup::debugName);
}

namespace CIMPP
{
	BaseClass* ConformLoadGroup_factory()
	{
		return new ConformLoadGroup;
	}
}
