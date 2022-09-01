#include <iostream>

using namespace std;
float area(int);
int area(int,int);
float area(float,float);
int main()
{
    int r,l,w;
    float b,h;
    cout << "Enter radius of circle : ";
    cin>>r;
    cout<<"Area of circle : "<<area(r)<<endl;
    cout<<"Enter length & width of rectangle : ";
    cin>>l>>w;
    cout<<"Area of rectangle : "<<area(l,w)<<endl;
    cout<<"Enter base and height of triangle : ";
    cin>>b>>h;
    cout<<"Area of triangle : "<<area(b,h)<<endl;
    return 0;
}
float area(int rad)
{
    return 3.14*rad*rad;
}
int area(int len, int wid)
{
    return len*wid;
}
float area(float base,float hei)
{
    return base*hei/2;
}
