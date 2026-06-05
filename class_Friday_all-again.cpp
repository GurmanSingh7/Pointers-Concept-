#include<iostream>
using namespace std;

// int main(){  
//     int a = 7;
//     int *p=&a;//refrencing
//     cout<<a<<endl;
//     cout<<*p<<endl;//derefrencing

// // For Address ->    
// // cout<<&a<<endl;
// // cout<<p<<endl;
//     return 0;
// }


// call by value
// void fun(int b){
//      b = b+5;
//     cout<<"Value inside func : "<<b<<endl; // output -> 14
// }
// int main(){
//     int a = 9;
//     fun(a);
//     cout<<"Value in main :"<<a<<endl;
// } // Output -> 9


// Call by Pointer
// void fun(int *b){
//     *b = *b+5;
//     cout<<"Address in b : "<<b<<endl;//address
//     cout<<"Value inside func : "<<*b<<endl; //in this without - "*" adreess of a is printing in output 
// }
// int main(){
//     int a = 9;
//     fun(&a);
//     cout<<"Value in main : "<<a<<endl;//value
//     cout<<"Address in a : "<<&a<<endl;//address
// }

// Q. - Write a program to swap value of two variables using call by pointer in function ?.
// void swap(int *a , int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
//     int main(){
//         int x , y;
//         cin>>x>>y; 
//         cout<<"Value of x before swap: " <<x<<"  "<<"Value of y before swap: "<<y<<endl;
//         swap(&x,&y);
//         cout<<"value of x after swap: "<<x<<"  "<<"Value of y after swap: "<<y<<endl;
//     return 0;
// }


//Reference Variable
// int main(){
//     int a = 5;
//     int &b = a; //-> &b - become reference Variable
//     b = 20;
//     a = a+6;
//     cout<<"a : "<<a<<endl;
//     cout<<"b : "<<b<<endl;
// }


//Pass by Reference
// void fun(int &b){
//     b = b+5;
//     cout<<"Value inside func : "<<b<<endl;
// }
// int main(){
//     int a = 9;
//     fun(a);
//     cout<<"Value in main : "<<a<<endl;
// }

//Call by pointer/Pass by Pointer -> Same
// Q. - Write a program to swap value of two variable using call / pass by refernce ?.
// void swap(int &a,int &b){
// int temp = a;
// a = b;
// b = temp;
// }
// int main(){
// int x, y;
// x = 5 , y = 1;
// swap(x,y);
// cout<<"a : "<<x<<" "<<"b : "<<y<<endl;
// return 0;
// }

//Return by Pointer - > isko new space or more space chaiye hota hai memory me 
// int a; //Outside it become global variable
// int * fun(){
//     // int a; //inside local variable, when block ends then its adrress of a destroyed. 
//     a = 5;
//     return &a;
// }
// int main(){
//     int *b=fun();
//     cout<<*b<<endl;
//     return 0;
// }


// Return by Reference - isko aur koi space nhi chaiye hoti memory me
// int a;
// int& fun(){
//     a=5;
//     return a;
// }
// int main(){
//     int &b = fun();
//     cout<<b<<endl;
//     return 0;
// }

//inline Function : Inline functions are function whose defintion is provided at the calling location of the function. That ,inline function is the request to the compiler to make inline and it totally depends on compiler to make function inline or not . -> Compiler Dependent 
// inline int sum(int a,int b)
// {
//     return a+b;
// }
// int main(){
//     int s1 = sum(5,9);
//     int s2 = sum(10,3);
//     int s3 = sum(2,5);
//     int s4 = sum(9,7);
//     int s5 = sum(10,7);
//     cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<endl;
//     //or
//     //printf("%d %d %d %d",s1,s2,s3,s4);
// }


// Default Arguments : Whenever we provide value to a argument while defining a function than that argument is known as default argument.
// if its value comes while calling than that value is considered , and if its value is not provided while calling then its default value is considered.
// All the default arguments must be on right side in arguments list

// int sum(int a=7 , int b = 2){// If any variable come fast , another variable default value is considered
//     return a + b;
// }
// int main(){
//     int a,b;
//     int s = sum(5);// a uses given value 5 and b uses its default argument
//     cout<<s<<endl;
//     return 0;
// }

