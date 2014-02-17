#include <stdio.h>
int fac[101][160];
void mul(int t[],int s[],int num)
{
    int i,carry=0;
    for(i=1;(i<=s[0])||carry;i++)
    {
        t[i]=carry;
        if(i<=s[0])t[i]+=num*s[i];
        carry=t[i]/10;
        t[i]%=10;
    }
    t[0]=i-1;
}
void init_fact()
{
    int f;
    fac[0][0]=1;
    fac[0][1]=1;
    for(f=1;f<=100;f++)
       mul(fac[f],fac[f-1],f);
}
print(int n)
{
    int i;
    for(i=fac[n][0];i>0;i--)
    printf("%d",fac[n][i]);
    printf("\n");
}
int main()
{
    int c,n;
    init_fact();
    scanf("%d",&c);
    while(c--)
    {
    scanf("%d",&n);
    print(n);
    }
return 0;
}

