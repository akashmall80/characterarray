//Character array
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[]={'a','b','c','d','e','f','g','\0'};
    cout<<a<<" "<<endl;
    cout<<strlen(a)<<endl;
    cout<<sizeof(a)<<endl;
    char b[100];
    cin>>b;
    cout<<b;
    return 0;
}