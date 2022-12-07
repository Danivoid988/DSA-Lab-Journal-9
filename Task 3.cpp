#include<iostream>
using namespace std;
int n = 4;
class stack {
public:
	int* arr;
	int top;
	stack() {
		arr = new int[n];
		top = -1;
	}
	void push(int d) {
		if (top >= n) {
			cout << "the stack is full :" << endl;
		}
		top++;
		arr[top] = d;
	}
	int pop() {
		if (top == -1) {
			cout << "the stack is empty yet " << endl;
		}
		int x;
		x = arr[top];
		top--;
		return x;
	}


};
void main() {
	stack s1, s2, s3;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);

	s2.push(s1.pop());
	s3.push(s1.pop());
	s3.push(s2.pop());
	s2.push(s1.pop());

	s1.push(s3.pop());
	s2.push(s3.pop());
	s2.push(s1.pop());
	s3.push(s1.pop());
	s2.push(s1.pop());
	s3.push(s1.pop());
	s3.push(s2.pop());








	system("pause");
}
