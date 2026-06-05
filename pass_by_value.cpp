#include<iostream>
using namespace std;
void fun(int a)
{
    a = a+5;
    cout<<"Value of a :"<<a<<endl;  
}
int main()
{
    int b;
    b = 10;
    fun(b);
    cout<<"value of b :"<<b;
    return 0;
}
