#include <iostream>
using namespace std;

int main(){
	int arr[] = {13,3,6,11,7,4,9,2};

	int size = sizeof(arr)/sizeof(int);

	//selection sort algorithm
	for(int i = 0; i< size-1; i++)  //size -1 because if we select n-1 smallest elements from n elements , nth element will be automatically largest
	{
		int mini = i; //stores the index of minimum element encountered in the whole array
		for(int j = i; j<size; j++)  // for finding the smallest element in array
		{
			if(arr[j]<arr[mini]){
				mini = j;
			}
		}
		//swapping values stored in arr[i] and arr[mini]
		//int temp = arr[i];  //temp = a (arr[i])
		//arr[i] = arr[mini];  // a = b (arr[mini])
		//arr[mini] =temp;   // b(arr[mini]) = temp
		//b = a + b - (a = b);  // a == arr[i], b == arr[mini]
		arr[mini] = arr[mini] + arr[i] - (arr[i] = arr[mini]); //swap using 1 line
	}

	for(int i =0; i<size ; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;

	return 0;
}
