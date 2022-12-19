// find max and min values

#include <iostream>
using namespace std;

int main()
{
  int A[] = {9, 0, 20, 50, 100};
  int max = A[0];
  int min = A[0];

  for (auto x : A)
  {
    if (x > max)
    {
      max = x;
    }
    if (x < min)
    {
      min = x;
    }
  }

  cout<<"max, min = : "<<max<<" "<<min;
}