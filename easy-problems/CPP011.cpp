// Sum of array elements

#include <iostream>
using namespace std;

int main()
{
  int sum = 0;
  // take array of 5 elements
  int A[5] = {2, 4, 6, 8, 10};
  // take length of array based upon assign values
  // int A[] = {2, 4, 6, 8, 10};

  // first method
  // for (int i = 0; i < 5; i++)
  // {
  //   sum += A[i];
  // }

  // second method
  for (auto x : A)
  {
    sum += x;
  }

  cout << "The sum of an array: " << sum;
}