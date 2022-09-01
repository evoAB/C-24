#include <iostream>

using namespace std;
int fact(int);
int comb(int,int);

int main()
{
    int n;
    cout<<"Enter rows of pascal's triangle : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
            cout<<" ";
        for(int k=0;k<=i;k++)
            cout<<comb(i,k)<<" ";
        cout<<endl;
    }
    return 0;
}
int fact(int n)
{
    int res=1;
    for(int i=1;i<=n;i++)
        res=res*i;
    return res;
}
int comb(int x,int y)
{
    return fact(x)/(fact(y)*fact(x-y));
}
