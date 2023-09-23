#include<iostream>
using namespace std;
class max
{
	private:
		int a,b,c;
	public:
		void get_details()
		{	
			cout<<"Enter The A ::";
			cin>>a;
			cout<<"Enter The B ::";
			cin>>b;
			cout<<"Enter The C ::";
			cin>>c;
		}
		void display_details()
		{
			if(a>b && a>c)
			{
				cout<<"A is Maximum ";
			}
			else 
			{
				if(b>c)
				{
					cout<<"B is Maximum";
				}
				else
				{
					cout<<"C is Maximum";
				}
			}
		}
}m;
int main()
{
	m.get_details();		
	m.display_details();

  cout<<endl<<"Enrollment no.220130318021";
  
  return 0;
}
