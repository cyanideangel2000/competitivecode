#include <iostream>
#include <vector>

using namespace std;

void func (vector<int>::const_iterator var1)
{
	//do nothing
}

int main()
{
	vector<int> varun;
	vector<int>::iterator var;
	vector<int>::const_iterator var1;

	for (int i=0; i<10; i++) varun.push_back(i);

	var = varun.begin();
	var1 = varun.begin();

	func(var);
	func(var1);

}
