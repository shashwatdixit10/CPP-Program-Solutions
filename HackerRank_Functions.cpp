#include <bits/stdc++.h>
using namespace std;
int max_of_four(){
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    if (a>b && a>c && a>>d) {
        cout<<""<<a;
    }
    else if(b>a && b>c && b>d){
        cout<<""<<b;
    }
    else if (c>a && c>b && c>d) {
    cout<<""<<c;
    }
    else if(d>a && d>b && d>c){
    cout<<""<<d;
    }
    return 0;
        }    
    int main(){
        max_of_four();
    }
