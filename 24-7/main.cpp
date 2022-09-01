#include <iostream>

using namespace std;
int addN(int, int, int=0);
int main()
{
    int a,b,c;
    cout<<"Enter 2 number : ";
    cin>>a>>b;
    cout<<"Sum = "<<addN(a,b)<<endl;
    cout << "Enter 3 numbers : ";
    cin>>a>>b>>c;
    cout<<"Sum = "<<addN(a,b,c);
    return 0;
}
int addN (int x,int y, int z)
{
    return x+y+z;
}
