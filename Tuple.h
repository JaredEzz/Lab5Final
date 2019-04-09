//
// Created by Jared Hasson on 2019-04-09.
//

#ifndef LAB5FINAL_TUPLE_H
#define LAB5FINAL_TUPLE_H

#include <string>
#include <vector>

using namespace std;

class Tuple : public vector<string>
{
public:
    Tuple() {};

    void addAttributeValue(string);
    string const getTupleValueAt(unsigned int);
};


#endif //LAB5FINAL_TUPLE_H
