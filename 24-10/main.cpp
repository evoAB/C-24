#include <iostream>

using namespace std;

float sum(int,float);
float sum(float,int);
int main()
{
    int a, b;
    float c,d;
    cout<<"Enter 2 numbers : ";
    cin>>a>>c;
    cout<<"Sum = "<<sum(a,c)<<endl;
    cout<<"Enter 2 numbers : ";
    cin>>d>>b;
    cout<<"Sum = "<<sum(d,b);
    return 0;
}
float sum(int x, float y)
{
    return x+y;
}
float sum(float x, int y)
{
    return x+y;
}
