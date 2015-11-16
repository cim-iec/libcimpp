#include "myparser.h"
#include <iostream>
#include <sstream>

#include "PowerSystemResource.h"
#include "commchannel.h"
#include "DSLModem.h"
#include "LTEModem.h"

MyParser::MyParser()
{
}

MyParser::~MyParser()
{
    if(!elementStack.empty())
        std::cerr << "elementStack nicht leer!!!" << std::endl;
    if(!tagStack.empty())
        std::cerr << "tagStack nicht leer!!!" << std::endl;
}

void MyParser::print()
{
    for(auto pair : elements)
    {
        std::cout << pair.second->name << std::endl;
    }
}

void MyParser::on_start_document()
{
    std::cout << "Found start of the document" << std::endl;
}

void MyParser::on_end_document()
{
    while(!taskQueue.empty())
    {
        taskQueue.front().resolve(elements);
        taskQueue.pop();
    }
    std::cout << "Reached end of the document" << std::endl;
}

void MyParser::on_start_element(const Glib::ustring &name, const AttributeList &properties)
{
    // Remember last opened tag
    tagStack.push(name);

    // Is the value of the tag a literal?
    if(properties.empty())
        return;

    if(name == "base:PowerSystemResource")
    {
        base* basePtr = new PowerSystemResource;
        basePtr->name = properties.front().value;
        elements.emplace(properties.front().value, basePtr);
        elementStack.push(basePtr);
        return;
    }
    if(name == "base:DSLModem")
    {
        base* basePtr = new DSLModem;
        basePtr->name = properties.front().value;
        elements.emplace(properties.front().value, basePtr);
        elementStack.push(basePtr);
        return;
    }
    if(name == "base:LTEModem")
    {
        base* basePtr = new LTEModem;
        basePtr->name = properties.front().value;
        elements.emplace(properties.front().value, basePtr);
        elementStack.push(basePtr);
        return;
    }
    if(name == "base:CommChannel")
    {
        base* basePtr = new CommChannel;
        basePtr->name = properties.front().value;
        elements.emplace(properties.front().value, basePtr);
        elementStack.push(basePtr);
        return;
    }
    if(name == "base:ComMod")
    {
        // Assume that the first attribute defines rdf:resource
        task Task(elementStack.top() , properties.front().value, PowerSystemResource_ComMod);
        taskQueue.push(Task);
        return;
    }

    // Nobody knows what to do
    std::cout << "Nobody knows what to do with " << name << std::endl;
}

void MyParser::on_end_element(const Glib::ustring &name)
{
    if(tagStack.top() == name)
        tagStack.pop();
    if(name == "base:PowerSystemResource")
    {
        elementStack.pop();
        return;
    }
    if(name == "base:DSLModem")
    {
        elementStack.pop();
        return;
    }
    if(name == "base:LTEModem")
    {
        elementStack.pop();
        return;
    }
    if(name == "base:CommChannel")
    {
        elementStack.pop();
        return;
    }
}

void MyParser::on_characters(const Glib::ustring &characters)
{
    std::stringstream buffer;
    buffer << characters;
    if(!tagStack.empty())
    {
        if(tagStack.top() == "base:cost")
            buffer >> ((Modem*) elementStack.top())->cost;
        if(tagStack.top() == "base:frequency")
            buffer >> ((LTEModem*) elementStack.top())->frequency;
        if(tagStack.top() == "base:modulationType")
            buffer >> ((LTEModem*) elementStack.top())->modulationType;
        if(tagStack.top() == "base:ber")
            buffer >> ((CommChannel*) elementStack.top())->ber;
        if(tagStack.top() == "base:dataRate")
            buffer >> ((CommChannel*) elementStack.top())->dataRate;
        if(tagStack.top() == "base:delay")
            buffer >> ((CommChannel*) elementStack.top())->delay;
    }
}
