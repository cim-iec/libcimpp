#ifndef TopologicalNode_H
#define TopologicalNode_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class BaseVoltage;
	class ConnectivityNode;
	class ConnectivityNodeContainer;
	class ReportingGroup;
	class SvInjection;
	class SvVoltage;
	class Terminal;
	class TopologicalIsland;

	/*
	For a detailed substation model a topological node is a set of connectivity nodes that, in the current network state, are connected together through any type of closed switches, including  jumpers. Topological nodes change as the current network state changes (i.e., switches, breakers, etc. change state). For a planning model, switch statuses are not used to form topological nodes. Instead they are manually created or deleted in a model builder tool. Topological nodes maintained this way are also called "busses".
	*/
	class TopologicalNode : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		TopologicalNode();
		~TopologicalNode() override;

		CIMPP::TopologicalIsland* AngleRefTopologicalIsland;  /* The island for which the node is an angle reference.   Normally there is one angle reference node for each island. Default: 0 */
		CIMPP::BaseVoltage* BaseVoltage;  /* The base voltage of the topological node. Default: 0 */
		CIMPP::ConnectivityNodeContainer* ConnectivityNodeContainer;  /* The connectivity node container to which the topological node belongs. Default: 0 */
		std::list<CIMPP::ConnectivityNode*> ConnectivityNodes;  /* The connectivity nodes combine together to form this topological node.  May depend on the current state of switches in the network. Default: 0 */
		CIMPP::ReportingGroup* ReportingGroup;  /* The reporting group to which the topological node belongs. Default: 0 */
		CIMPP::SvInjection* SvInjection;  /* The injection flows state variables associated with the topological node. Default: 0 */
		CIMPP::SvVoltage* SvVoltage;  /* The state voltage associated with the topological node. Default: 0 */
		std::list<CIMPP::Terminal*> Terminal;  /* The terminals associated with the topological node.   This can be used as an alternative to the connectivity node path to terminal, thus making it unnecessary to model connectivity nodes in some cases.   Note that if connectivity nodes are in the model, this association would probably not be used as an input specification. Default: 0 */
		CIMPP::TopologicalIsland* TopologicalIsland;  /* A topological node belongs to a topological island. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* TopologicalNode_factory();
}
#endif
