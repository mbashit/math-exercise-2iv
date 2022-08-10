// math exercise 2iv.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
  double x, y;

  cout << "enter the value of x";
  cin >> x;

  y = (x / (x - 3) * (x - 1)) + x * pow((x - 1), 1 / 5) * 1.0 / pow(x, 3) - 2 * pow((x -1),3);

  cout << "the result is" << y << endl;

  return 0;
}

