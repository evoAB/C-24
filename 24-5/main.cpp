#include <iostream>

using namespace std;

int main()
{
    int a, f1=1, f2=1, f3, flag=0;
    cout<<"Enter a number : ";
    cin>>a;
    for(int i=0; i<=a; i++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        if(f2==a)
            flag=1;
    }
    if(flag)
        cout<<"Number is in fibonacci series";
    else
        cout<<"Number is not in fibonacci series";

    return 0;
}

