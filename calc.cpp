/*
Author: Anton Goretsky
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1 B

Calculates the sum and difference of all numbers in an input file.
Is provided a file with numbers separated by the relevant operator.
*/

#include <iostream>
#include <string>

using std::string;
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
  }
  cout << res_tot << endl; //print out final total
  return 0; //return 0
}
