#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        v1.push_back(a);
        }
    sort(v1.begin(),v1.end());
    for ( auto &i : v1)
    cout<<i<<" ";
    
}