// tommorow in class will be covered-> namespace,range based-loop,auto keyword


//Function Overloading :- It is a concept in which we can make two or more same name function by differentiating the types of arguments , number of arguments,or both.
//Function Overloading by differentiating types of arguments 
// float sum(float a,float b)
// {
// return a+b;
// }
// int sum(int a,int b)
// {
//     return a+b;
// }
// int main()
// {
//     int a = 5;
//     int b = 7;
//     float c = 4.5;
//     float d = 5.5;
//    float  f = sum(c,d);
//    int  e = sum(a,b);
//     cout<<e<<endl;
//     cout<<f<<endl;
// }


//Function Overloading by differentiating number of arguments
// int sum(int a,int b)
// {
//     return a+b;
// }
// int sum(int a,int b,int c = 10){//default argument is given , without this answer  will correct
//     return a+b+c;
// }
// int main(){
//     int a=4,b=12,c=7;
//     // cout<<sum(a,b)<<endl;
//     // cout<<sum(c,b)<<endl;
//     // cout<<sum(a,c)<<endl;
//     cout<<sum(a,b,c)<<endl;
// }


//Auto Keyword / Auto Variable - whenever we apply auto keyword while declaring as a datatype or while declaring any variable it automatically reduces the type from the expression or value given at the time of declaration.
//As we know that c++ is strongly typed language it means that datatype of a variable can't be changed after first declaation 

// int main(){
//     auto a = 5;
//     cout<<a<<endl;
//     a = 7.5;
//     cout<<a<<endl;
//     auto ch = "r";
//     cout<<ch<<endl;
//     ch = 100; // check !
//     cout<<ch<<endl;
//     return 0;
// }


// Range based for loop
// Syntax - for(dataype vaiablename : iterable object)
// {
//  for loop
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     for(int a: arr)
//     {
//         cout<<a<<" ";
//     }
// }

// //Check 
// int arr[5] = {1,2,3,4,5};
// for (int &a:arr){
//     a = a+5;
// }
// for(int a:arr){
//     cout<<a<<" ";
//     return 0;
// }


// int main(){
//     int arr[5] = {1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         arr[i] = arr[i] + 5;
//     }
//     for(int a:arr){
//         cout<<a<<" ";
//     }
//     return 0;
// }


//Namespace : - It is a container which holds the identifiers like variable, function, class etc. and helps to avoid name conflict in large projects.
//Class
// It is a Special Container or  a label that holds variables , functions and classes etc. to avoid confusion when we have same name used in different part of program 

// Syntax - namespace namespace_name{
//     // code
// }

// namespace math{
//     float pi=3.14;
//     float area(int r)
//     {
//         return pi*r*r;
//     }
// }
// int main(){
//     int r = 7;
//     cout<<math::area(r)<<endl;
//     return 0;
// }


// namespace HW{
//     void Hello(){
//         cout<<"Hello World!"<<endl;
//     }
// }
// namespace Hi{
//     void Hello(){
//         cout<<"Hello World"<<endl;
//     }
// }
// using namespace HW;// If we use both then it creates confusion and returns error 
// using namespace Hi;

// int main(){
//     Hello();
// }

// or without using namespace of indiviusal
// int main()
// {
//     HW::Hello();
//     Hi::Hello();
//     return 0;
// }


//Procedural programming -> It is defined as a programming model which is function centric i.e based upon a series of computaion steps and calling function.
//ii) During a program execution any given function can be called at any place whether by other function or by itself . Example - C ,COBOL ,FORTRAN

// Object Oriented Programming -> It can be defined as a programming model hich is object centric 
//ii) Object Contains data in the form of attributes and code in the form of function i.e encapsulated within a class .
//iii) In object oriented programming programs are designed using the concept of objects that interact with real world . Example - C++,java,python etc.

// Problem Solving Approach
// A Top-Down Approach ->(i) In top-down we start with the main problem and then breaks it into smaller sub problem
// (ii) In this approach we implement smaller sub problem which are combined into function step-by-step
// (iii) It is used in procedural programming.

//Bottom-Up Approach -> In this type of approach we identify the object first than build smallest components than integrates them to form a complete solution.
