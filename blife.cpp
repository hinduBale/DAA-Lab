#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while(test--)
    {
        lli n, flag = 0;
        cin >> n;
        lli arrP[100000] = {0};
        lli arrN[100000] = {0};
        for(lli i = 0; i < n; i++)
        {
            lli input;
            cin >> input;
            if(input > 0)
                arrP[input] = 1;
            else if(input < 0)
            {
                input = input * (-1);
                arrN[input] = 1;
            }

        }


        for(lli i = 0; i < 100000; i++)
        {
            if(arrP[i] == 1)
            {
                if(arrN[i] == 1)
                    ++flag;
            }
        }

        cout << flag << endl;


    }
    return 0;
}
