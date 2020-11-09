#include <iostream>
using namespace std;
int main()
{
    float v1,v2,s,t,s1;
    cout<<"Input speed of both cars, distance between them and time"<<endl;
    cin>>v1>>v2>>s>>t;
    s1=(v1+v2)*t+s;
    cout<<"Final distance="<<s1<<endl;
}
