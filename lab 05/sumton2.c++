//sum of n terms for 1^1/!1+2^2/!2+3^3/!3+.....

#include<iostream>
#include<math.h>
using namespace std;

double sumton(double n,double sum,double fact){

    for( int i = 1; i <= n ; i++){
        
        fact = fact*i;
        sum += (pow(i,i))/fact;

    }
    return sum;
}
int main(){
 
double n,result,sum,fact;
sum = 0;
fact = 1;

cout<<"enter the value of n terms till which the sum is required:";
cin>>n;

if(n>=0){

result = sumton(n,0,1);

cout<<"this is your sum of the series for "<<" "<<n<<" "<< "terms:";
cout<<result;

}
else{

cout<<"you put invalid value try to recheck your value sir:";
}
return 0;}