#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter two numbers to find multiplication"<<endl;
    cin>>a>>b;
    int *p1 = &a;
    int *p2 = &b;
   cout<<(*p1)*(*p2);

}