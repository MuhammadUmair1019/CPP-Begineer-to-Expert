// Binary search
// In binary serach the array must be in sorted order

#include <iostream>
using namespace std;

int main()
{
  int A[10] = {10, 20, 30, 40, 45, 50, 55, 70, 80, 90};
  int key, mid, l = 0, h = 9;

  cout << "Search key ";
  cin >> key;

  mid = (l + h) / 2;

  while (l <= h)
  {
    if (key == A[mid])
    {
      cout << "Key found at" << mid;
      return 0;
    }
    else if (key < A[mid])
    {
      h = mid - 1;
    }
    else
    {
      l = mid + 1;
    }
  }

  cout << "Key not found";
}
