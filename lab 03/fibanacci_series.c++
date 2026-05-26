#include<iostream>
using namespace std;

int main(){

int a,b,n,c;
a = 0;
b = 1;
n = 1;
int sum = 0;


cout<<"enter the terms for the fibanacci series:";
cin>>c;



if(c <= 0){
    cout<<"input value greater than 0 :";
}
else{

cout<<a<<" ";
cout<<b<<" ";


while(n != c-1){

sum = a+b;
a = b;
b = sum;
n += 1;
cout<<sum<<" ";
}
}
return 0;
}