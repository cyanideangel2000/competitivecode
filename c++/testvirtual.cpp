#include <iostream>
using namespace std;

class varun
{
	public:
		virtual void trying ()
		{
			cout<<"\nvarun trying\n";
		}
};

class varun1 : public varun
{
	public:
		void trying ()
		{
			cout<<"\nvarun1 trying"<<endl;
		}
};

int main(void)
{
	varun var;
	varun1 var1;
	varun *varp = NULL;

	var.trying();
	var1.trying();

	varp = &var;
	varp->trying();
	varp = &var1;
	varp->trying();

	int num = 19;
	cout << "dec= "<<dec<<num <<endl<<"oct= "<<oct<<num<<endl<<"hex= "<<hex<<num;
	printf("\n%d %o %x", num, num, num);
}
