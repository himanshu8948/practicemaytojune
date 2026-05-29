#include<iostream>
using namespace std; 

void swap(int &a,int &b){

           a = a+b;
           b = a-b;
           a = a-b;
    
     }
int main (){

    int a,b;

    cout<<"enter the first no. a :";

      cin>>a;
    cout<<"enter the second no. b :";

      cin>>b;

      swap(a,b);
    cout<<"this is your swapped values of a :";
    cout<<a<<endl;
    cout<<"this is your swapped value of b :";
    cout<<b;
return 0;
}