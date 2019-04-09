//
// Created by Jared Hasson on 2019-04-09.
//

#ifndef LAB5FINAL_RULE_H
#define LAB5FINAL_RULE_H
#include "Predicate.h"

using namespace std;

class Rule
{
private:
    Predicate head;
    vector<Predicate> predList;
    int ruleNumber;

public:
    void setHead(Predicate);
    void addPredicate(Predicate);
    void setRuleNumber(int);
    void cleanRule();
    Predicate getHead() const { return head; }
    vector<Predicate> getPredList() const { return predList; }
    int getRuleNumber() const { return ruleNumber; }
    string toString();
};


#endif //LAB5FINAL_RULE_H
