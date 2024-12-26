/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Bay.hpp"

#include <algorithm>
#include <sstream>

#include "VoltageLevel.hpp"

using namespace CIMPP;

Bay::Bay() : VoltageLevel(nullptr) {};
Bay::~Bay() {};




bool assign_VoltageLevel_Bays(BaseClass*, BaseClass*);
bool assign_Bay_VoltageLevel(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Bay* element = dynamic_cast<Bay*>(BaseClass_ptr1);
	VoltageLevel* element2 = dynamic_cast<VoltageLevel*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VoltageLevel != element2)
		{
			element->VoltageLevel = element2;
			return assign_VoltageLevel_Bays(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char Bay::debugName[] = "Bay";
const char* Bay::debugString() const
{
	return Bay::debugName;
}

void Bay::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Bay"), &Bay_factory));
}

void Bay::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Bay::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Bay.VoltageLevel"), &assign_Bay_VoltageLevel));
}

const BaseClassDefiner Bay::declare()
{
	return BaseClassDefiner(Bay::addConstructToMap, Bay::addPrimitiveAssignFnsToMap, Bay::addClassAssignFnsToMap, Bay::debugName);
}

namespace CIMPP
{
	BaseClass* Bay_factory()
	{
		return new Bay;
	}
}
