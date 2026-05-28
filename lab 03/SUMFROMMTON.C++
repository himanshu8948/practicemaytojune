#include<iostream>
using namespace std;

int main(){

int m,n,c,sum;
sum = 0;
cout<<"enter your first term m from which the sum is required :";
cin>>m;
cout<<"enter your second term n till which the sum is required :";
cin>>n;
c = n-m;
for( int i = 1 ; i <= c+1 ; i++ ){
   
    sum = sum+m;
    m += 1;
    
}
cout <<"your sum from m to n is:"<< "  "<<sum;
return 0;
}