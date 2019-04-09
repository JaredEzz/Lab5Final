//
// Created by Jared Hasson on 2019-04-09.
//
#include "Token.h"

#include <sstream>

using namespace std;

Token::Token(TokenType t, string v, int l) : type(t), value(v), line(l) {}

map<int, string> typeConversion()
{
    map<int, string> m;

    m[0] = "COMMA";
    m[1] = "PERIOD";
    m[2] = "Q_MARK";
    m[3] = "LEFT_PAREN";
    m[4] = "RIGHT_PAREN";
    m[5] = "COLON";
    m[6] = "COLON_DASH";
    m[7] = "SCHEMES";
    m[8] = "FACTS";
    m[9] = "RULES";
    m[10] = "QUERIES";
    m[11] = "ID";
    m[12] = "STRING";
    m[13] = "ERROR";
    m[14] = "END";

    return m;
}

string Token::toString() const
{
    map<int, string> convMap = typeConversion();
    stringstream out;
    out << "(" << convMap[type] << "," << "\"" << value << "\"" << "," << line << ")" << endl;

    return out.str();
}