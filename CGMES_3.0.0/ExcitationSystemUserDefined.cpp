/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcitationSystemUserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

ExcitationSystemUserDefined::ExcitationSystemUserDefined() {};
ExcitationSystemUserDefined::~ExcitationSystemUserDefined() {};



bool assign_ExcitationSystemUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcitationSystemUserDefined* element = dynamic_cast<ExcitationSystemUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_ExcitationSystemUserDefined(BaseClass*, BaseClass*);
bool assign_ExcitationSystemUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ExcitationSystemUserDefined* element = dynamic_cast<ExcitationSystemUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_ExcitationSystemUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char ExcitationSystemUserDefined::debugName[] = "ExcitationSystemUserDefined";
const char* ExcitationSystemUserDefined::debugString() const
{
	return ExcitationSystemUserDefined::debugName;
}

void ExcitationSystemUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcitationSystemUserDefined"), &ExcitationSystemUserDefined_factory));
}

void ExcitationSystemUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcitationSystemUserDefined.proprietary"), &assign_ExcitationSystemUserDefined_proprietary));
}

void ExcitationSystemUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcitationSystemUserDefined.ProprietaryParameterDynamics"), &assign_ExcitationSystemUserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner ExcitationSystemUserDefined::declare()
{
	return BaseClassDefiner(ExcitationSystemUserDefined::addConstructToMap, ExcitationSystemUserDefined::addPrimitiveAssignFnsToMap, ExcitationSystemUserDefined::addClassAssignFnsToMap, ExcitationSystemUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* ExcitationSystemUserDefined_factory()
	{
		return new ExcitationSystemUserDefined;
	}
}
