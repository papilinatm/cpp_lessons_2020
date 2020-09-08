#include <iostream>
#include <vector>

using namespace std;

void LearnTypes()
{
	cout << "Please enter values: " << endl;
	int x = 0;
	float f = 0;
	double d = 0;
	char ch = 'A';
	bool b = true;
	cin >> x >> f >> d >> ch >> b;

	cout << x + 1 << endl
		<< x - 1 << endl
		<< x * 2 << endl
		<< x / 2. << endl
		<< (double)x / 2 << endl
		<< x % 2 << endl;
	x += 2;// x = x + 2;
	int a1 = x++;// x=x+1; // x+=1;
	x--;
	int a2 = ++x;
	--x;

	cout << (x >> 1) << endl; //111 >> 11
	cout << (x << 1) << endl; //111 << 1110
}

void Hello()
{
	string s;
	cout << "Type your name, please: ";
	cin >> s;//string with spaces
	cout << "Hello " << s << endl;
}

struct Student
{
	string name;
	double score;
};
void LearnMass()
{
	int mass[5][2] = { };
	vector <int> v;
	size_t n = 0;
	cin >> n;
	v.resize(n);
}

void LearnStruct()
{
	vector <Student> group;
	size_t n = 0;
	cin >> n;
	group.resize(n);
	/*Student s = { "Ivan", 5 };
	group[0] = s;
	s.score -= 0.5;//why?!*/
	group[0] = { "Ivan", 5 };
	group[0].score -= 0.5;

}
int main()
{
	//Hello();
	//LearnTypes();
	//LearnMass();
	//LearnStruct();
	return 0;
}