#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<cstdio>
using namespace std;

int aCount,bCount;
string a,b;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>a>>b;
    aCount=a.length();
    bCount=b.length();
    int aArr[27]={0};
    for(int i=0;i<a.length();i++){
        aArr[a.at(i)-'a']++;
    }

    for(int i=0;i<b.length();i++){
        if(aArr[b.at(i)-'a'])
        {
                aArr[b.at(i)-'a']--;
                if(aCount)
                aCount--;
                if(bCount)
                bCount--;
        }
    }

    cout<<aCount+bCount<<endl;
    return 0;
}

