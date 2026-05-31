#include<iostream>
using namespace std ;

int largest(int a,int b,int c){

    if(a > b && a > c)
    return a;

    else if(b > a && b > c)
    return b;

    else if(c > a && c > b)
    return c;

}
double largest(double a,double b,double c){

    if (a > b && b > c)
    return a ;

    else if(b > a && b > c)
    return b;

    else if(c > a && c > b)
    return c;

}
int main (){
    double a,b,c,result;

    cout<<"enter three no. in order to check which is largest :"<<endl;
    cout<<"first no.:";
    cin>>a;
    cout<<"second no.:";
    cin>>b;
    cout<<"third no.:";
    cin>>c;

    result = largest(a,b,c);

    if(result == a ){

        cout<<"a is largest no. among the three no.:";
    }
    else if(result == b){

        cout<<"b is largest no. among the three no.:";
    }
    else if(result == c){

        cout<<"c is largest among the three no.:";

    }
    return 0;
}

