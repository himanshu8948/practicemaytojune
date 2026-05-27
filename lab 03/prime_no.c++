#include<iostream>
using namespace std;
int main(){

int a,factors;
factors = 0;
cout<<"enter your no. to check prime no. or not :";
cin>>a;
for (int i = 1 ; i <= a ; i++){
  if ( a % i == 0){
    factors += 1;
      }
} 
if(factors == 2){
    cout<<"your entered value is a prime no. !";
}
else{

    cout<<"your entered value is not a prime no. !";
}
return 0;
}