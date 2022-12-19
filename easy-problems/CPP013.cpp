// linear serach

#include <iostream>
using namespace std;

int main()
{
  int A[10], n = 10, key;

  cout << "Enter numbers ";
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  cout << "search key ";
  cin >> key;

  for (int i = 0; i < n; i++)
  {
    if (key == A[i])
    {
      cout << "key found at: " << i;
      return 0;
    }
  }
  cout << "Key not found";
}
