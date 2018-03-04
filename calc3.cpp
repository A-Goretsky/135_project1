/*
Author: Anton Goretsky
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1 D

Calculates the sum and difference of all expressions, also calculates squares.
Is provided a file with numbers separated by the relevant operator,
and expressions separated by ;
Squares of numbers are represented by ^ immediately following the integer.
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  int input_num;    //initialize input num var
  char sym, past_sym = '+'; //initialize symbol and past symbol storage
                            //purpose of past symbol is to allow for checking of ^ and ; without extra summation to total.
  int res_tot = 0;  //initialize result total var as 0
  cin >> input_num; //stream in first number

  while (cin >> sym) { //stream in symbols until end
    if (sym == '^') { //if symbol is ^
      input_num *= input_num; //set input as square of itself
      cin >> sym; //stream in next symbol
    }
    if (past_sym == '-') { //if past sym is -
      res_tot -= input_num; //subtract input
    }
    if (past_sym == '+') { //if past sym is +
      res_tot += input_num; //add input
    }
    past_sym = sym; //set past sym to current sym
    cin >> input_num; //stream in next num
    if (past_sym == ';') { //if past sym is ;
      cout << res_tot << endl; //print out result
      res_tot = 0; //set result to 0 to reset
      past_sym = '+'; //set past symbol back to original +
    }
  }
  return 0; //return 0;
}
