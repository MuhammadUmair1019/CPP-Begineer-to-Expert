// Reversing a number

#include <iostream>
using namespace std;

int main()
{
  int i, n, r, rev = 0;

  cout << "Enter numbers";
  cin >> n;

  while (n > 0)
  {
    r = n % 10;
    n = n / 10;
    rev = rev * 10 + r;
  }

  cout << rev;
}