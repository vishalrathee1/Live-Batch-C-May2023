#include<iostream>
#include<vector>
using namespace std;


//implementing stacks using vectors
//templates

template <typename U>
class stack{
	vector<U> v; //char
public:
	//push()
	void push(U val){ //char val
		v.push_back(val);
	}

	//pop()
	void pop(){
		v.pop_back();
	}

	//top()
	U top(){ //char
		return v[v.size()-1];
	}

	//size()
	int size(){
		return v.size();
	}


	//empty()
	bool empty(){
		// if(v.size()==0) return true;
		// return false;
		return v.size()==0;
	}
};

int main(){
	// stack s;
	// stack<char> s;
	// vector<vector<vector<int>>> v1;
	stack<int> s;
	s.push(1);s.push(2);s.push(3);s.push(4);
	// s.push('A');s.push('B');s.push('C');s.push('D');
	cout<<s.top()<<endl;//4
	s.pop();
	cout<<s.top()<<endl;//3
	cout<<s.size()<<endl;//3
	cout<<s.empty()<<endl; //0

	while(!s.empty()){
		cout<<s.top()<<'\t';
		s.pop();
	}
	cout<<endl;

	// cout<<s.v[0]<<endl;

	return 0;
}