/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContCurrLimIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindTurbineType3or4IEC.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindContCurrLimIEC::WindContCurrLimIEC() : WindTurbineType3or4IEC(nullptr) {};
WindContCurrLimIEC::~WindContCurrLimIEC() {};




bool assign_WindContCurrLimIEC_imax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->imax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContCurrLimIEC_imaxdip(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->imaxdip;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContCurrLimIEC_mdfslim(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->mdfslim;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContCurrLimIEC_mqpri(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->mqpri;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContCurrLimIEC_tufilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tufilt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindDynamicsLookupTable_WindContCurrLimIEC(BaseClass*, BaseClass*);
bool assign_WindContCurrLimIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindContCurrLimIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType3or4IEC_WindContCurrLimIEC(BaseClass*, BaseClass*);
bool assign_WindContCurrLimIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1);
	WindTurbineType3or4IEC* element2 = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4IEC != element2)
		{
			element->WindTurbineType3or4IEC = element2;
			return assign_WindTurbineType3or4IEC_WindContCurrLimIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}






const char WindContCurrLimIEC::debugName[] = "WindContCurrLimIEC";
const char* WindContCurrLimIEC::debugString() const
{
	return WindContCurrLimIEC::debugName;
}

void WindContCurrLimIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC"), &WindContCurrLimIEC_factory));
}

void WindContCurrLimIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC.imax"), &assign_WindContCurrLimIEC_imax));
	assign_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC.imaxdip"), &assign_WindContCurrLimIEC_imaxdip));
	assign_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC.mdfslim"), &assign_WindContCurrLimIEC_mdfslim));
	assign_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC.mqpri"), &assign_WindContCurrLimIEC_mqpri));
	assign_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC.tufilt"), &assign_WindContCurrLimIEC_tufilt));
}

void WindContCurrLimIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC.WindDynamicsLookupTable"), &assign_WindContCurrLimIEC_WindDynamicsLookupTable));
	assign_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC.WindTurbineType3or4IEC"), &assign_WindContCurrLimIEC_WindTurbineType3or4IEC));
}

const BaseClassDefiner WindContCurrLimIEC::declare()
{
	return BaseClassDefiner(WindContCurrLimIEC::addConstructToMap, WindContCurrLimIEC::addPrimitiveAssignFnsToMap, WindContCurrLimIEC::addClassAssignFnsToMap, WindContCurrLimIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindContCurrLimIEC_factory()
	{
		return new WindContCurrLimIEC;
	}
}
