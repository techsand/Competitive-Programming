#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[100004];
int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

void rotateArr(int k,int n){
    int i,j,temp,t;
    for(i=0;i<gcd(k,n);i++){
        temp=a[i];
        j=i;
        while(1){
            t=j+k;
            while(t>=n){
                t=t-n;
            }
            if(t==i)
                break;
            a[j]=a[t];
            j=t;
        }
        a[j]=temp;
    }
}

int main() {
    int n,k,q;
    cin>>n>>k>>q;
    for(int i=0;i<n;i++)
        cin>>a[i];

   while(k>n){
        k=k-n;
   }

    rotateArr(n-k,n);

    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;

    while(q--){
        cin>>k;
        cout<<a[k]<<endl;
    }
    return 0;
}
