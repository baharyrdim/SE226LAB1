#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    cout<<"Write an integer.";
    cin>>x;

    int y;
    cout<<"Write second integer.";
    cin>>y;

    int sum = x + y;
    int diff = x - y;
    int prod = x*y;

    cout<<sum<<endl;
    cout<<diff<<endl;
    cout<<prod<<endl;
    return 0;
}
