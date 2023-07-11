#include<iostream>
using namespace std;

// send 'n' rings to destination 'dest' from source 'src' using helper 'help'
void towOfHanoi(int n, char src, char help, char dest){
	//base case
	if(n==0) return ;

	//rec case
	// move n-1 rings to helper rod using destination rod
	towOfHanoi(n-1, src, dest, help);
	// move last ring to destination
	cout<<"Move "<<n<<" ring to "<<dest<<endl;
	towOfHanoi(n-1, help, src, dest);

}

int main(){
	int n= 4; //no of rings
	char src = 'A', help = 'B', dest = 'C';
	towOfHanoi(n, src, help, dest);
	return 0;
}