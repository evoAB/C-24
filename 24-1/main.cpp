#include <iostream>

using namespace std;
int prime(int);
int main()
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(prime(a))
        cout<<"It is a prime number";
    else
        cout<<"Not a prime number";
    return 0;
}
int prime(int x)
{
    for(int i=2;i<=x/2;i++)
        if(x%i==0)
            return 0;
    return 1;
}
