// Pattrens

// 1-
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

#include <iostream>
using namespace std;

int main()
{
  int count = 1;

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << count << " ";
      count++;
    }
    cout << endl;
  }
}

// 2-
// *
// * *
// * * *
// * * * *
#include <iostream>
using namespace std;

int main()
{
  int count = 1;

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (i >= j)
      {
        cout << "* ";
      }
    }
    cout << endl;
  }
}

// 3-
// ****
//  ***
//   **
//    *
#include <iostream>
using namespace std;

int main()
{
  int count = 1;

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (i > j)
      {
        cout << " ";
      }
      else
      {
        cout << "*";
      }
    }
    cout << endl;
  }
}

// 4-
#include <iostream>
using namespace std;

int main()
{
  int count = 1;

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (i > j)
      {
        cout << " ";
      }
      else
      {
        cout << "*";
      }
    }
    cout << endl;
  }
}

// Example 1: Program to Print a Half-Pyramid Using *

// Output
// *
// * *
// * * *
// * * * *
// * * * * *

#include <iostream>
using namespace std;

int main()
{

  int rows;

  cout << "Enter number of rows: ";
  cin >> rows;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
}

// Example 2: Program to Print a Half-Pyramid Using Numbers
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main()
{

  int rows;

  cout << "Enter number of rows: ";
  cin >> rows;

  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << "\n";
  }
}

// Example 3: Program to Print Half-Pyramid Using Alphabets
// A
// B B
// C C C
// D D D D
// E E E E E

#include <iostream>
using namespace std;

int main()
{

  int rows;

  char input, alphabet = 'A';

  cout << "Enter the uppercase character you want to print in the last row: ";
  cin >> input;

  // convert input character to uppercase
  input = toupper(input);

  for (int i = 1; i <= (input - 'A' + 1); i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << alphabet << " ";
    }
    ++alphabet;

    cout << "\n";
  }
}

// Example 4: Inverted Half-Pyramid Using *
// * * * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main()
{

  int rows;

  cout << "Enter number of rows: ";
  cin >> rows;

  for (int i = rows; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
}

// Example 6: Program to Full Pyramid Using *
//      *
//    * *
//  * * *
//* * * *

#include <iostream>
using namespace std;

int main()
{
  int rows;

  cout << "Enter number of rows: ";
  cin >> rows;

  for (int i = 1; i <= rows; i++)
  {
    for (int k = rows - i; k > 0; k--)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
}

// Example 6: Program to Full Pyramid Using *
//      *
//    * *
//  * * *
//* * * *

#include <iostream>
using namespace std;

int main()
{

  int rows;

  cout << "Enter number of rows: ";
  cin >> rows;

  for (int i = rows; i >= 1; i--)
  {
    for (int k = rows - i; k > 0; k--)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}

// ----------------------------------------------------
// Simple trangle /half pyramid (incremental number)
// 1
// 22
// 333
// 4444
// 55555
#include <iostream>
using namespace std;

int main()
{

  int rows;

  cout << "Enter number of rows: ";
  cin >> rows;

  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i;
    }
    cout << "\n";
  }
}

// 11111
// 2222
// 333
// 44
// 5

#include <iostream>
using namespace std;

int main()
{

  int rows;

  cout << "Enter number of rows: ";
  cin >> rows;

  for (int i = rows; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << rows - i + 1;
    }

    cout << "\n";
  }
}

// Full pyramid triangle

#include <iostream>
using namespace std;

int main()
{

  int rows;

  cout << "Enter number of rows: ";
  cin >> rows;

  for (int i = 1; i <= rows; i++)
  {
    for (int k = rows - i; k > 0; k--)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

// reverse full pyramid triangle
// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

#include <iostream>
using namespace std;

int main()
{

  int rows;

  cout << "Enter number of rows: ";
  cin >> rows;

  for (int i = rows; i >= 1; i--)
  {
    for (int k = rows - i; k > 0; k--)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

// Pascale triangle
//     1 
//    1 1 
//   1 2 1 
//  1 3 3 1 
// 1 4 6 4 1 

#include <iostream>
using namespace std;

int main()
{

  int rows;

  cout << "Enter number of rows: ";
  cin >> rows;

  for (int i = 1; i <= rows; i++)
  {
    int coef = 1;
    for (int k = rows - i; k > 0; k--)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << coef << " ";
      coef = coef * (i - j) / j;
    }
    cout << endl;
  }
}

// Hallow Diamond Pattren
// * * * * *  * * * * *
// * * * *      * * * *
// * * *          * * *
// * *              * *
// *                  *
// *                  *
// * *              * *
// * * *          * * *
// * * * *      * * * *
// * * * * *  * * * * *

#include <iostream>
using namespace std;

int main()
{

  int rows;

  cout << "Enter number of rows: ";
  cin >> rows;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < (rows * 2); j++)
    {
      if (i + j <= rows - 1)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
      if ((i + rows) <= j)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < (2 * rows); j++)
    {
      if (i >= j)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
      if (i >= (2 * rows - 1) - j)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}