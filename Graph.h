//
// Created by Jared Hasson on 2019-04-09.
//

#ifndef LAB5FINAL_GRAPH_H
#define LAB5FINAL_GRAPH_H

#include "Node.h"

#include <map>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

class Graph
{
private:
    map<string, Node> nodeList;
    unsigned int currentPostNum = 1;
    bool cyclic = false;
    map<unsigned int, Node> orderNodeList;

public:
    void addNode(string, unsigned int);
    void addAdjacentNode(string, unsigned int, string, unsigned int);
    Node& getNode(string, unsigned int);
    map<unsigned int, string> getPostOrderList() const;
    map<unsigned int, Node> getOrderNodeList() const;
    void dfs(Node&);
    void clearNodes();
    void outputPostOrderNumbers(ofstream&);
    void outputBackEdges(ofstream&);
    bool isCyclic();
    void outputRuleEvaluationOrder(ofstream&);
    void toString(ofstream&);
};


#endif //LAB5FINAL_GRAPH_H
