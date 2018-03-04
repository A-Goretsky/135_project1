/*
Author: Anton Goretsky
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1 C

Calculates the sum and difference of all expressions.
Is provided a file with numbers separated by the relevant operator,
and expressions separated by ;
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  int nums; //initialize num input var
  char syms; //initialize symbol input var
  int res_tot = 0; //initialize result total var
  cin >> res_tot; //stream first number
  while (cin >> syms >> nums) { //continue streaming symbols and numbers until end of file
    if (syms == '+') { //if symbol is +
      res_tot += nums; //add to total
    }
    if (syms == '-') { //if symbol is -
      res_tot -= nums; //subtract from total
    }
    if (syms == ';') { //if symbol is ;
      cout << res_tot << endl; //print out result
      res_tot = nums; //set total to next number if exists
    }
  }
  cout << res_tot << endl; //print out result of final op line
  return 0; //return 0
}
