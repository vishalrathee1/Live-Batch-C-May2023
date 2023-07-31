#include<iostream>
using namespace std;

bool canGet(int n, int m, int x, int y, int mid){
	// m + (n-mid)*y - x*mid >=0
	return (m + (n-mid)*y - x*mid) >=0;
}

int main(){
	int n=5,m=10,x=2,y=1;
	// cin>>n>>m>>x>>y;
	int lo = 1, hi =n, ans = -1;
	while(lo<=hi){
		int mid = (lo+hi)/2;
		bool check = canGet(n,m,x,y,mid);
		if(check){
			ans = mid;
			lo = mid+1;
		}
		else{
			hi = mid-1;
		}
	}
	cout<<ans<<endl;
}