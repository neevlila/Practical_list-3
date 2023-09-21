#include<iostream>
using namespace std;
class employee
{
	private:
		string name;
		int em_no;
	public:
		void get_details()
		{
			cout<<"Enter Employee Name ::";
			getline(cin,name);
			cout<<"Enter The Employye Number ::";
			cin>>em_no;
		}
		void display_details()
		{
			cout<<"Employee Name is ::"<<name<<endl;
			cout<<"Employee Number is ::"<< em_no<<endl;
			
		}
};
int main()
{
	employee e;
	e.get_details();
	e.display_details();
	
	cout<<endl<<endl<<"Enrollment no.220130318021";
	
	return 0;
}
