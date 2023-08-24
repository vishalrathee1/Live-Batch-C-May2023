#include<iostream>
#include<queue>
using namespace std;

template <typename T>
class stack{
	queue<T> q1;
	queue<T> q2;

	//push
public:
	void push(T data){
		if(q1.empty() and q2.empty()){
			q1.push(data);
		}
		else if(q1.empty() and !q2.empty()){
			q2.push(data);
		}
		else{
			q1.push(data);
		}
	}


	//pop
	void pop(){
		if(q1.empty() and q2.empty()){
			//stack is empty
		}
		else if(q1.empty() and !q2.empty()){
			//transfer n-1 elements to q1
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			q2.pop();
		}
		else{
			//transfer n-1 elements to q2
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop();
		}
	}


	//top
	T top(){
		if(q1.empty() and !q2.empty()){
			//transfer n-1 elements to q1
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			int ans = q2.front();
			q1.push(ans);
			q2.pop();
			return ans;
		}
		else{
			//transfer n-1 elements to q2
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();
			}
			int ans = q1.front();
			q2.push(ans);
			q1.pop();
			return ans;
		}
	}


	//size
	int size(){
		return max(q1.size(), q2.size());
	}


	//empty
	bool empty(){
		return (q1.empty() & q2.empty());
	}
};

int main(){

	stack<int> st; //int 
	st.push(1);st.push(2);st.push(3);st.push(4);

	cout<<st.top()<<'\t'; //4
	st.pop();
	cout<<st.top()<<'\t'; //3
	cout<<endl;
	return 0;
}