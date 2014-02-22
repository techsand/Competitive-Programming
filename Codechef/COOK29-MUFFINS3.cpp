#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t;
	long long n;
	for(scanf("%d",&t);t--;)
	{
		scanf("%llu",&n);
		printf("%llu\n",n?(1llu+(n/(2llu))):0);
	}
}
