/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AsynchronousMachineUserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

AsynchronousMachineUserDefined::AsynchronousMachineUserDefined() {};
AsynchronousMachineUserDefined::~AsynchronousMachineUserDefined() {};



bool assign_AsynchronousMachineUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachineUserDefined* element = dynamic_cast<AsynchronousMachineUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_AsynchronousMachineUserDefined(BaseClass*, BaseClass*);
bool assign_AsynchronousMachineUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AsynchronousMachineUserDefined* element = dynamic_cast<AsynchronousMachineUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_AsynchronousMachineUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char AsynchronousMachineUserDefined::debugName[] = "AsynchronousMachineUserDefined";
const char* AsynchronousMachineUserDefined::debugString() const
{
	return AsynchronousMachineUserDefined::debugName;
}

void AsynchronousMachineUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:AsynchronousMachineUserDefined"), &AsynchronousMachineUserDefined_factory));
}

void AsynchronousMachineUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineUserDefined.proprietary"), &assign_AsynchronousMachineUserDefined_proprietary));
}

void AsynchronousMachineUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineUserDefined.ProprietaryParameterDynamics"), &assign_AsynchronousMachineUserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner AsynchronousMachineUserDefined::declare()
{
	return BaseClassDefiner(AsynchronousMachineUserDefined::addConstructToMap, AsynchronousMachineUserDefined::addPrimitiveAssignFnsToMap, AsynchronousMachineUserDefined::addClassAssignFnsToMap, AsynchronousMachineUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* AsynchronousMachineUserDefined_factory()
	{
		return new AsynchronousMachineUserDefined;
	}
}
