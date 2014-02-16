#include<string>
#include<iostream>
#include<stdio.h>
#include <stdlib.h>
#include<ctype.h>

using namespace std;
int checkType(string a){

    if(a.find('R')!= string::npos && a.find('C')!=string::npos){

        if(isdigit(a.at(a.find('R')+1))&& isdigit(a.at(a.find('C')+1))){

            return 1;
        }

    }
    return 2;

}

void solveType1(string a){
    char q,w;
    int r,c;
    string t;
    sscanf(a.c_str(),"R%dC%d",&r,&c);
    while(c){
        c-=1;
        t +=('A'+(c%26));

        c/=26;
    }
    int i=t.length()-1;
    while(i>=0){
        printf("%c",t[i--]);
    }
    cout<<r<<endl;
}

void solveType2(string a){
    char *u=(char*)malloc(sizeof(a.length()+1));
    int r,i;
    for(i=0;i<a.length() && isalpha(a[i]);i++){;}

    int t=i-1 ;
    cout<<"R";
    for(;i<a.length();i++)
        cout<<a[i];

        int c=0;

        int mul=1;
    while(t>=0){
        c=(a[t]-'A'+1)*mul+c;
        mul*=26;
    t--;
    }
    cout<<'C'<<c<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        if(checkType(a)==1){
                solveType1(a);
        }
        else
            solveType2(a);
    }
    return 0;
}
