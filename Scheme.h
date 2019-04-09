//
// Created by Jared Hasson on 2019-04-09.
//

#ifndef LAB5FINAL_SCHEME_H
#define LAB5FINAL_SCHEME_H

#include <string>
#include <vector>

using namespace std;

class Scheme
{
private:
    vector<string> attributeNames;

public:
    Scheme() {};

    void addAttribute(string);
    void setAttributeAt(unsigned int, string);
    vector<string> getAttributes() const { return attributeNames; }
    void clearAttributes();
};


#endif //LAB5FINAL_SCHEME_H
