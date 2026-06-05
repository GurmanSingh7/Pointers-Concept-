// Returntype* functionname()
// {
//     function body
//     return &variablename;   
// }    

#include <iostream>   
using namespace std;
int a; // global variable
int* fun()
{
    a = 5;  
    return &a;
}
int main()
{
    int*p//danling pointer where exceution start and return adrres of a  and function delete and return error 
     = fun();
    cout<<*p;
    return 0;
}
