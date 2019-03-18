#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007

using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}


void printArray(int A[])
{
    int i;
    for (i=0;i<10; i++)
        cout<<A[i]<<" ";
}

int main()
{
    int arr[10],i;
    cout<<"Enter 10 numbers:"<<endl;
    for(i=0;i<=9;i++)
        cin>>arr[i];
    cout<<"Given array is:"<<endl;
    printArray(arr);

    mergeSort(arr,0,9);

    cout<<"Sorted array is:"<<endl;
    printArray(arr);
    return 0;
}
