//
// Created by Jared Hasson on 2019-04-09.
//

#ifndef LAB5FINAL_PREDICATE_H
#define LAB5FINAL_PREDICATE_H

#include "Parameter.h"

#include <vector>

using namespace std;

class Predicate
{
private:
    string ident;
    vector<Parameter> paramList;

public:
    void setIdentity(string);
    void addParameter(Parameter);
    void cleanPredicate();
    string getIdentity() const { return ident; }
    vector<Parameter> getParameterList() const { return paramList; }
    string toString();
};


#endif //LAB5FINAL_PREDICATE_H
