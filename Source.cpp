#include<iostream>

using namespace std;

int factorial(int x, int cum ,int i) {
	if (x>=i) {
		cum *= i;
		i++;
		factorial(x,cum,i);
	}
	else
	{
		return cum;
	}
}


void main() {
	int number;
	cin >> number;
	cout << factorial(number,1,1);
}