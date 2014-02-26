#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
    int c[28]={0};
    string s;
    cin>>s;
    for(int i=0; i<s.length();i++){
         c[s.at(i)-'a']++;
        }
    if(s.length()%2==0){
        for(int i=0;i<26;i++){
            if(c[i]%2 == 1 || c[i]==s.length())
            {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
    }
    else{
            int odd=0;
         for(int i=0;i<26;i++){
            if(c[i]%2 == 1)
            {
                odd++;
            }
        }
        if(odd == 1){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
