/*
Write a C++ program to create a class Student with data members Roll_No, Student_Name, Class. 
Write member functions to accept and display Student information also display count of students. 
(Use Static data member and Static member function)
*/
#include<iostream>
using namespace std;

class Student
{
	
	private:
		int roll_no;
		string name;
	
	public:
		static int count;
	
		void get(int roll_no,string name)
		{
			count++;
			this->roll_no=roll_no;
			this->name=name;
				
		}
		void display()
		{
			cout<<"\n Student Name: "<<name;
			cout<<"\n Student Roll_no: "<<roll_no;
		}
	static void total()
		{
			
			cout<<"\n Count of students:"<<count;
		}
};
  int Student::count=0;
main()
{
	Student s1,s2,s3;
	s1.get(1,"yamini");
	s2.get(2,"priya");
	s3.get(3,"riya");
	s1.display();
	s2.display();
	s3.display();

    Student::total();
	
}