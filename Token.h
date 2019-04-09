//
// Created by Jared Hasson on 2019-04-09.
//

#ifndef LAB5FINAL_TOKEN_H
#define LAB5FINAL_TOKEN_H


#include "TokenType.h"

#include <iostream>

using namespace std;

class Token
{
private:
    TokenType type;
    string value;
    int line;

public:
    Token(TokenType, string, int);

    int getLine() const { return line; }
    string getValue() const { return value; }
    TokenType getType() const { return type; }
    string toString() const;
};


#endif //LAB5FINAL_TOKEN_H
