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
    for(lli x = 0; x < test; x++)
    {
        vector <lli> v = {0};
        string num;
        cin >> num;
        lli caseNum = 1;
        lli sum = 0;
        for(lli i = 0; i < num.length(); i++)
        {
            if(num[i] == '4')
            {
                num[i] = '3';
                lli power = num.length()- 1 - i;
                lli rest = (lli)(pow(10, power)+0.5);
                sum += rest;
            }
        }
//        cout << num << endl;
//        cout << sum << endl;
         cout << "Case #" << x+1 << ": "<<num << " " << sum << endl;

    }
    return 0;
}


