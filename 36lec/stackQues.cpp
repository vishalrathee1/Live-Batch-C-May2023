#include<iostream>
#include<stack>
using namespace std;

int length(string ptrn){
	int i = 0;
	while(ptrn[i]!='\0'){
		i++;
	}
	return i;
}

bool isValid(string ptrn){
	stack<char> st;
	int len = length(ptrn);
	for(int i =0; i<len; i++){
		if(ptrn[i] == '(' || ptrn[i] == '{' || ptrn[i] == '['){
			st.push(ptrn[i]);
		}
		else if(ptrn[i] == ')' and st.top()=='('){
			st.pop();
			continue; // string is valid
		}
		else if(ptrn[i]=='}' and st.top() == '{'){
			st.pop();
			continue;
		}
		else if(ptrn[i] == ']' and st.top() == '['){
			st.pop();
			continue;
		}
		else{
			return false;
		}
	}

	return st.empty();
}

void insertAtBottom(stack<int> &st, int t){
	//base case
	if(st.empty()){
		st.push(t);
		return;
	}

	//rec case
	int t2 = st.top();
	st.pop();
	insertAtBottom(st, t);
	st.push(t2);

}

void reverseStack(stack<int> &st){
	//base case
	if(st.empty()) return;

	//recursive case
	int t = st.top(); // insert this element at bottom and reverse the rest of the stack
	st.pop();
	reverseStack(st);
	insertAtBottom(st, t);
}

void printStack(stack<int> st){
	while(!st.empty()){
		cout<<st.top()<<'\t';
		st.pop();
	}
	cout<<endl;
}

//largest rectangle histogram left ext
// stack<int> st;
// st.push(0);
// for(int i =1; i<n; i++){
// 	while(!st.empty() and arr[st.top()]>=arr[i]){
// 		l_e[i] = l_e[st.top()];
// 		st.pop();
// 	}
// 	if(st.empty()){
// 		l_e[i] = 0;
// 	}
// 	st.push(i);
// }

int main(){
	// string ptrn = "(((())))";
	// if(isValid(ptrn)){
	// 	cout<<"Pattern is Valid"<<endl;
	// }
	// else{
	// 	cout<<"Pattern is not valid"<<endl;
	// }

	// stack reverse;
	stack<int> st;
	st.push(1);st.push(2);st.push(3);st.push(4);
	printStack(st);
	reverseStack(st);
	printStack(st);
	return 0;
}