#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    string a,b;

    while(t--){
            int r=0;
            int x[130]={0},y[130]={0};
        cin>>a>>b;
        for(int i=0;i<a.length();i++){
            x[a.at(i)]++;
        }
        for(int i=0;i<b.length();i++){
            if(x[b.at(i)]){
                r++;
                x[b.at(i)]--;
            }
        }
        cout<<r<<endl;
    }
}
