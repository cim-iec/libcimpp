#ifndef IdentifiedObject_H
#define IdentifiedObject_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "String.hpp"

namespace CIMPP
{
	class DiagramObject;

	/*
	This is a root class to provide common identification for all classes needing identification and naming attributes.
	*/
	class IdentifiedObject : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		IdentifiedObject();
		~IdentifiedObject() override;

		std::list<CIMPP::DiagramObject*> DiagramObjects;  /* The domain object to which this diagram object is associated. Default: 0 */
		CIMPP::String description;  /* The description is a free human readable text describing or naming the object. It may be non unique and may not correlate to a naming hierarchy. Default: '' */
		CIMPP::String energyIdentCodeEic;  /* The attribute is used for an exchange of the EIC code (Energy identification Code). The length of the string is 16 characters as defined by the EIC code. References: Default: '' */
		CIMPP::String mRID;  /* Master resource identifier issued by a model authority. The mRID is globally unique within an exchange context. Global uniqueness is easily achieved by using a UUID,  as specified in RFC 4122, for the mRID.  The use of UUID is strongly recommended. For CIMXML data files in RDF syntax conforming to IEC 61970-552 Edition 1, the mRID is mapped to rdf:ID or rdf:about attributes that identify CIM object elements. Default: '' */
		CIMPP::String name;  /* The name is any free human readable and possibly non unique text naming the object. Default: '' */
		CIMPP::String shortName;  /* The attribute is used for an exchange of a human readable short name with length of the string 12 characters maximum. Default: '' */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* IdentifiedObject_factory();
}
#endif
