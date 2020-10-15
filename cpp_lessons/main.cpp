#include <iostream>
#include <vector>
#include <fstream>
#include "Student.h"
#include "utils.h"

using namespace std;

bool IsScoreCorrect(double d)
{
	return d >= 2 && d <= 5;
}
Student LoadStudent(ifstream& fin)
{
	Student s;

	fin >> s.name;
	fin >> s.score;

	return s;
}
void SaveStudent(ofstream& fout, const Student& s)
{
	fout << s.name << endl << s.score << endl;
}
void EditStudent(Student& s)
{
	s.PassExam();
	/*s.score -= 0.2;
	s.score = IsScoreCorrect(s.score) ? s.score : 2;*/

}
void PrintMenu()
{
	cout << "1. Input student" << endl
		<< "2. Print student" << endl
		<< "3. Save to file" << endl
		<< "4. Load from file" << endl
		<< "5. Edit student" << endl
		<< "0. Exit" << endl
		<< "Choose action: ";
}


Student& SelectStudent(vector<Student>& g)
{
	cout << "Enter index: ";
	unsigned int index = GetCorrectNumber(1u, g.size());
	return g[index - 1];
}

int main()
{
	vector <Student> group;
	while (1)
	{
		PrintMenu();

		switch (GetCorrectNumber(0, 5))
		{
		case 1:
		{
			Student st;
			cin >> st;
			group.push_back(st);
			break;
		}
		case 2:
		{
			for (auto& st : group)
				cout << st << endl;
			break;
		}
		case 3:
		{
			ofstream fout;
			fout.open("data.txt", ios::out);
			if (fout.is_open())
			{
				fout << group.size() << endl;
				for (Student& st : group)
					SaveStudent(fout, st);
				fout.close();
			}
			break;
		}
		case 4:
		{
			ifstream fin;
			fin.open("data.txt", ios::in);
			if (fin.is_open())
			{
				int count;
				fin >> count;
				while (count--)
				{
					group.push_back(LoadStudent(fin));
				}
				fin.close();
			}
			break;
		}
		case 5:
		{
			EditStudent(SelectStudent(group));
			break;
		}
		case 0:
		{
			return 0;
		}
		default:
		{
			cout << "Wrong action" << endl;
		}
		}
	}
	return 0;
}