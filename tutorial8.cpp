#include<iostream>
using namespace std;

int main()   {
   int a= 12;
   int* b= &a;
   int** c= &b;


   cout<<"The value of pointer *b is : "<<&a<<endl;
   cout<<"The value of double pointer **c is : "<<&b;

    
 
    return 0;
}