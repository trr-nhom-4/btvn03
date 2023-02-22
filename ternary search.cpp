#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int x;
    cin>>x;
    int i=1, j=n, loc=-1;
    while(i<=j)
    {
        int t1= i+ (j-i)/3;
        int t2= j - (j-i)/3;
        if(x==a[t1])
        {
            loc = t1;
            break;
        }
        else if(x==a[t2])
        {
            loc=t2;
            break;
        }
        else if(x<a[t1])
        {
            j = t1-1;
        }
        else if(x>a[t1] && x<a[t2])
        {
            i= t1+1;
            j= t2-1;
        }
        else i=t2+1;
    }
    cout<<loc;
    return 0;
}
