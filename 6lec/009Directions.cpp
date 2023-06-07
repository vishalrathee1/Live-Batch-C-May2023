#include <iostream>
using namespace std;

int main(){
	//x and y coordinates
	int x=0,y=0;
	//directions input
	char ch;
	ch = cin.get();
	while(ch!=' ' && ch!='\n'){
		if(ch == 'N')
			//moving up, +ive y axis
			y++;
		else if(ch == 'S')
			//moving downwards, -ive y axis
			y--;
		else if(ch == 'E')
			//moving rightwards
			x++;
		else
			//moving leftwards
			x--;
		ch = cin.get();
	}
	cout<<endl;
	//now we have final positions of x and y
	if(x>=0 && y>=0){
		//means first quadrant
		//means only two directions will be needed for minimum directions to final position
		//and they are north and east
		//so we have to print east first
		for(int i =0; i<x; i++){
			cout<<'E';
		}
		//printing north 
		for(int i =0; i<y; i++){
			cout<<'N';
		}
	}
	else if(x<=0 && y>=0){
		//second quadrant
		//two directions --> west and North so we have to print North first
		for(int i =0; i<y; i++){
			cout<<'N';
		}
		x= x*(-1);
		x= abs(x);
		for(int i =0; i<x; i++){
			cout<<'W';
		}
	}
	else if(x<=0 and y<=0){
		//third quadrant
		//two directions --> west and south so we have to rprint south first
		y = -1*y;
		for(int i =0; i<y; i++){
			cout<<'S';
		}
		x = -1*x;
		for(int i =0; i<x; i++){
			cout<<'W';
		}
	}
	else{
		//fourth quadrant 
		//two directions east and south so print east first
		for(int i =0; i<x; i++){
			cout<<'E';
		}
		y = -1*y;
		for(int i =0; i<y; i++){
			cout<<'S';
		}
	}
	cout<<endl;

	return 0;
}
