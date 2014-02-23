#include<stdio.h>
#include <string>
#include <iostream>

using namespace std;

long long n;
long long M;

void solve(){
    long long a=1,b=1;
    for(int i=1;i<((n+1)/2);i++){
        a=a*(2*i+0)%M;
        b=b*(2*i+1)%M;
    }
    n= (a*b) % M;
    //cout<<"hi-"<<n;
    for(int i=1;i<((n+1)/2);i++){
        a=a*(2*i+0)%M;
        b=b*(2*i+1)%M;
    }
    n= (a*b) % M;
    cout<<n<<endl;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        cin>>n>>M;
        solve();
    }
}
