#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007

using namespace std;

struct minHeapNode
{
    char data;
    lli freq;
    minHeapNode *left, *right;
    minHeapNode(char data, lli freq)
    {
        left = right = NULL;
        this -> data = data;
        this -> freq = freq;
    }
};

struct compare
{
    bool operator() (minHeapNode* l, minHeapNode* r)
    {
        return (l -> freq > r -> freq);
    }
};

void printCode(struct minHeapNode* root, string codeStr)
{
    if(!root)
        return;
    if(root -> data != '$')
        cout << root -> data << " : "<< codeStr << endl;

    printCode(root->left, codeStr + "0");
    printCode(root -> right, codeStr + "1");
}

void Huffman(char data[],lli freq[], int length)
{
    struct minHeapNode *left, *right, *top;
    priority_queue<minHeapNode*, vector<minHeapNode*>, compare> minHeap;

    for (int i = 0; i < length; ++i)
        minHeap.push(new minHeapNode(data[i], freq[i]));

    while (minHeap.size() != 1) {

        left = minHeap.top();
        minHeap.pop();

        right = minHeap.top();
        minHeap.pop();
        top = new minHeapNode('$', left->freq + right->freq);

        top->left = left;
        top->right = right;

        minHeap.push(top);
    }
    printCode(minHeap.top(), "");
}



int main()
{
    lli numOfNodes;
    cout << "Enter number of nodes: " << endl;
    cin >> numOfNodes;
    char C[numOfNodes];
    lli A[numOfNodes];
    for(lli i = 0; i < numOfNodes; i++)
    {
        char letter;
        lli freq;
        cout << "Enter the number " << i + 1 << " letter and its frequency: " << endl;
        cin >> letter;
        cin >> freq;
        C[i] = letter;
        A[i] = freq;
    }

    Huffman(C, A, numOfNodes);

    return 0;
}

