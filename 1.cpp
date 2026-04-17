#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(nullptr);
    int n;
    cin >>n;
    ll total =0;
    while(n>0){
        int a, b, c;
        cin >>a >> b >> c;
        total+=a+b+c;
        n--;
    }
    if(total==0){
        cout<<"YES"<<endl<<flush;
    }else{
        cout<<"NO"<<endl<<flush;
    }
}