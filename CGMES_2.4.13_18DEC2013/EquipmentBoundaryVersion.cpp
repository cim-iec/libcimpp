/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquipmentBoundaryVersion.hpp"

#include <algorithm>
#include <sstream>

#include "String.hpp"
#include "String.hpp"
#include "Date.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

EquipmentBoundaryVersion::EquipmentBoundaryVersion() {};
EquipmentBoundaryVersion::~EquipmentBoundaryVersion() {};


bool assign_EquipmentBoundaryVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->baseUML = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->baseURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_date(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->date = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->differenceModelURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->entsoeUML = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_entsoeURIcore(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->entsoeURIcore = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_entsoeURIoperation(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->entsoeURIoperation = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->modelDescriptionURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->namespaceRDF = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->namespaceUML = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->shortName = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}













const char EquipmentBoundaryVersion::debugName[] = "EquipmentBoundaryVersion";
const char* EquipmentBoundaryVersion::debugString() const
{
	return EquipmentBoundaryVersion::debugName;
}

void EquipmentBoundaryVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion"), &EquipmentBoundaryVersion_factory));
}

void EquipmentBoundaryVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.baseUML"), &assign_EquipmentBoundaryVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.baseURI"), &assign_EquipmentBoundaryVersion_baseURI));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.date"), &assign_EquipmentBoundaryVersion_date));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.differenceModelURI"), &assign_EquipmentBoundaryVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.entsoeUML"), &assign_EquipmentBoundaryVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.entsoeURIcore"), &assign_EquipmentBoundaryVersion_entsoeURIcore));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.entsoeURIoperation"), &assign_EquipmentBoundaryVersion_entsoeURIoperation));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.modelDescriptionURI"), &assign_EquipmentBoundaryVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.namespaceRDF"), &assign_EquipmentBoundaryVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.namespaceUML"), &assign_EquipmentBoundaryVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.shortName"), &assign_EquipmentBoundaryVersion_shortName));
}

void EquipmentBoundaryVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner EquipmentBoundaryVersion::declare()
{
	return BaseClassDefiner(EquipmentBoundaryVersion::addConstructToMap, EquipmentBoundaryVersion::addPrimitiveAssignFnsToMap, EquipmentBoundaryVersion::addClassAssignFnsToMap, EquipmentBoundaryVersion::debugName);
}

namespace CIMPP
{
	BaseClass* EquipmentBoundaryVersion_factory()
	{
		return new EquipmentBoundaryVersion;
	}
}
