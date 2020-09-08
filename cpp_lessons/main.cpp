#include <iostream>
#include <vector>
#include <fstream>
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
Student InputStudent()
{
	Student s;
	cout << "Type name:";
	cin >> s.name;
	cout << "Type score:";
	cin >> s.score;
	return s;
}
void PrintStudent(const Student& s)
{
	cout << "Name: " << s.name
		<< "\tScore: " << s.score << endl;
}
Student LoadStudent()
{
	ifstream fin;
	fin.open("data.txt", ios::in);
	Student s;
	fin >> s.name;
	fin >> s.score;
	fin.close();
	return s;
}
void SaveStudent(const Student& s)
{
	ofstream fout;
	fout.open("data.txt", ios::out);
	fout << s.name << endl << s.score << endl;
	fout.close();
}
void EditStudent(Student& s)
{
	s.score -= 0.2;
}
int main()
{
	//Hello();
	//LearnTypes();
	//LearnMass();
	//LearnStruct();
	Student st = InputStudent();
	PrintStudent(st);
	EditStudent(st);
	SaveStudent(st);
	return 0;
}