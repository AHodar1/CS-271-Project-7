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
    
    // see page 550
    cout << "construct txtbookG(6) for testing DFS;" << endl;
    Graph txtbookG(6);
    txtbookG.addEdge(0, 1);
    txtbookG.addEdge(0, 3);
    txtbookG.addEdge(3, 1);
    txtbookG.addEdge(1, 4);
    txtbookG.addEdge(4, 3);
    txtbookG.addEdge(2, 4);
    txtbookG.addEdge(2, 5);
    txtbookG.addEdge(5, 5);
    cout << "textbookG.edgeIn for all possible edges: ";
    for (int i = 0; i < 6; i++)
    {
        for (int n = 0; n < 6; n++)
        {
            // cout << "gCopy.edgeIn(" << i << ", " << n << ") = " << g1.edgeIn(i, n) << endl;
            cout << "(" << i << ", " << n << ") = " << txtbookG.edgeIn(i, n) << ", ";
        }
    }
    cout << endl;
    
    std::vector<TraversalData> txtbookG_dfs = txtbookG.depthFirstSearch();
    for (int i = 0; i < 6; i++)
    {
        cout << i << " discovery = "<< txtbookG_dfs[i].discovery << ", finish = " << txtbookG_dfs[i].finish << endl;
    }


    cout << "construct empty gFile;" << endl;
    // Graph gFile(0);
    // gFile = gFile.readFromSTDIN();
    Graph gFile = Graph::readFromSTDIN();
    cout << "gFile.edgeIn for all possible edges: ";
    for (int i = 0; i < 6; i++)
    {
        for (int n = 0; n < 6; n++)
        {
            // cout << "gFile.edgeIn(" << i << ", " << n << ") = " << g1.edgeIn(i, n) << endl;
            cout << "(" << i << ", " << n << ") = " << gFile.edgeIn(i, n) << ", ";
        }
    }
    cout << endl;

    return 0;

}