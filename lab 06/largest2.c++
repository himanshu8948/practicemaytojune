#include<iostream>
using namespace std;

double largest(double a,double b,double c){

    if (a > b && a > c)
    return a;

    else if (b > a && b > c)
    return b;

    else if (c > a && c > b)
    return c;

}
 
int main (){
    double a,b,c ,result;

    cout<<"enter all the three no. to compare which is greatest :"<<endl;
    cout<<"first no. :";
    cin>>a;
    cout<<"second no. :";
    cin>>b;
    cout<<"third no. :";
    cin>>c;

    result = largest(a,b,c);

    if(result == a){

        cout<<"Among all the three no. a,b and c the largest no. : a";
    }
    else if(result == b){

        cout<<"Among all the three no. a,b and c the largest no. : b";
    }
    else if(result == c){
        
        cout<<"Among all the three no. a,b and c the largest no. : c";
    }
    
    return 0;
}