#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007

using namespace std;

int main()
{
    lli test;
    cin >> test;
    for(lli y = 0; y < test; y++)
    {
        lli N;
        string dir;
        cin >> N;
        cin >> dir;
        for(lli i = 0; i < dir.length(); i++)
        {
            if(dir[i] == 'E')
                dir[i] = 'S';
            else if(dir[i] == 'S')
                dir[i] = 'E';
        }
        cout << "Case #" << y+1 << ": "<< dir << endl;;
    }
    return 0;
}


