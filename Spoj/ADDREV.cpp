#include<stdio.h>
int reverse(int n){
        int rev=0;

        while(n)
            {
        rev=10*rev+n%10;
        n/=10;
        }
        return rev;
 }

int main(){
    int a,b,cases;
    scanf("%d",&cases);
        while(cases--){
        scanf("%d%d",&a,&b);
        printf("%d\n",reverse(reverse(a)+reverse(b)));
   }
return 0;
}

