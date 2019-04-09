//
// Created by Jared Hasson on 2019-04-09.
//

#ifndef LAB5FINAL_PARAMETER_H
#define LAB5FINAL_PARAMETER_H

#include <string>
#include <sstream>

using namespace std;

class Parameter
{
private:
    string value;

public:
    Parameter(){}

    void setValue(string);
    string getValue() const { return value; }
    string toString();
};

#endif //LAB5FINAL_PARAMETER_H
