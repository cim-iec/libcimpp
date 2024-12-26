/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineEquivalentCircuit.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

SynchronousMachineEquivalentCircuit::SynchronousMachineEquivalentCircuit() {};
SynchronousMachineEquivalentCircuit::~SynchronousMachineEquivalentCircuit() {};


bool assign_SynchronousMachineEquivalentCircuit_r1d(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->r1d;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_r1q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->r1q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_r2q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->r2q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_rfd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->rfd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_x1d(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->x1d;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_x1q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->x1q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_x2q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->x2q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_xad(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->xad;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_xaq(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->xaq;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_xf1d(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->xf1d;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_xfd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->xfd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}













const char SynchronousMachineEquivalentCircuit::debugName[] = "SynchronousMachineEquivalentCircuit";
const char* SynchronousMachineEquivalentCircuit::debugString() const
{
	return SynchronousMachineEquivalentCircuit::debugName;
}

void SynchronousMachineEquivalentCircuit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit"), &SynchronousMachineEquivalentCircuit_factory));
}

void SynchronousMachineEquivalentCircuit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.r1d"), &assign_SynchronousMachineEquivalentCircuit_r1d));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.r1q"), &assign_SynchronousMachineEquivalentCircuit_r1q));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.r2q"), &assign_SynchronousMachineEquivalentCircuit_r2q));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.rfd"), &assign_SynchronousMachineEquivalentCircuit_rfd));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.x1d"), &assign_SynchronousMachineEquivalentCircuit_x1d));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.x1q"), &assign_SynchronousMachineEquivalentCircuit_x1q));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.x2q"), &assign_SynchronousMachineEquivalentCircuit_x2q));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.xad"), &assign_SynchronousMachineEquivalentCircuit_xad));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.xaq"), &assign_SynchronousMachineEquivalentCircuit_xaq));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.xf1d"), &assign_SynchronousMachineEquivalentCircuit_xf1d));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.xfd"), &assign_SynchronousMachineEquivalentCircuit_xfd));
}

void SynchronousMachineEquivalentCircuit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner SynchronousMachineEquivalentCircuit::declare()
{
	return BaseClassDefiner(SynchronousMachineEquivalentCircuit::addConstructToMap, SynchronousMachineEquivalentCircuit::addPrimitiveAssignFnsToMap, SynchronousMachineEquivalentCircuit::addClassAssignFnsToMap, SynchronousMachineEquivalentCircuit::debugName);
}

namespace CIMPP
{
	BaseClass* SynchronousMachineEquivalentCircuit_factory()
	{
		return new SynchronousMachineEquivalentCircuit;
	}
}
