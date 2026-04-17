#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main(){
    cin.tie(nullptr);
    int n;
    int total = 0;
    int found = 0;
    while (total<25){
        cin>>n;
        total++;
        if (n==1){
            found=total;
        }
    }
    int num = 0;
    int num2=0;
    if(found%5==0){
        num++;
    }
    if(found%5>3){
        num2++;
    }
    //cout <<found <<endl;
    cout<<abs(2+num-found/5)+abs(3-found%5-num) <<endl<<flush;

}