#include<iostream>

using namespace std;

int factorial(int x, int num ,int i) {
	if (x>=i) {
		num *= i;
		i++;
		factorial(x,num,i);
	}
	else
	{
		return num;
	}
}


void main() {
	int number;
	cin >> number;
	cout << factorial(number,1,1);
}
