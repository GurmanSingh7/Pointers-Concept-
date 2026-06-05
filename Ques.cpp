//Q - Write a program to count how many times the function is called ?
// #include<iostream>
// using namespace std;
// static int count = 0;  
// void fun()
// {
//     count++;
//     cout<<"Function called : "<<count<<"times"<<endl;
// }
// int main(){
//     fun();
//     fun();
//     fun();
//     return 0;
// }

//another
#include<iostream>
using namespace std;
int* fun()
{
    static int i = 0;
    i++;
    return &i;
}
int main()
{
    fun();
    fun();
    fun();
    int*b = fun();
    cout<<*b;
    return 0;
}
