#include <iostream>

using namespace std;

int maxN(int,int);
float maxN(float, float);
int main()
{
    int a,b;
    float y,z;
    cout << "Enter 2 integer numbers : ";
    cin>>a>>b;
    cout<<"Maximum number = " << maxN(a,b)<<endl;
    cout << "Enter 2 real numbers : ";
    cin>>y>>z;
    cout<<"Maximum number = " << maxN(y,z);

    return 0;
}

int maxN(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

float maxN(float x, float y)
{
    if(x>y)
        return x;
    else
        return y;
}
