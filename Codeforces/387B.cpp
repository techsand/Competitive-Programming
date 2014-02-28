#include<stdio.h>
#include <algorithm> 
using namespace std;
int main(){
	int m,n;
	int a[3005],b[3005];
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);

	sort(a,a+n);
	sort(b,b+m);

	int mid,x;	

	int j=-1;
	int f=n;
	for(int i=0;i<n;i++){
		
		int l=++j,r=m-1;
	        int mid=(l+r)/2;
			x=a[i];

	        while(l+1!=r && r<(m-1) && l<(m-1)){ 
	        //l+1==r => x[l]<x and x[r]>=x and l<r
			if(b[mid]<x)
			    l=mid;    
			else
			    r=mid;
			mid=(l+r)/2;
		    }
		    
		    printf("-------->%d\n",r);
	
               if(r>m)
        		break;
        		
        	if(b[r]!=x){
        	
				if(b[r]>x){
					//printf("did this \n");
					f--;
					j=r;
				}
				else
				 j=r;
				 
			}
		    else{
			f--;
			j=r;
				}
	}
	printf("%d\n",f);
	return 0;
}
