#include <iostream> //Extremely important for std::cout and std::cin as without this line, the compiler won't know what those 2 commands mean

int main() 
{

  [[maybe_unused]] double childrenCost {12.99}; //Cost per child when booking a hotel 
  [[maybe_unused]] double teenagerCost {21.99}; //Cost per teenager when booking a hotel 
  [[maybe_unused]] double adultCost {32.99}; //Cost per adult when booking a hotel 
  [[maybe_unused]] int nightCost {30}; //Cost per night to stay
  int extraCharge = {50};

  std::cout << "How many children are occupying the hotel room?"; //Program prompts how many children are staying in the hotel room being booked
  int children{};
  std::cin >> children;

  std::cout << "How many teenagers are occupying the hotel room?"; //Program prompts how many teenagers are staying in the hotel room being booked
  int teenagers{};
  std::cin >> teenagers;

  std::cout << "How many adults are occupying the hotel room?"; //Program prompts how many adults are staying in the hotel room being booked
  int adults{};
  std::cin >> adults;

  std::cout << "How many nights are you staying for?"; //Program prompts how many nights they're staying in the hotel room being booked
  int nights{};
  std::cin >> nights;

  double totalCharge { (childrenCost*children) + (teenagerCost*teenagers) + (adultCost*adults) + (nightCost*nights) + extraCharge }; //Calculates the total booking charge to be paid in order to get access

  //displays the booking room details of a particular room
  std::cout << "So for this booking roon, there's " << children << " children, " << teenagers << " teenagers, " << adults << " adults and they're staying for " << nights << " nights\n";
  
  std::cout << "The total cost of this booking is £" << totalCharge << '\n';
  return 0; 
  
}
