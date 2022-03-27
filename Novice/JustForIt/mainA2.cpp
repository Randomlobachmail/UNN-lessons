#include <iostream>
using namespace std;
int main(){
    int n, a, b,j;
    cin >> n;
    
    if(n==1){
        cin >> a;
        b=a;
    }
    else{
        a=1001;
        b=-1;
        for(int i=0;i<n;++i){
            cin >> j;
            if(a>j){
                a=j;
            }
            if(b<j){
                b=j;
            }
        }
    }
        cout << a  << " " << b;
    return 0;
    }
