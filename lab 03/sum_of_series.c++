    #include<iostream>
    using namespace std;

    int main(){

    int n,sum;
    sum = 0;
    cout<<"enter your value to find the sum of the series:";
    cin>>n;
    for( int i = 1 ; i <= n ; i++ ){
    
        sum = sum + 2*i-1;
        
        
    }
    cout<<"your sum of the series :";
    cout<<sum;
    return 0;

}