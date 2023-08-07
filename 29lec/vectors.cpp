#include<iostream>
#include<algorithm>
#include<vector> //--> standard template library for vectors
// #include<bits/stdc++.h> //master standard template library 
using namespace std;


int main(){
	//vectors are resizeable arrays

	// int arr[5];
	//syntax

	// vector<dataType> vectorName;
	
	// vector<string> strv;
	vector<int> v;

	//push_back() function
	//it allows to append values at the end of the vector
	// vectorName.push_back(data);
	v.push_back(5);

	//7
	v.push_back(17);
	v.push_back(9);
	v.push_back(3);

	//.size() --> tells size of vector --> number of elements present
	cout<<v.size()<<endl;//4

	//capacity --> how many elements in total, we can insert into vector
	cout<<v.capacity()<<endl;

	v.push_back(15);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;

	//2 syntaxes for accessing elements of vector
	//syntax-->1 same as arrays
	for(int i =0; i<v.size(); i++){
		cout<<v[i]<<'\t';
	}
	cout<<endl;

	//pop_back() func --> removes last elemtn

	v.pop_back();
	for(int i =0; i<v.size(); i++){
		cout<<v[i]<<'\t';
	}
	cout<<endl;

	//.begin() --> gives starting address of vector

	//.end() --> gives address of just next bucket of last element

	//second syntax for accessing elements
	cout<<*(v.begin())<<endl;
	cout<<*(v.end()-1)<<endl;


	for(auto it = v.begin(); it!= v.end(); it++){
		cout<<*it<<'\t';
	}
	cout<<endl;
	// auto ch = 'A';
	// cout<<ch<<endl;

	cout<<v.max_size()<<endl;// gives what is the max size of a vector you can make

	//sorting function inbuilt
	//syntax
	//sort(starting address, ending address+1);
	sort(v.begin(),v.end());

	for(auto it = v.begin(); it!= v.end(); it++){
		cout<<*it<<'\t';
	}
	cout<<endl;

	//array sort using inbuilt sort
	int arr[] = {5,1,15,4,13};
	int n = sizeof(arr)/sizeof(int);
	sort(arr,arr+n);
	for(int i =0; i<n; i++){
		cout<<arr[i]<<'\t';
	} 
	cout<<endl;

	return 0;
}