#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007

using namespace std;

struct node
{
    lli F;
    char L;
    struct node* left;
    struct node* right;
};

struct node* newNode(lli F)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node -> F = F;
    node ->left = NULL;
    node ->right = NULL;
    return (node);
}

int main()
{
    lli numOfNodes;
    map <char, lli> huffman;
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    cout << "Enter number of nodes: " << endl;
    cin >> numOfNodes;
    for(lli i = 0; i < numOfNodes; i++)
    {
        char letter;
        lli freq;
        cout << "Enter the number " << i + 1 << " letter and its frequency: " << endl;
        cin >> letter;
        cin >> freq;
        huffman.insert(pair <lli, char> (freq, letter));
    }
//    for(auto i:huffman)
//    {
//        cout << i.first << " " << i.second << endl;
//    }
     //Building a min heap using priority queue;
     priority_queue <lli, vector <lli>, greater <lli> > pq;
     for(auto i : huffman)
         pq.push(i.first);



    return 0;
}

