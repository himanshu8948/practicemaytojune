#include<iostream>
using namespace std;

int main (){


  int m,n,sum;
  sum = 0;

cout<<"enter your 1st no.:";
cin>>m;
cout<<"enter your 2nd no.:";
cin>>n;

if (n<m){

    for(int x = n; x <= m; x++){
    sum = x +sum;
}
}
else if (n>m){
    for(int x = m; x <= n; x++ ){
        sum = x+sum;

    }
}
else if (n == m){
    sum = n;
}
cout<<"sum of the no.:";
cout<<sum;
return 0;
}