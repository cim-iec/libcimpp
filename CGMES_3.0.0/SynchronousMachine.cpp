/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachine.hpp"

#include <algorithm>
#include <sstream>

#include "ReactiveCapabilityCurve.hpp"
#include "SynchronousMachineDynamics.hpp"
#include "Boolean.hpp"
#include "Resistance.hpp"
#include "Reactance.hpp"
#include "CurrentFlow.hpp"
#include "ReactivePower.hpp"
#include "ReactivePower.hpp"
#include "Float.hpp"
#include "SynchronousMachineOperatingMode.hpp"
#include "PerCent.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "Integer.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "ShortCircuitRotorKind.hpp"
#include "SynchronousMachineKind.hpp"
#include "PerCent.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

SynchronousMachine::SynchronousMachine() : InitialReactiveCapabilityCurve(nullptr), SynchronousMachineDynamics(nullptr) {};
SynchronousMachine::~SynchronousMachine() {};




bool assign_SynchronousMachine_earthing(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->earthing;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_earthingStarPointR(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->earthingStarPointR;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_earthingStarPointX(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->earthingStarPointX;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_ikk(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->ikk;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_maxQ(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->maxQ;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_minQ(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->minQ;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_mu(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->mu;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_operatingMode(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->operatingMode;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_qPercent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->qPercent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_r0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->r0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_r2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->r2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_referencePriority(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->referencePriority;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_satDirectSubtransX(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->satDirectSubtransX;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_satDirectSyncX(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->satDirectSyncX;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_satDirectTransX(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->satDirectTransX;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_shortCircuitRotorType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->shortCircuitRotorType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_type(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->type;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_voltageRegulationRange(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->voltageRegulationRange;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_x0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->x0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachine_x2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->x2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ReactiveCapabilityCurve_InitiallyUsedBySynchronousMachines(BaseClass*, BaseClass*);
bool assign_SynchronousMachine_InitialReactiveCapabilityCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	ReactiveCapabilityCurve* element2 = dynamic_cast<ReactiveCapabilityCurve*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->InitialReactiveCapabilityCurve != element2)
		{
			element->InitialReactiveCapabilityCurve = element2;
			return assign_ReactiveCapabilityCurve_InitiallyUsedBySynchronousMachines(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachineDynamics_SynchronousMachine(BaseClass*, BaseClass*);
bool assign_SynchronousMachine_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	SynchronousMachineDynamics* element2 = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SynchronousMachineDynamics != element2)
		{
			element->SynchronousMachineDynamics = element2;
			return assign_SynchronousMachineDynamics_SynchronousMachine(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}






















const char SynchronousMachine::debugName[] = "SynchronousMachine";
const char* SynchronousMachine::debugString() const
{
	return SynchronousMachine::debugName;
}

void SynchronousMachine::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SynchronousMachine"), &SynchronousMachine_factory));
}

void SynchronousMachine::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.earthing"), &assign_SynchronousMachine_earthing));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.earthingStarPointR"), &assign_SynchronousMachine_earthingStarPointR));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.earthingStarPointX"), &assign_SynchronousMachine_earthingStarPointX));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.ikk"), &assign_SynchronousMachine_ikk));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.maxQ"), &assign_SynchronousMachine_maxQ));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.minQ"), &assign_SynchronousMachine_minQ));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.mu"), &assign_SynchronousMachine_mu));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.operatingMode"), &assign_SynchronousMachine_operatingMode));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.qPercent"), &assign_SynchronousMachine_qPercent));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.r"), &assign_SynchronousMachine_r));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.r0"), &assign_SynchronousMachine_r0));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.r2"), &assign_SynchronousMachine_r2));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.referencePriority"), &assign_SynchronousMachine_referencePriority));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.satDirectSubtransX"), &assign_SynchronousMachine_satDirectSubtransX));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.satDirectSyncX"), &assign_SynchronousMachine_satDirectSyncX));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.satDirectTransX"), &assign_SynchronousMachine_satDirectTransX));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.shortCircuitRotorType"), &assign_SynchronousMachine_shortCircuitRotorType));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.type"), &assign_SynchronousMachine_type));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.voltageRegulationRange"), &assign_SynchronousMachine_voltageRegulationRange));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.x0"), &assign_SynchronousMachine_x0));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.x2"), &assign_SynchronousMachine_x2));
}

void SynchronousMachine::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.InitialReactiveCapabilityCurve"), &assign_SynchronousMachine_InitialReactiveCapabilityCurve));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachine.SynchronousMachineDynamics"), &assign_SynchronousMachine_SynchronousMachineDynamics));
}

const BaseClassDefiner SynchronousMachine::declare()
{
	return BaseClassDefiner(SynchronousMachine::addConstructToMap, SynchronousMachine::addPrimitiveAssignFnsToMap, SynchronousMachine::addClassAssignFnsToMap, SynchronousMachine::debugName);
}

namespace CIMPP
{
	BaseClass* SynchronousMachine_factory()
	{
		return new SynchronousMachine;
	}
}
