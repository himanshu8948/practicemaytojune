#include<iostream>
using namespace std;

int sumn(int n){

     return n*(n+1)/2;

}
int main(){

    int n,result;
    
cout<<"enter the value of n till which the sum is required : ";
cin>>n;

result = sumn(n);

cout<<"this is your sum from "<< " "<<n<<" " << "terms:";
cout<<result;

return 0;

}