#include "Graph.hpp"

int main()
{

    Graph g1(4);
    cout << "construst g1(4)" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << "g1.vertexIn(" << i << ") = " << g1.vertexIn(i) << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int n = 0; n < 4; n++)
        {
            cout << "g1.edgeIn(" << i << ", " << n << ") = " << g1.edgeIn(i, n) << endl;
        }
    }
    return 0;
}