#include<iostream>
#include<algorithm>
using namespace std;

int placeCows(long long int st[], int n, int dis){
	int prev = st[0];
	int i = 1, cows = 1;
	while(i<n){
		if(st[i]-prev>=dis){
			//can place cow here
			prev = st[i];
			cows++;
		}
		i++;
	}
	return cows;
}

int main(){
	int n=5,c=3;
	long long int st[n] = {1,2,8,4,9};
	sort(st, st+n);
	int lo = 1, hi = st[n-1], ans = -1;
	while(lo<=hi){
		int mid = (lo+hi)/2;

		// for 'mid' distance calc how many cows can you place
		int cows = placeCows(st, n, mid);
		if(cows>=c){
			//still increase my distance
			ans = max(ans,mid);
			lo = mid+1;
		}
		else{
			hi = mid-1;
		}
	}
	cout<<ans<<endl;
	return 0;
}