#include <iostream>
using namespace std;
#define ll long long

int main(){
    cin.tie(nullptr);
    int n;
    cin >>n;
    ll x =0, y=0, z=0;
    while(n>0){
        int a, b, c;
        cin >>a >> b >> c;
        x+=a;
        y+=b;
        z+=c;
        n--;
    }
    if(x==0&&y==0&&z==0){
        cout<<"YES"<<endl<<flush;
    }else{
        cout<<"NO"<<endl<<flush;
    }
}