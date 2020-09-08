#include <iostream>

using namespace std;

int main()
{

	cout << "Hello world" << endl << "Please enter values: "<< endl;
	int x = 0;
	float f = 0;
	double d = 0;
	char ch = 'A';
	bool b = true;
	cin >> x;// >> f >> d >> ch >> b;

	cout << x + 1 << endl
		<< x - 1 << endl
		<< x * 2 << endl
		<< x / 2. << endl
		<< (double) x / 2 << endl
		<< x % 2 << endl;
	x += 2;// x = x + 2;
	int a1 = x++;// x=x+1; // x+=1;
	x--;
	int a2 = ++x;
	--x;

	cout << (x >> 1) << endl; //111 -> 11
	cout << (x << 1) << endl; //111 << 1110

	return 0;
}