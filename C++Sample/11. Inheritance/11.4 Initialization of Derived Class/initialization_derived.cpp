#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	string name;
	unsigned age;
	Person(string n_name="", unsigned n_age=0) : name(n_name), age(n_age) {}
};

class Student : public Person
{
public:
	string id;
	double GPA;
	Student(string n_name, unsigned n_age, string n_id="", double n_GPA=0.0) 
		: Person(n_name, n_age), id(n_id), GPA(n_GPA) {}
	friend ostream& operator<< (ostream& out, Student &student) {
		out << student.name << " / " << student.age << " / " << student.id << " / " << student.GPA;
		return out;
	}
};

int
main(int argc, char *argv[])
{
	Student mppecs("Brian, Song", 27, "2009004032", 4.5);
	cout << mppecs << "\n";
	// "Brian / 27 / 2009004032 / 4.5"

	return 0;
}