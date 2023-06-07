#include <iostream>
using namespace std;

int main(){
	int ctch=0,ctwr =0,ctli = 0;
	char ch;
	ch = cin.get();
	while(ch!='$'){
		ctch++;
		if(ch == ' ' || ch == '\n')
			ctwr++;
		if(ch == '\n')
			ctli++;
		ch = cin.get();
	}
	ctli++;
	cout<<"No. of Char are "<<ctch<<endl<<"No. of Words are "<<ctwr<<endl<<"No. of Lines are "<<ctli<<endl;
	return 0;
}
