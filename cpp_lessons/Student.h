#pragma once
#include <iostream>
#include <string>

class Student
{
	int id;
public:
	static int MaxID;
	std::string name;
	double score;

	Student();
	//Student(std::string name);
	//Student(const Student& s);
	//Student(Student&& s);
	//~Student();

	//std::string GetName() const;
	//void SetName(std::string);
	void PassExam();

	friend std::ostream& operator << (std::ostream& out, const Student& s);
	friend std::istream& operator >> (std::istream& in, Student& s);
};

