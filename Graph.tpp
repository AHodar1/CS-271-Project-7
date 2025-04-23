#include <iostream>
#include <vector>
#include <deque>
#include <climits>
#include "Graph.hpp"


using namespace std;

/*
default constructor
Purpose: Create an adjacency list with a size equal to the inputted # of vertices in graph
Parameters:
    -n, the # of vertices in graph and size of outer vector
Return Value:
    -N/A, but creates an empty adjancency list
Errors:
    -N/A
*/
Graph::Graph(int n)
{
    // assume vertices are 0...n-1;
    adjList = std::vector<std::vector<int>>(n);    
}


Graph::Graph(const Graph &g)
{
    adjList = std::vector<std::vector<int>>(g.adjList.size());
    for (int i = 0; i < g.adjList.size(); i++)
    {
        for (int n = 0; n < g.adjList[i].size(); n++)
        {
            // cout << "g1.edgeIn(" << i << ", " << n << ") = " << g1.edgeIn(i, n) << endl;
            // cout << "(" << i << ", " << n << ") = " << g1.edgeIn(i, n) << ", ";
            addEdge(i, g.adjList[i][n]);
        }
    }
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
        throw std::out_of_range("edgeIn: vertex/vertices do not exist");
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

/*
addEdge
Purpose: Add an edge between the two inputted vertices
Parameters:
    -u, the first vertex the edge will lead from
    -v, the second vertex, which the edge will go to
Return Value:
    -void, but the adjacency list will have another value added to represent a new edge
Errors:
    -std::out_of_range, if either inputted vertex does not exist in the graph
    -also will do nothing if there is already an edge where attempting to add a new one
*/
void Graph::addEdge(int u, int v)
{
    if (!(vertexIn(u)) || !(vertexIn(v)))
    {
        throw std::out_of_range("addEdge: vertex/vertices do not exist");
    }
    
    if (!(edgeIn(u, v)))
    {
        adjList[u].push_back(v);
    }

}

/*
removeEdge
Purpose: Remove an edge between the two inputted vertices
Parameters:
    -u, the first vertex the edge to delete leads from
    -v, the second vertex, which the edge to delete goes to
Return Value:
    -void, but the adjacency list will have erased a value representing a former edge
Errors:
    -std::out_of_range, if either inputted vertex does not exist in the graph
    --std::out_of_range, if there is no edge between the two inputted vertices
*/
void Graph::removeEdge(int u, int v)
{
    if (!(vertexIn(u)) || !(vertexIn(v)))
    {
        throw std::out_of_range("removeEdge: vertex/vertices do not exist");
    }
    if (!(edgeIn(u, v)))
    {
        throw std::out_of_range("removeEdge: inputted edge does not exist");
    }
    
    for (int i = 0; i < adjList[u].size(); i++)
    {
        if (adjList[u][i] == v)
        {
            adjList[u].erase(adjList[u].begin() + i);
        }
    }
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
