#include <iostream>

using namespace std;
int power(int, int);
int main()
{
    int x,y;
    cout << "Enter number and its power : ";
    cin>>x>>y;

    cout<<x<<" raised to the power "<<y<<" : "<<power(x,y);
    return 0;
}
int power(int a,int b)
{
    int max=1;
    while(b)
    {
        max*=a;
        b--;
    }

    return max;
}
