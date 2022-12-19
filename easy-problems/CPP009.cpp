// check number is amstrong
// The sum of the cubes of each digit equals the actual number.

#include <iostream>
using namespace std;

int main()
{
  int i, n, m, r, sum = 0;

  cout << "Enter numbers";
  cin >> n;
  m = n;

  while (n > 0)
  {
    r = n % 10; // get the last digit
    n = n / 10; // remove the last digitl
    sum += r * r * r;
  }

  if (sum == m)
  {
    cout << "Amstrong";
  }
  else
  {
    cout << "Not Amstrong";
  }
}