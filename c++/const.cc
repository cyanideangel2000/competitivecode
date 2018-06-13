#include <iostream>
using namespace std;


class varun
{
	public:
		int v1;

	varun (int v1) {this->v1 = v1;};
};

varun& try1 (void)
{
	varun v(10);
	return v;
}

int main()
{
	const varun& t1 = try1();
	cout<<t1.v1<<endl;
}
