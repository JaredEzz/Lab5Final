//
// Created by Jared Hasson on 2019-04-09.
//

#include "Scheme.h"

using namespace std;

void Scheme::addAttribute(string attr)
{
    attributeNames.push_back(attr);
}

void Scheme::setAttributeAt(unsigned int pos, string val)
{
    attributeNames.at(pos) = val;
}

void Scheme::clearAttributes()
{
    attributeNames.clear();
}