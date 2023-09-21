#include<iostream>
using namespace std;
class account
{
	public:
		float acc_no;
		float balance;
		string branch_code;
		void get_details();
		void display_details();
};
int main()
{
	account N;
	
	cout<<"Enter The Account Number ::";
	cin>>N.acc_no;
	cout<<"Enter The Branch Code ::";
	cin>>N.branch_code;
	cout<<"Enter The Balance ::";
	cin>>N.balance;
	
	cout<<endl<<"The Account Number is ::"<<N.acc_no<<endl;
	cout<<"The Brach Code is ::"<<N.branch_code<<endl;
	cout<<"The Balance Of This Account is ::"<<N.balance<<endl<<endl;
	
	cout<<"Enrollment no.220130318021";
	
	return 0;
}
