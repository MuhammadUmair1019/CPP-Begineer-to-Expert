// display digits of a number in reverse

#include <iostream>
using namespace std;

int main()
{

  int i, n, r;

  cout << "Enter a numbers ";
  cin >> n;

  while (n > 0)
  {
    /* code */
    r = n % 10; // get last digit
    n = n / 10; // remove last digit
    cout << r << endl;
  }

  return 0;
}
