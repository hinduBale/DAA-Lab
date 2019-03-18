/*
 7.1 Write a program to implement a undirected graph G(V,E), with

       V={ 1, 2, 3, 4, 5},

       E= { (1, 2, 2),  (1, 3, 6), (1, 4, 7), (2, 3, 5), (3, 5, 9) }


       Where V is the set of vertices, E is the set of edges and cost associated
*/

#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define pb push_back
#define mp make_pair
#define MOD 1000000007

using namespace std;

void addEdge(vector < pair <lli, lli> > adjacent[], lli nodeName, lli nodeConnect, lli nodeWeight)
{
    adjacent[nodeName].pb(mp(nodeConnect, nodeWeight));
    adjacent[nodeConnect].pb(mp(nodeName, nodeWeight));
}

void printGraph(vector < pair <lli, lli> > adjacent[], lli maxNodes)
{
    lli nodeWeight, nodeConnect;
    for(lli nodeName = 0; nodeName <= maxNodes ; nodeName++)
    {
        cout << "Node " << nodeName << "  makes an edge with:  " <<endl;
        for(auto i = adjacent[nodeName].begin(); i != adjacent[nodeName].end(); ++i)
        {
            cout << "   Node  " << i -> first << "  with the cost of  " << i -> second << endl;
        }
        cout << endl << endl << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli maxNodes = 5;
    vector < pair < lli, lli > > adjacent[maxNodes+1];
    addEdge(adjacent, 1, 2, 2);
    addEdge(adjacent, 1, 3, 6);
    addEdge(adjacent, 1, 4, 7);
    addEdge(adjacent, 2, 3, 5);
    addEdge(adjacent, 3, 5, 9);
    printGraph(adjacent, maxNodes);
    return 0;
}

