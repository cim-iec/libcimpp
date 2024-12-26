/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BusNameMarker.hpp"

#include <algorithm>
#include <sstream>

#include "ReportingGroup.hpp"
#include "ACDCTerminal.hpp"
#include "Integer.hpp"

using namespace CIMPP;

BusNameMarker::BusNameMarker() : ReportingGroup(nullptr) {};
BusNameMarker::~BusNameMarker() {};




bool assign_BusNameMarker_priority(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BusNameMarker* element = dynamic_cast<BusNameMarker*>(BaseClass_ptr1))
	{
		buffer >> element->priority;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ReportingGroup_BusNameMarker(BaseClass*, BaseClass*);
bool assign_BusNameMarker_ReportingGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	BusNameMarker* element = dynamic_cast<BusNameMarker*>(BaseClass_ptr1);
	ReportingGroup* element2 = dynamic_cast<ReportingGroup*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ReportingGroup != element2)
		{
			element->ReportingGroup = element2;
			return assign_ReportingGroup_BusNameMarker(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ACDCTerminal_BusNameMarker(BaseClass*, BaseClass*);
bool assign_BusNameMarker_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	BusNameMarker* element = dynamic_cast<BusNameMarker*>(BaseClass_ptr1);
	ACDCTerminal* element2 = dynamic_cast<ACDCTerminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Terminal.begin(), element->Terminal.end(), element2) == element->Terminal.end())
		{
			element->Terminal.push_back(element2);
			return assign_ACDCTerminal_BusNameMarker(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char BusNameMarker::debugName[] = "BusNameMarker";
const char* BusNameMarker::debugString() const
{
	return BusNameMarker::debugName;
}

void BusNameMarker::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:BusNameMarker"), &BusNameMarker_factory));
}

void BusNameMarker::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:BusNameMarker.priority"), &assign_BusNameMarker_priority));
}

void BusNameMarker::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:BusNameMarker.ReportingGroup"), &assign_BusNameMarker_ReportingGroup));
	assign_map.insert(std::make_pair(std::string("cim:BusNameMarker.Terminal"), &assign_BusNameMarker_Terminal));
}

const BaseClassDefiner BusNameMarker::declare()
{
	return BaseClassDefiner(BusNameMarker::addConstructToMap, BusNameMarker::addPrimitiveAssignFnsToMap, BusNameMarker::addClassAssignFnsToMap, BusNameMarker::debugName);
}

namespace CIMPP
{
	BaseClass* BusNameMarker_factory()
	{
		return new BusNameMarker;
	}
}
