cmake_minimum_required(VERSION 3.13)
project(Lab5Final)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab5Final main.cpp Database.cpp Database.h Datalog.cpp Datalog.h Graph.cpp Graph.h Node.cpp Node.h Parameter.cpp Parameter.h Parser.cpp Parser.h Predicate.cpp Predicate.h Relation.cpp Relation.h Rule.cpp Rule.h Scanner.cpp Scanner.h Scheme.cpp Scheme.h Token.cpp Token.h TokenType.h Tuple.cpp Tuple.h)