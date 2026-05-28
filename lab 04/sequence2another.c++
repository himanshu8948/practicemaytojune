#include<iostream>
#include<string>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++){

        cout << string(5-i,' ') << string(i, '*')<<endl;
    }
return 0;
}