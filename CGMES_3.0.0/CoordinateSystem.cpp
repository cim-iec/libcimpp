/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CoordinateSystem.hpp"

#include <algorithm>
#include <sstream>

#include "Location.hpp"
#include "String.hpp"

using namespace CIMPP;

CoordinateSystem::CoordinateSystem() {};
CoordinateSystem::~CoordinateSystem() {};



bool assign_CoordinateSystem_crsUrn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CoordinateSystem* element = dynamic_cast<CoordinateSystem*>(BaseClass_ptr1))
	{
		buffer >> element->crsUrn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_Location_CoordinateSystem(BaseClass*, BaseClass*);
bool assign_CoordinateSystem_Locations(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CoordinateSystem* element = dynamic_cast<CoordinateSystem*>(BaseClass_ptr1);
	Location* element2 = dynamic_cast<Location*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Locations.begin(), element->Locations.end(), element2) == element->Locations.end())
		{
			element->Locations.push_back(element2);
			return assign_Location_CoordinateSystem(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char CoordinateSystem::debugName[] = "CoordinateSystem";
const char* CoordinateSystem::debugString() const
{
	return CoordinateSystem::debugName;
}

void CoordinateSystem::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:CoordinateSystem"), &CoordinateSystem_factory));
}

void CoordinateSystem::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:CoordinateSystem.crsUrn"), &assign_CoordinateSystem_crsUrn));
}

void CoordinateSystem::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:CoordinateSystem.Locations"), &assign_CoordinateSystem_Locations));
}

const BaseClassDefiner CoordinateSystem::declare()
{
	return BaseClassDefiner(CoordinateSystem::addConstructToMap, CoordinateSystem::addPrimitiveAssignFnsToMap, CoordinateSystem::addClassAssignFnsToMap, CoordinateSystem::debugName);
}

namespace CIMPP
{
	BaseClass* CoordinateSystem_factory()
	{
		return new CoordinateSystem;
	}
}
