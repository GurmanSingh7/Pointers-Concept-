#include<iostream>
using namespace std;
void fun(int*a)   
{   
    *a = *a+5;
    cout<<"value of a in fun :"<<*a<<endl;  
}
int main()
{
    int b;
    b = 7;
    fun(&b);
    cout<<"Value of b in main : "<<b;
    return 0;
}
