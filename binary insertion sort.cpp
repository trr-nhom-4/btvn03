#include <bits/stdc++.h>

using namespace std;

int BinarySearch1(int a[], int l, int r, int x)
{
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (x == a[mid])
            return mid + 1;
        else if (x > a[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }

    return l;
}

int main()
{
    int n;
    cin >> n;
    int a2[1001];
    int a[1001];
    for (int i = 0; i < n; i++) cin >> a[i];
     a2[0] = a[0];
    for(int i=1;i<n;i++)
    {
        int key = a[i];
        int loc = BinarySearch1(a2, 0, i-1,key) -1 ;
        //copy day hien tai
        int a3[i];
        for(int j=0;j<i;j++) a3[j]=a2[j];
        //day 1 don vi
        if (key >= a2[loc])
        {
            for(int j=loc+2;j<i+2;j++) a2[j] = a3[j-1];
            a2[loc+1] = key;
        }
        else if (key < a2[loc])
        {
            for(int j=loc+1;j<i+1;j++) a2[j] = a3[j-1];
            a2[loc] = key;
        }
        //cout<<loc<<" ";

    }
    for(int i=0;i<n;i++) cout<<a2[i]<<" ";
    return 0;
}

