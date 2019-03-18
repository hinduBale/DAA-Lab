 //Input a string and reverse it using a stack.


#include <bits/stdc++.h>

using namespace std;

void reverse_string(stack <char> input);

int main()
{
    stack <char> input;
    string InputString;
    cin >> InputString;
    for(int i = 0; i < InputString.length(); i++)
    {
        input.push(InputString[i]);
    }
    cout << "Reversed String is : ";
    reverse_string(input);

    return 0;
}

void reverse_string(stack <char> input)
{
    while(!input.empty())
    {
        cout << input.top();
        input.pop();
    }
    cout << " ";
}
