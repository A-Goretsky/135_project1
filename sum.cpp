/*
Author: Anton Goretsky
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1 A

Calculates the sum of all numbers in an input file.
Is provided a file with numbers separated by spaces.
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  int res = 0; //initialize result var
  int input = 0; //initialize input var
  while (cin >> input) { //stream input until end
    res += input; //sum res with input
  }
  cout << res << endl; //print out final res
  return 0; //return 0
}
