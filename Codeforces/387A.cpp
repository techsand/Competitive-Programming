#include<stdio.h>
using namespace std;
int main(){
	int h1,h2,m1,m2;
	scanf("%d:%d",&h1,&m1);
	scanf("%d:%d",&h2,&m2);

	int rh=h1-h2;
	int rm=m1-m2;

	printf("@@@@  %d\n",rm);

	if(rm<0){
		rm+=60;
		rh--;
	}

	if(rh<0)
		rh+=24;


	if(rh<10){
		printf("0%d:",rh);
	}
	else 
		printf("%d:",rh);


	if(rm<10){
		printf("0%d\n",rm);
	}
	else 
		printf("%d\n",rm);

}
