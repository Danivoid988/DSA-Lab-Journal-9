#include<iostream>
using namespace std;

void count(int number ,int count1)
{
	if (number > 0) {
		number = number / 10;
		count1++;
		count( number, count1);
		return;
	}
	cout << "the total digit in this number is = " << count1<<endl;
}
void main(){
	int number =7865;
	int count1=0;

	count(number, count1);








	system("pause");
}
