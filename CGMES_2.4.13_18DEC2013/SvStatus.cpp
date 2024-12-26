/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SvStatus.hpp"

#include <algorithm>
#include <sstream>

#include "ConductingEquipment.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

SvStatus::SvStatus() : ConductingEquipment(nullptr) {};
SvStatus::~SvStatus() {};



bool assign_SvStatus_inService(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SvStatus* element = dynamic_cast<SvStatus*>(BaseClass_ptr1))
	{
		buffer >> element->inService;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ConductingEquipment_SvStatus(BaseClass*, BaseClass*);
bool assign_SvStatus_ConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SvStatus* element = dynamic_cast<SvStatus*>(BaseClass_ptr1);
	ConductingEquipment* element2 = dynamic_cast<ConductingEquipment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ConductingEquipment != element2)
		{
			element->ConductingEquipment = element2;
			return assign_ConductingEquipment_SvStatus(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char SvStatus::debugName[] = "SvStatus";
const char* SvStatus::debugString() const
{
	return SvStatus::debugName;
}

void SvStatus::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SvStatus"), &SvStatus_factory));
}

void SvStatus::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SvStatus.inService"), &assign_SvStatus_inService));
}

void SvStatus::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SvStatus.ConductingEquipment"), &assign_SvStatus_ConductingEquipment));
}

const BaseClassDefiner SvStatus::declare()
{
	return BaseClassDefiner(SvStatus::addConstructToMap, SvStatus::addPrimitiveAssignFnsToMap, SvStatus::addClassAssignFnsToMap, SvStatus::debugName);
}

namespace CIMPP
{
	BaseClass* SvStatus_factory()
	{
		return new SvStatus;
	}
}
