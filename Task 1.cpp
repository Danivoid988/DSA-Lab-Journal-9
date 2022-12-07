#include<iostream>
using namespace std;
void calculpower(float base, int exponent) {


	int result = 1;

	while (exponent!=0)
	{
		result = result * base;
		exponent--;

	}
	cout << "the power is  = to " << endl;
	cout << result<<endl;


}
void main() {

	int exponent;
	float base;
	cin >> base;
	cin >> exponent;

	calculpower(base, exponent);




	system("pause");
}
