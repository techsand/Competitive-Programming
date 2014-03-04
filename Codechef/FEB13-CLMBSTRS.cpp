#include <string.h>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

//vector<vector<long long> > vector<vector<long long> >;
const int mod = 1000000007;
 
vector<vector<long long> > mul(const vector<vector<long long> > &a, const vector<vector<long long> > &b) 
{
  vector<vector<long long> > ret;
	for(int i=0;i<a.size();i++)
		ret.push_back(vector<long long>(b[0].size(),0));

  for(int i=0;i<a.size();i++)
  	 for(int j=0;j<b[i].size();j++)
  	 {
  	 	ret[i][j]=0;
  	      for(int k=0;k<a[i].size();k++) 
  	      	ret[i][j] = (ret[i][j] + a[i][k] * b[k][j]) % mod;
  	      	}
  return ret;
}
int count_set(int n)
{
    int temp=n;
    int count=0;
    while(temp)
    {
        if(temp&1)
            count++;
        temp=temp>>1;
    }
    return count;
}
 
vector<vector<long long> > power(const vector<vector<long long> > &a, int p) {
  if ( p == 1 ) return a;

  vector<vector<long long> > x = power(a,p/2);

  if ( p % 2 == 1 ) 
  	return mul(a,mul(x,x));

  return mul(x,x);
}
 
int main()
{
	int t,n,g;
    scanf("%d",&t);
  vector<vector<long long> > a, b;
	a.push_back(vector<long long>());
	b.push_back(vector<long long>());
	b.push_back(vector<long long>());
	a[0].push_back(0);
	a[0].push_back(1);	

	b[0].push_back(0);
	b[0].push_back(1);
	
	for (int i = 0; i < 2; i += 1)
	{
		b[1].push_back(1);
	}
	
 
	  while(t--){
        	scanf("%d%d",&n,&g);

        	printf("%s\n",g==(n == 0 ? 0 : count_set( (mul(a,power(b,n))[0][1])% mod ))?"CORRECT":"INCORRECT");
    		}	

 
  return 0;
  
}