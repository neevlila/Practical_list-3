#include<iostream>
using namespace std;
class maximum
{
    int num_1,num_2;
   	int largest()
   	{
 		if(num_1>num_2)
 		{
 			return num_1;
		}
		else
		{
			return num_2;
		}
	}
	public:
    void getdata()
	{
		cout<<"Enter The Number Num 1 :: ";
      	cin>>num_1;
      	cout<<"Enter The Number Num 2 :: ";
      	cin>>num_2;
   	}
      
	void putdata()
	{
      	int maximum=largest();
      	cout<<"Maximum number is :: "<<maximum<<endl;
   	}
};
int main()
{
    maximum m;
    m.getdata();
    m.putdata();
      
	cout<<endl<<"Enrollment no.220130318021";    
      
    return 0;
}
