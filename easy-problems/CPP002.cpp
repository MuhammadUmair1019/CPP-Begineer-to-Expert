// Program to offer discount on total bill amount 

// Program should take total amount as input and calculate discount 
// if bill amount < 100 no discount 
// if bill amount >= 100 and less then 500 then 10% discount
// if bill amount >500 then 20% discount

#include <iostream>
using namespace std;

int main () {
  float billAmount;
  float discount = 0.0;

  cout << "Enter bill amount";
  cin >> billAmount;

  if(billAmount >= 500) {
    discount = billAmount*20/100;
  } else if (billAmount >= 100 && billAmount < 500) {
    discount = billAmount*10/100;
  }

  cout<<"Bill Amount: "<<billAmount<<endl;
  cout<<"Discount: "<<discount<<endl;
  cout<<"Total Amount"<<billAmount - discount<<endl;
}