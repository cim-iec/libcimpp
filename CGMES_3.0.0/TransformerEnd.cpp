/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TransformerEnd.hpp"

#include <algorithm>
#include <sstream>

#include "BaseVoltage.hpp"
#include "PhaseTapChanger.hpp"
#include "RatioTapChanger.hpp"
#include "Terminal.hpp"
#include "Integer.hpp"
#include "Boolean.hpp"
#include "Resistance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

TransformerEnd::TransformerEnd() : BaseVoltage(nullptr), PhaseTapChanger(nullptr), RatioTapChanger(nullptr), Terminal(nullptr) {};
TransformerEnd::~TransformerEnd() {};






bool assign_TransformerEnd_endNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->endNumber;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TransformerEnd_grounded(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->grounded;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TransformerEnd_rground(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->rground;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TransformerEnd_xground(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->xground;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_BaseVoltage_TransformerEnds(BaseClass*, BaseClass*);
bool assign_TransformerEnd_BaseVoltage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	BaseVoltage* element2 = dynamic_cast<BaseVoltage*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->BaseVoltage != element2)
		{
			element->BaseVoltage = element2;
			return assign_BaseVoltage_TransformerEnds(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PhaseTapChanger_TransformerEnd(BaseClass*, BaseClass*);
bool assign_TransformerEnd_PhaseTapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	PhaseTapChanger* element2 = dynamic_cast<PhaseTapChanger*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PhaseTapChanger != element2)
		{
			element->PhaseTapChanger = element2;
			return assign_PhaseTapChanger_TransformerEnd(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RatioTapChanger_TransformerEnd(BaseClass*, BaseClass*);
bool assign_TransformerEnd_RatioTapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	RatioTapChanger* element2 = dynamic_cast<RatioTapChanger*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RatioTapChanger != element2)
		{
			element->RatioTapChanger = element2;
			return assign_RatioTapChanger_TransformerEnd(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Terminal_TransformerEnd(BaseClass*, BaseClass*);
bool assign_TransformerEnd_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Terminal != element2)
		{
			element->Terminal = element2;
			return assign_Terminal_TransformerEnd(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}





const char TransformerEnd::debugName[] = "TransformerEnd";
const char* TransformerEnd::debugString() const
{
	return TransformerEnd::debugName;
}

void TransformerEnd::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:TransformerEnd"), &TransformerEnd_factory));
}

void TransformerEnd::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.endNumber"), &assign_TransformerEnd_endNumber));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.grounded"), &assign_TransformerEnd_grounded));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.rground"), &assign_TransformerEnd_rground));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.xground"), &assign_TransformerEnd_xground));
}

void TransformerEnd::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.BaseVoltage"), &assign_TransformerEnd_BaseVoltage));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.PhaseTapChanger"), &assign_TransformerEnd_PhaseTapChanger));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.RatioTapChanger"), &assign_TransformerEnd_RatioTapChanger));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.Terminal"), &assign_TransformerEnd_Terminal));
}

const BaseClassDefiner TransformerEnd::declare()
{
	return BaseClassDefiner(TransformerEnd::addConstructToMap, TransformerEnd::addPrimitiveAssignFnsToMap, TransformerEnd::addClassAssignFnsToMap, TransformerEnd::debugName);
}

namespace CIMPP
{
	BaseClass* TransformerEnd_factory()
	{
		return new TransformerEnd;
	}
}
