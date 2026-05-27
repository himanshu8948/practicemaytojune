#include<iostream>
using namespace std;

int main(){

float a,n,result;
n = 1;
result = 0;
cout << "enter the no. of terms till which you want the series:";
cin>> a;

for (  n ; n <= a ; n++){
    result = 1/n+result;

if (n == 1 ){
cout<<"1";
}
else{
  
cout<<"+1/"<<n;
}}
return 0;
}
