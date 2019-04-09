//
// Created by Jared Hasson on 2019-04-09.
//

#ifndef LAB5FINAL_TOKENTYPE_H
#define LAB5FINAL_TOKENTYPE_H


#include <map>
#include <string>

using namespace std;

enum TokenType
{
    COMMA,
    PERIOD,
    Q_MARK,
    LEFT_PAREN,
    RIGHT_PAREN,
    COLON,
    COLON_DASH,
    SCHEMES,
    FACTS,
    RULES,
    QUERIES,
    ID,
    STRING,
    ERROR,
    END
};


#endif //LAB5FINAL_TOKENTYPE_H
