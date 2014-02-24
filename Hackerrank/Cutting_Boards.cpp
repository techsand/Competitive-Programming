#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
vector<long long> y,x;
bool comp(long long x,long long y)
{
	return x>y;
}
long long getMinCost(long long M,long long N)
{
	sort(y.begin(),y.end(),comp);
	sort(x.begin(),x.end(),comp);
	long long ans = 0;
	int a = 0,b = 0,h = 1,v =1;
	for(int j = 0;j<M+N-2;j++)
	{
		if(a>=M-1)
		{
			ans+=x[b]*v % 1000000007;
			b++;
			h++;
		}
		else if(b>=N-1)
		{
			ans+=y[a]*h % 1000000007;
			a++;
			v++;
		}
		else if(y[a] >= x[b])
		{
			ans += y[a]*h % 1000000007;
			a++;
			v++;
		}
		else
		{
			ans += x[b]*v % 1000000007;
			b++;
			h++;
		}
	}
	return ans%1000000007;
}

int main()
{
	int t;
	long long M,N;
	scanf("%d",&t);
	while(t--)
	{
		x.clear();
		y.clear();
		scanf("%lld %lld",&M,&N);
		x.resize(N-1);
		y.resize(M-1);
		for(int i = 0;i<M-1;i++)
			scanf("%lld",&y[i]);
		for(int i = 0;i<N-1;i++)
			scanf("%lld",&x[i]);
		long long res= getMinCost(M,N);
		printf("%lld\n",res);
	}
	return 0;
}
