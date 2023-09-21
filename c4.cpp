#include<iostream>
using namespace std;
class Room
{
   private:
    double length;
    double breadth;
    double height;
	public:

    void initData(double len, double brth, double hgt)
	{
	    length = len;
	    breadth = brth;
	    height = hgt;
    }
	double calculateArea()
	{
	    return length * breadth;
    }
    double calculateVolume()
	{
        return length * breadth * height;
    }
};
int main()
{
    Room room1;

    room1.initData(17.9,40.5,32.7);

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

	cout << "Enrollment no.22130318021";

    return 0;
}
