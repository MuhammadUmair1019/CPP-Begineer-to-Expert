// Check the year is leap year or not

#include <iostream>
using namespace std;

int main()
{

  int year;

  cout << "Enter a year " << endl;
  cin >> year;

  if (year % 4 == 0)
  {
    if (year % 100 == 0)
    {
      if (year % 400 == 0)
      {
        cout << year << ": leap year";
      }
      else
      {
        cout << "Not a leap year";
      }
    }
    else
    {
      cout << year << ": leap year";
    }
  }
  else
  {
    cout << "Not a leap year";
  }
}