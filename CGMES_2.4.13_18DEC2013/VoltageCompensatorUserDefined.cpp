/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltageCompensatorUserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

VoltageCompensatorUserDefined::VoltageCompensatorUserDefined() {};
VoltageCompensatorUserDefined::~VoltageCompensatorUserDefined() {};



bool assign_VoltageCompensatorUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VoltageCompensatorUserDefined* element = dynamic_cast<VoltageCompensatorUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_VoltageCompensatorUserDefined(BaseClass*, BaseClass*);
bool assign_VoltageCompensatorUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageCompensatorUserDefined* element = dynamic_cast<VoltageCompensatorUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_VoltageCompensatorUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char VoltageCompensatorUserDefined::debugName[] = "VoltageCompensatorUserDefined";
const char* VoltageCompensatorUserDefined::debugString() const
{
	return VoltageCompensatorUserDefined::debugName;
}

void VoltageCompensatorUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VoltageCompensatorUserDefined"), &VoltageCompensatorUserDefined_factory));
}

void VoltageCompensatorUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VoltageCompensatorUserDefined.proprietary"), &assign_VoltageCompensatorUserDefined_proprietary));
}

void VoltageCompensatorUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VoltageCompensatorUserDefined.ProprietaryParameterDynamics"), &assign_VoltageCompensatorUserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner VoltageCompensatorUserDefined::declare()
{
	return BaseClassDefiner(VoltageCompensatorUserDefined::addConstructToMap, VoltageCompensatorUserDefined::addPrimitiveAssignFnsToMap, VoltageCompensatorUserDefined::addClassAssignFnsToMap, VoltageCompensatorUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* VoltageCompensatorUserDefined_factory()
	{
		return new VoltageCompensatorUserDefined;
	}
}
