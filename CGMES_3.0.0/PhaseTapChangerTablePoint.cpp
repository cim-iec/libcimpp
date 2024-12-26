/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerTablePoint.hpp"

#include <algorithm>
#include <sstream>

#include "PhaseTapChangerTable.hpp"
#include "AngleDegrees.hpp"

using namespace CIMPP;

PhaseTapChangerTablePoint::PhaseTapChangerTablePoint() : PhaseTapChangerTable(nullptr) {};
PhaseTapChangerTablePoint::~PhaseTapChangerTablePoint() {};



bool assign_PhaseTapChangerTablePoint_angle(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PhaseTapChangerTablePoint* element = dynamic_cast<PhaseTapChangerTablePoint*>(BaseClass_ptr1))
	{
		buffer >> element->angle;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_PhaseTapChangerTable_PhaseTapChangerTablePoint(BaseClass*, BaseClass*);
bool assign_PhaseTapChangerTablePoint_PhaseTapChangerTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PhaseTapChangerTablePoint* element = dynamic_cast<PhaseTapChangerTablePoint*>(BaseClass_ptr1);
	PhaseTapChangerTable* element2 = dynamic_cast<PhaseTapChangerTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PhaseTapChangerTable != element2)
		{
			element->PhaseTapChangerTable = element2;
			return assign_PhaseTapChangerTable_PhaseTapChangerTablePoint(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char PhaseTapChangerTablePoint::debugName[] = "PhaseTapChangerTablePoint";
const char* PhaseTapChangerTablePoint::debugString() const
{
	return PhaseTapChangerTablePoint::debugName;
}

void PhaseTapChangerTablePoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PhaseTapChangerTablePoint"), &PhaseTapChangerTablePoint_factory));
}

void PhaseTapChangerTablePoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerTablePoint.angle"), &assign_PhaseTapChangerTablePoint_angle));
}

void PhaseTapChangerTablePoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerTablePoint.PhaseTapChangerTable"), &assign_PhaseTapChangerTablePoint_PhaseTapChangerTable));
}

const BaseClassDefiner PhaseTapChangerTablePoint::declare()
{
	return BaseClassDefiner(PhaseTapChangerTablePoint::addConstructToMap, PhaseTapChangerTablePoint::addPrimitiveAssignFnsToMap, PhaseTapChangerTablePoint::addClassAssignFnsToMap, PhaseTapChangerTablePoint::debugName);
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerTablePoint_factory()
	{
		return new PhaseTapChangerTablePoint;
	}
}
