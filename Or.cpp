#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%5==0 or n%3==0){
        cout<<"Divisible by 5 or 3";
    }
    else{
        cout<<"Not divisible by 5 or 3";
    }
    return 0;
}