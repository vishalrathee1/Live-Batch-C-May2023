#include<iostream>
using namespace std;

int updation(int a){ //call by value
	return ++a;
}

//int updation2(int); //declaration

int updation2(int&); //declaration


//inside parenthesis for passing arrays, we will write the half syntax of declaring array
void updationArray(int arr[], int n){
	//it will update all the values of array by 1
	
	for(int i =0; i<n; i++){
		++arr[i];
	}

	for(int i =0; i<n; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;

} // how to pass arrays in functions

int main(){
	int x = 10;
	//float a = 1.2;
	//float &b = a; //reference of a is b


	//cout<<updation(x)<<endl;
	//cout<<x<<endl; // change will not get reflected in x, because it is passed by value
	
	//if i want the cahnge to be reflected in my variable in main function
	
	x = updation(x);

	cout<<x<<endl;

	//call by reference ,a
	int &y = x;
	int &z = x;
	cout<<y<<endl; //the value of x will get printed
	y++; //this will increase value of y that is nothing but x --> 12
	cout<<x<<endl<<y<<endl;
	updation2(x);
	cout<<x<<endl;

	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(int);
	// to pass arrays into function while calling , just simply type their name inside parenthesis
	updationArray(arr, n); // --> function call
	for(int i =0; i<n; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;


	return 0;

}


int updation2(int &a){ //call by reference
	return ++a;
}
