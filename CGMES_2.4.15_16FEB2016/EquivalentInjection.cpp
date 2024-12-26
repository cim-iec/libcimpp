/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquivalentInjection.hpp"

#include <algorithm>
#include <sstream>

#include "ReactiveCapabilityCurve.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Voltage.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

EquivalentInjection::EquivalentInjection() : ReactiveCapabilityCurve(nullptr) {};
EquivalentInjection::~EquivalentInjection() {};



bool assign_EquivalentInjection_maxP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->maxP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_maxQ(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->maxQ;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_minP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->minP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_minQ(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->minQ;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_p(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->p;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_r0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->r0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_r2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->r2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_regulationCapability(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->regulationCapability;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_regulationStatus(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->regulationStatus;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_regulationTarget(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->regulationTarget;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_x(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->x;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_x0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->x0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_x2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->x2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ReactiveCapabilityCurve_EquivalentInjection(BaseClass*, BaseClass*);
bool assign_EquivalentInjection_ReactiveCapabilityCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	ReactiveCapabilityCurve* element2 = dynamic_cast<ReactiveCapabilityCurve*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ReactiveCapabilityCurve != element2)
		{
			element->ReactiveCapabilityCurve = element2;
			return assign_ReactiveCapabilityCurve_EquivalentInjection(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
















const char EquivalentInjection::debugName[] = "EquivalentInjection";
const char* EquivalentInjection::debugString() const
{
	return EquivalentInjection::debugName;
}

void EquivalentInjection::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:EquivalentInjection"), &EquivalentInjection_factory));
}

void EquivalentInjection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.maxP"), &assign_EquivalentInjection_maxP));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.maxQ"), &assign_EquivalentInjection_maxQ));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.minP"), &assign_EquivalentInjection_minP));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.minQ"), &assign_EquivalentInjection_minQ));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.p"), &assign_EquivalentInjection_p));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.q"), &assign_EquivalentInjection_q));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.r"), &assign_EquivalentInjection_r));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.r0"), &assign_EquivalentInjection_r0));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.r2"), &assign_EquivalentInjection_r2));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.regulationCapability"), &assign_EquivalentInjection_regulationCapability));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.regulationStatus"), &assign_EquivalentInjection_regulationStatus));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.regulationTarget"), &assign_EquivalentInjection_regulationTarget));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.x"), &assign_EquivalentInjection_x));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.x0"), &assign_EquivalentInjection_x0));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.x2"), &assign_EquivalentInjection_x2));
}

void EquivalentInjection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.ReactiveCapabilityCurve"), &assign_EquivalentInjection_ReactiveCapabilityCurve));
}

const BaseClassDefiner EquivalentInjection::declare()
{
	return BaseClassDefiner(EquivalentInjection::addConstructToMap, EquivalentInjection::addPrimitiveAssignFnsToMap, EquivalentInjection::addClassAssignFnsToMap, EquivalentInjection::debugName);
}

namespace CIMPP
{
	BaseClass* EquivalentInjection_factory()
	{
		return new EquivalentInjection;
	}
}
