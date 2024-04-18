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


int main() {
	
	int number;
	do
	{	cin >> number;
			
		if (number == 0)  return 0;
		else cout << factorial(number, 1, 1);
		
	} while (true);
	
}
