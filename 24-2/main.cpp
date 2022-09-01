#include <iostream>

using namespace std;
int highestV(int);
int main()
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Highest value : "<<highestV(a);
    return 0;
}
int highestV(int x)
{
    int max=0;
    while(1)
    {
        if(max<x%10)
            max=x%10;
        x=x/10;
        if(x%10==0)
            return max;

    }
}
