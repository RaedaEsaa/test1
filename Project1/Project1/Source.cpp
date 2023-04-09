#include<iostream>
using namespace std;

double add(int x, int y);
double sub(int x, int y);
double mul(int x, int y);
double div1(int x, int y);
int main()
{
	int x, y;
	cout << "Enter two value number: \n";
	cin >> x >> y;
	// ************************** //
	cout << "sum = " << add(x, y) << endl;
	cout << "sub = " << sub(x, y) << endl;
	cout << "mul = " << mul(x, y) << endl;
	cout << "div = " << div1(x, y) << endl;

	system("pause");
	return 0;
}