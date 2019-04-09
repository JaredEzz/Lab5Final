#include "Database.h"

using namespace std;

int main(int argc, char* argv[])
{
//    Database db(argv[1], argv[2]);
    Database db(const_cast<char *>("/Users/jaredhasson/CLionProjects/Lab5Final/tests/in50.txt"), const_cast<char *>("tests/outtest50.txt"));

//    system("pause");
}