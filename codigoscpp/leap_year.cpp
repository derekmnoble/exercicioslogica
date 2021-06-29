#include <iostream>
#include <cmath>


using namespace std;

int main() {
  int year;
  std::cout << "Type the year: ";
  std::cin >> year;

  if (year <= 9999 && year > 999){
    cout << "Four-digit number check!";
  }

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
    cout << "This is a leap year.";
  }
    else {
      cout << "This is not a leap year.";
    }

  return 0;

}