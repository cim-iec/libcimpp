/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RatioTapChangerTable.hpp"

#include <algorithm>
#include <sstream>

#include "RatioTapChanger.hpp"
#include "RatioTapChangerTablePoint.hpp"

using namespace CIMPP;

RatioTapChangerTable::RatioTapChangerTable() {};
RatioTapChangerTable::~RatioTapChangerTable() {};





bool assign_RatioTapChanger_RatioTapChangerTable(BaseClass*, BaseClass*);
bool assign_RatioTapChangerTable_RatioTapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RatioTapChangerTable* element = dynamic_cast<RatioTapChangerTable*>(BaseClass_ptr1);
	RatioTapChanger* element2 = dynamic_cast<RatioTapChanger*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->RatioTapChanger.begin(), element->RatioTapChanger.end(), element2) == element->RatioTapChanger.end())
		{
			element->RatioTapChanger.push_back(element2);
			return assign_RatioTapChanger_RatioTapChangerTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RatioTapChangerTablePoint_RatioTapChangerTable(BaseClass*, BaseClass*);
bool assign_RatioTapChangerTable_RatioTapChangerTablePoint(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RatioTapChangerTable* element = dynamic_cast<RatioTapChangerTable*>(BaseClass_ptr1);
	RatioTapChangerTablePoint* element2 = dynamic_cast<RatioTapChangerTablePoint*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->RatioTapChangerTablePoint.begin(), element->RatioTapChangerTablePoint.end(), element2) == element->RatioTapChangerTablePoint.end())
		{
			element->RatioTapChangerTablePoint.push_back(element2);
			return assign_RatioTapChangerTablePoint_RatioTapChangerTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char RatioTapChangerTable::debugName[] = "RatioTapChangerTable";
const char* RatioTapChangerTable::debugString() const
{
	return RatioTapChangerTable::debugName;
}

void RatioTapChangerTable::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:RatioTapChangerTable"), &RatioTapChangerTable_factory));
}

void RatioTapChangerTable::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void RatioTapChangerTable::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RatioTapChangerTable.RatioTapChanger"), &assign_RatioTapChangerTable_RatioTapChanger));
	assign_map.insert(std::make_pair(std::string("cim:RatioTapChangerTable.RatioTapChangerTablePoint"), &assign_RatioTapChangerTable_RatioTapChangerTablePoint));
}

const BaseClassDefiner RatioTapChangerTable::declare()
{
	return BaseClassDefiner(RatioTapChangerTable::addConstructToMap, RatioTapChangerTable::addPrimitiveAssignFnsToMap, RatioTapChangerTable::addClassAssignFnsToMap, RatioTapChangerTable::debugName);
}

namespace CIMPP
{
	BaseClass* RatioTapChangerTable_factory()
	{
		return new RatioTapChangerTable;
	}
}
