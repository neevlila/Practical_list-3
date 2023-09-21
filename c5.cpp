#include<iostream>
using namespace std;
class Distance
{
	private:
		float feet,inches;
	public:
		void get_details()
		{
			cout<<"Enter The feet ::";
			cin>>feet;
			cout<<"Enter The inches ::";
			cin>>inches;
		}
		void display_details()
		{
			cout<<"Display the feet and inches are::"<<feet<<" Feet "<<inches<<" Inches";
		}
};
int main()
{
	Distance d;
	d.get_details();
	d.display_details();
	
	cout<<endl<<endl<<"Enrollment no.220130318021 ";
	
	return 0;
}
