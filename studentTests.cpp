#include "Graph.hpp"

int main()
{

    Graph g1(4);
    cout << "construct g1(4)" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << "g1.vertexIn(" << i << ") = " << g1.vertexIn(i) << endl;
    }
    cout << "g1.edgeIn for all possible edges: ";
    for (int i = 0; i < 4; i++)
    {
        for (int n = 0; n < 4; n++)
        {
            // cout << "g1.edgeIn(" << i << ", " << n << ") = " << g1.edgeIn(i, n) << endl;
            cout << "(" << i << ", " << n << ") = " << g1.edgeIn(i, n) << ", ";
        }
    }
    cout << endl;

    cout << "g1.addEdge(0, 1);" << endl;
    g1.addEdge(0, 1);
    g1.addEdge(0, 2);
    cout << "g1.edgeIn for all possible edges: ";
    for (int i = 0; i < 4; i++)
    {
        for (int n = 0; n < 4; n++)
        {
            // cout << "g1.edgeIn(" << i << ", " << n << ") = " << g1.edgeIn(i, n) << endl;
            cout << "(" << i << ", " << n << ") = " << g1.edgeIn(i, n) << ", ";
        }
    }
    cout << endl;
    

    cout << "g1.removeEdge(0, 1);" << endl;
    g1.removeEdge(0, 1);
    cout << "g1.edgeIn for all possible edges: ";
    for (int i = 0; i < 4; i++)
    {
        for (int n = 0; n < 4; n++)
        {
            // cout << "g1.edgeIn(" << i << ", " << n << ") = " << g1.edgeIn(i, n) << endl;
            cout << "(" << i << ", " << n << ") = " << g1.edgeIn(i, n) << ", ";
        }
    }
    cout << endl;

    cout << "gCopy(g1)" << endl;
    Graph gCopy(g1);
    cout << "gCopy.edgeIn for all possible edges: ";
    for (int i = 0; i < 4; i++)
    {
        for (int n = 0; n < 4; n++)
        {
            // cout << "gCopy.edgeIn(" << i << ", " << n << ") = " << g1.edgeIn(i, n) << endl;
            cout << "(" << i << ", " << n << ") = " << gCopy.edgeIn(i, n) << ", ";
        }
    }
    cout << endl;

    // cout << gCopy << endl;
    return 0;

}