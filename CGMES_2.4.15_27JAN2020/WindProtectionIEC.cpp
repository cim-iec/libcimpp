/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindProtectionIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindTurbineType1or2IEC.hpp"
#include "WindTurbineType3or4IEC.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

WindProtectionIEC::WindProtectionIEC() : WindTurbineType1or2IEC(nullptr), WindTurbineType3or4IEC(nullptr) {};
WindProtectionIEC::~WindProtectionIEC() {};




bool assign_WindProtectionIEC_fover(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1))
	{
		buffer >> element->fover;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindProtectionIEC_funder(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1))
	{
		buffer >> element->funder;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindProtectionIEC_tfover(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tfover;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindProtectionIEC_tfunder(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tfunder;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindProtectionIEC_tuover(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tuover;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindProtectionIEC_tuunder(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tuunder;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindProtectionIEC_uover(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1))
	{
		buffer >> element->uover;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindProtectionIEC_uunder(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1))
	{
		buffer >> element->uunder;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindTurbineType1or2IEC_WindProtectionIEC(BaseClass*, BaseClass*);
bool assign_WindProtectionIEC_WindTurbineType1or2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	WindTurbineType1or2IEC* element2 = dynamic_cast<WindTurbineType1or2IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType1or2IEC != element2)
		{
			element->WindTurbineType1or2IEC = element2;
			return assign_WindTurbineType1or2IEC_WindProtectionIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType3or4IEC_WindProtectionIEC(BaseClass*, BaseClass*);
bool assign_WindProtectionIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	WindTurbineType3or4IEC* element2 = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4IEC != element2)
		{
			element->WindTurbineType3or4IEC = element2;
			return assign_WindTurbineType3or4IEC_WindProtectionIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}









const char WindProtectionIEC::debugName[] = "WindProtectionIEC";
const char* WindProtectionIEC::debugString() const
{
	return WindProtectionIEC::debugName;
}

void WindProtectionIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindProtectionIEC"), &WindProtectionIEC_factory));
}

void WindProtectionIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindProtectionIEC.fover"), &assign_WindProtectionIEC_fover));
	assign_map.insert(std::make_pair(std::string("cim:WindProtectionIEC.funder"), &assign_WindProtectionIEC_funder));
	assign_map.insert(std::make_pair(std::string("cim:WindProtectionIEC.tfover"), &assign_WindProtectionIEC_tfover));
	assign_map.insert(std::make_pair(std::string("cim:WindProtectionIEC.tfunder"), &assign_WindProtectionIEC_tfunder));
	assign_map.insert(std::make_pair(std::string("cim:WindProtectionIEC.tuover"), &assign_WindProtectionIEC_tuover));
	assign_map.insert(std::make_pair(std::string("cim:WindProtectionIEC.tuunder"), &assign_WindProtectionIEC_tuunder));
	assign_map.insert(std::make_pair(std::string("cim:WindProtectionIEC.uover"), &assign_WindProtectionIEC_uover));
	assign_map.insert(std::make_pair(std::string("cim:WindProtectionIEC.uunder"), &assign_WindProtectionIEC_uunder));
}

void WindProtectionIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindProtectionIEC.WindTurbineType1or2IEC"), &assign_WindProtectionIEC_WindTurbineType1or2IEC));
	assign_map.insert(std::make_pair(std::string("cim:WindProtectionIEC.WindTurbineType3or4IEC"), &assign_WindProtectionIEC_WindTurbineType3or4IEC));
}

const BaseClassDefiner WindProtectionIEC::declare()
{
	return BaseClassDefiner(WindProtectionIEC::addConstructToMap, WindProtectionIEC::addPrimitiveAssignFnsToMap, WindProtectionIEC::addClassAssignFnsToMap, WindProtectionIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindProtectionIEC_factory()
	{
		return new WindProtectionIEC;
	}
}
