#include <iostream>
#include <string>

using namespace std;

class Student
{
	string Fname;
	string Lname;
	int Age;
	int group;
public:
		void PrintGroup()
		{
			cout << "Group: " << endl;
			cin >> group;
			cout << "\nWelcome " << PrintName() << " from " << group << " group\n\tYour graduation age: " << Grad() << endl;
		}

		string PrintName()
		{
			cout << "First and Last Name: " << endl;
			cin >> Fname >> Lname;
			string Name = Fname +" "+ Lname;
			return Name;
		}
		
		int Grad()
		{
			cout << "Age: " << endl;
			cin >> Age;
			int Gr = Age + 4;
			return Gr;
		}
}Stud1,Stud2;
void main()
{
	Stud1.PrintGroup();
}