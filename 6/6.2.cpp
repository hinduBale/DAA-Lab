#include<iostream>
using namespace std;

int main()
{

    int arr[6][6] = {{1,2,0,0,0,0},
                    {3,4,5,0,0,0},
                    {0,6,7,8,0,0},
                    {0,0,9,1,2,0},
                    {0,0,0,3,4,5},
                    {0,0,0,0,6,7}};
        int i, j, non_zero = 0;
        cout<<"The Original Matrix is\n";
        for(i = 0; i < 6; i++)
        {
            for(j = 0; j < 6; j++)
            {
                cout<<arr[i][j] <<" ";
                if(arr[i][j] != 0)
                    non_zero = non_zero + 1;
            }
            cout<<"\n";


        }
        int sparse[non_zero][3];
        i = 0;
        for(int a = 0; a < 6; a++)
        {
            for(int b = 0; b < 6; b++)
            {
                if (arr[a][b] != 0)
                {
                    sparse[i][0] = a;
                    sparse[i][1] = b;
                    sparse[i][2] = arr[a][b];
                    i++;
                }
            }
        }
        cout<<"The Sparse Matrix is\n";
        for(i = 0; i < non_zero; i++)
        {
            for(j = 0; j < 3; j++)
            {
                cout<<sparse[i][j] << " ";
            }
            cout<<"\n";

        }
    return 0;
}
