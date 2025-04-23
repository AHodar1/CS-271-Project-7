#include <iostream>
#include <vector>
#include <deque>
#include <climits>
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

/*
edgeIn
Purpose: Check for an edge between the two inputted vertices in graph 
Parameters:
    -u, the first vertex the edge would lead from
    -v, the second vertex, which the edge would go to
Return Value:
    -edgeInGraph, a bool to check if the wanted edge is in graph
Errors:
    -std::out_of_range, if either inputted vertex does not exist in the graph
*/
bool Graph::edgeIn(int u, int v)
{
    if (!(vertexIn(u)) || !(vertexIn(v)))
    {
        throw std::out_of_range("vertex does not exist");
    }

    bool edgeInGraph = false;
    for (int i = 0; i < adjList[u].size(); i++)
    {
        if (adjList[u][i] == v)
        {
            edgeInGraph = true;
        }
    }
    return edgeInGraph;
}

// throw an std::out_of_range exception if u or v is not in the graph
void Graph::addEdge(int u, int v)
{
    if (!(vertexIn(u)) || !(vertexIn(v)))
    {
        throw std::out_of_range("vertex does not exist");
    }
    
    if (!(edgeIn(u, v)))
    {
        adjList[u].push_back(v);
    }

}

// throw an std::out_of_range exception if u or v is not in the graph
// throw an std::out_of_range exception if (u, v) is not an edge of the graph
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
