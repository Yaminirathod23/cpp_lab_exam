/*
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively
 by creating a class named 'Rectangle' with a function named 'Area' which returns the area. 
 Length 
*/
#include<iostream>
using namespace std;

class Rectangle{
	
	private:
		int length,bredth;
		int area;
	public:
		
		void Area(int l,int b)
		{
			length=l;
			bredth=b;
			area=length*bredth;
			cout<<"\n Area of Rectangle is: "<<area;
		}
};
main()
{
	Rectangle r;
	r.Area(4,5);
	r.Area(5,8);
}