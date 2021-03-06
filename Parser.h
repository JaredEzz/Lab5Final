//
// Created by Jared Hasson on 2019-04-09.
//

#ifndef LAB5FINAL_PARSER_H
#define LAB5FINAL_PARSER_H

#include "Datalog.h"
#include "Scanner.h"

#include <fstream>

using namespace std;

class Parser
{
private:
    Datalog dp;
    Rule r;
    Predicate pr;
    Parameter pm;
    Scanner scan;
    Token t;
    void parseSchemeList();
    void parseScheme();
    void parseFactList();
    void parseFact();
    void parseRuleList();
    void parseRule();
    void parseQueryList();
    void parseQuery();
    void parsePredicateList();
    void parsePredicate();
    void parseParameterList();
    void parseParameter();
    void match(TokenType);
    void error(Token);

public:
    Parser(char*, char*);

    void parseDatalog();
    Datalog getDatalog() const { return dp; }
    Rule getRelation() const { return r; }
    Predicate getPredicate() const { return pr; }
    Parameter getParameter() const { return pm; }
    string errorToString();
    string toString();
};


#endif //LAB5FINAL_PARSER_H
