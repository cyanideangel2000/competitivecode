#include <iostream>
using namespace std;

template <class T>
void varun (T a)
{
	cout<<a<<endl;
}


template<int T = 1000>
void test()
{
	test<T-1>();
}

template<>
void test<0>()
{
	cout << "done" << endl;
}

int main()
{
	varun<int>(10);
	varun<char>('d');
	test();
}
