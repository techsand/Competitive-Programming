#include<stdio.h>

int main()
{
	int x;
	float y;
	scanf("%d %f",&x,&y);
	if(!(x%5) && ((y-0.5-x)>=0))
		printf("%.2lf\n",y-0.5-x);
	else 
		printf("%.2lf\n",y);	
	return 0;
}