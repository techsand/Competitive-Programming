#include<stdio.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int r[101]={0};
    int c[101]={0};
    int x,y;
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        r[x]++;
        c[y]++;
    }
    int a=0;
    int b=0;
    for(int i=0;i<101;i++){
        if(r[i]){
               // printf("___** r %d %d\n",i,r[i]);
            a++;
        }

        if(c[i]){
          // printf("___** c %d %d\n",i,c[i]);
            b++;
        }


    }
   // printf("*** %d %d\n",a,b);
    printf("%d\n",a<b?a:b);
}
