#include <iostream>

template <typename T>
T Squared(T x)
{
  return Multiply(x, x);
}

int Multiply(int x, int y)
{
  return x * y;
}

int main() {
  cout<<Squared(5)<<std::endl;
}
