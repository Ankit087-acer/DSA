#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b)>c && (b+c)>a && (a+c)>b){
        cout<<"Valid triangle";
    }
    else{
        cout<<"Invalid triangle";
    }
    return 0;
}