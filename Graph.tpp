#include <iostream>
#include <vector>
#include <deque>

#include "Graph.hpp"


using namespace std;


Graph::Graph(int n)
{
    // assume vertices are 0...n-1;
    adjList = std::vector<std::vector<int>>(n);
    // adjList = new std::vector<int>;
    
}

Graph::Graph(const Graph &g)
{

}

Graph::~Graph(void)
{
}

Graph &Graph::operator=(const Graph &g)
{
    // TODO: insert return statement here
    return *this;

}

void Graph::dfsVisit(std::vector<TraversalData> &data, int &time, int u, int &order)
{
}

/*
vertexIn
Purpose: Check if the inputted vertex is in the graph 
Parameters:
    -u, the vertex to check for
Return Value:
    -vertexInGraph, a bool to check if vertex is in graph
Errors:
    -N/A
*/
bool Graph::vertexIn(int u)
{
    bool vertexInGraph = false;
    if (u < adjList.size())
    {
        vertexInGraph = true;
    }
    return vertexInGraph;
}

bool Graph::edgeIn(int u, int v)
{
    return false;
}

void Graph::addEdge(int u, int v)
{
}

void Graph::removeEdge(int u, int v)
{
}

std::vector<TraversalData> Graph::breadthFirstSearch(int s)
{
    return std::vector<TraversalData>();
}

std::vector<TraversalData> Graph::depthFirstSearch(void)
{
    return std::vector<TraversalData>();
}

// Graph Graph::readFromSTDIN()
// {
    // return Graph();
// }
