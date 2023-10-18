#include "Student.h"
#include "utils.h"
using namespace std;

int Student::MaxID = 0;

Student::Student()
{
	//cout << "Student::Student()" << endl;
	id = MaxID++;
	score = 5 - id;
	name = "Unknown";
}

//Student::Student(std::string name)
//{
//	//name = name;
//}
//
//Student::Student(const Student& s)
//{
//	cout << "Student::Student(const Student& s)" << endl;
//	name = s.name;
//	score = s.score;
//}
//Student::Student(Student&& s)
//{
//	cout << "Student::Student(const Student&& s)" << endl;
//}
//
//Student::~Student()
//{
//	cout << "Student::~Student()" << endl;
//}

//std::string Student::GetName() const
//{
//	return name;
//}
//
//void Student::SetName(std::string new_name)
//{
//	name = new_name;
//}
void Student::PassExam()
{
	score += rand() % 2 ? -0.1 : 0.1;
}

ostream& operator << (ostream& out, const Student& s)
{
	PRINT_PARAM(cout, s.id);
	PRINT_PARAM(cout, s.name);
	PRINT_PARAM(cout, s.score);
	//out << "MaxID: " << Student::MaxID
	//	<< " Id: " << s.id
	//	<< " Name: " << s.name
	//	<< "\tScore: " << s.score << endl;
	return out;
}
istream& operator >> (istream& in, Student& s)
{
	cout << "Type name: ";
	INPUT_LINE(in, s.name);
	cout << "Type score: ";
	s.score = GetCorrectNumber(2.0, 5.0);
	return in;
}

