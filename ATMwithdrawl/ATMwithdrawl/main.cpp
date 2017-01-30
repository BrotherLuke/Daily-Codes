#include <iostream>
using namespace std;
int main() {

	int wda;
	cout << "How much money would you like to withdrawl?" << endl;
	cin >> wda ;
	cout << "Your balance is " << 1000 - wda << endl;
}