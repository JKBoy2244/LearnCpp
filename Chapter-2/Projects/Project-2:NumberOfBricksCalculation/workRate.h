#ifndef WORKRATE
#define WORKRATE

void workRate(int numberOfBricks) {

  cout << "Enter the number of workers for this building project?\n";                                     //The number of workers affect how quickly it can take to build a house. More workers mean less time (& vice-versa)
  int numberOfWorkers {};
  cin >> numberOfWorkers;

  cout << " ---------------------------------------------------------------------------------------------------------------------------------- \n";
  double days = static_cast<double>(numberOfBricks) / numberOfWorkers;                   //This is slightly outside the syllabus but only this (rest is in learncpp ch. 2 syllabus but it's to prevent calculation error 
  double hours {days * 24};
  double minutes {hours * 60};                                                          //Conversion rates
  double seconds {minutes * 60};
  double weeks {days / 7};
  double months {weeks / 4.33};
  double years {months / 12};

  cout << "The total Number of whole bricks you need is " << numberOfBricks << " bricks.\n";
  cout << "The total number of seconds this will take to build a full house from scratch is: " << seconds << " seconds\n";                //This block part tells you the time taken to complete the work in various formats
  cout << "The total number of minutes this will take to build a full house from scratch is: " << minutes << " minutes\n";
  cout << "The total number of hours this will take to build a full house from scratch is: " << hours << " hours\n";
  cout << "The total number of full days this will take to build a full house from scratch is: " << days << " days\n";
  cout << "The total number of weeks this will take to build a full house from scratch is: " << weeks << " weeks\n";
  cout << "The total number of months this will take to build a full house from scratch is: " << months << " months\n";
  cout << "The total number of years this will take to build a full house from scratch is: " << years << " years\n";
  
  cout << " -------------------------------------------------------------------------------------------------------------------------- \n";
  
}

#endif
