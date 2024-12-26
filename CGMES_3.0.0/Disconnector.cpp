/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Disconnector.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

Disconnector::Disconnector() {};
Disconnector::~Disconnector() {};



const char Disconnector::debugName[] = "Disconnector";
const char* Disconnector::debugString() const
{
	return Disconnector::debugName;
}

void Disconnector::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Disconnector"), &Disconnector_factory));
}

void Disconnector::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Disconnector::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner Disconnector::declare()
{
	return BaseClassDefiner(Disconnector::addConstructToMap, Disconnector::addPrimitiveAssignFnsToMap, Disconnector::addClassAssignFnsToMap, Disconnector::debugName);
}

namespace CIMPP
{
	BaseClass* Disconnector_factory()
	{
		return new Disconnector;
	}
}
