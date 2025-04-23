#include "Graph.hpp"

int main()
{

    Graph g1(4);
    cout << "construst g1(4)" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << "g1.vertexIn(" << i << ") = " << g1.vertexIn(i) << endl;
    }
    return 0;
}