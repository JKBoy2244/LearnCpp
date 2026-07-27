#include <iostream>

int nine() 
{
  return 9;  //This function returns 9 so essentially 9 is stored in the function
}

int three()
{
  return 3; /* This function returns 3 so essentially 3 is stored in the function
            */
}

int main() {

  std::cout << "Please enter a number" << '\n';
  int number {};  //Prompts the user to enter a number
  std::cin >> number;
  
  int result { nine() * number };       //Result gets a new value when multiplying the inputted number by 9
  std::cout << number << " multiplied by 9 = " << result << '\n';                 //Displays the result on the screen
  std::cout << number << " multiplied by 3 = " << three() * number <<'\n';       //Displays another answer by multiplying the same inputted number by 3
  
}
