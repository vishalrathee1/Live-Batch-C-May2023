#include<iostream>
using namespace std;

//syntax for making a class
// class classname {
	
// };

class Student{
// public:
	string name;
	string mobNo;
// private:  // you cannot access them outside this scope
	float marks;

	//constructor
	// Student(){
	// 	// cout<<"Hello"<<endl;
	// }
	//constructor
public:
	Student(string nm, string mb, float mrks){
		name = nm;
		mobNo = mb;
		marks = mrks; 

	}

	void printDetails(){
		cout<<name<<endl<<mobNo<<endl<<marks<<endl;
	}

	void updateName(string str){
		name = str;
	}

	//Destructor
	// ~Student(){} it is used to free the memory
};

int main(){
	//OOPs -> Object Oriented Programming paradigms

	// Student st1; //st1 --> is object
	// st1.name = "arun";
	// st1.mobNo = "45436647";
	// st1.marks = 89.95;

	//initialization syntax with construcotr

	Student st1("arun", "3467567", 89.0);

	// cout<<st1.name<<'\t'<<st1.mobNo<<'\t'<<st1.marks<<endl;

	st1.printDetails();

	st1.updateName("Keshav");

	st1.printDetails();

	return 0;
}