#include <iostream>
using namespace std;

#include "optionCalculate.h"
#include "volts.h"
#include "coulumb.h"
#include "watts.h"
#include "joules.h"
#include "voltResult.h"
#include "coulumbResult.h"
#include "wattResultOne.h"
#include "wattResultTwo.h"
#include "wattResultThree.h"
#include "jouleResultOne.h"
#include "jouleResultTwo.h"
#include "jouleResultThree.h"
#include "jouleResultFour.h"
#include "jouleResultFive.h"

/* char optionCalculate() {

  cout << "Choose which 4 specific values you want to calculate here (the rest of the values you have to measure internally by yourself?\n";
  cout << "-------------------------------------------------------------------------------------------------------------------------------\n";
  cout << "V = voltage, P = power, C = charge, E = energy";
  cout << "-------------------------------------------------------------------------------------------------------------------------------\n";

  char optionLetter {};
  cin >> optionLetter;

  if (optionLetter == 'V') {

    char voltage = optionLetter;
    return voltage;
  }

  if (optionLetter == 'P') {

    char power = optionLetter;
    return power;
  }
  
  if (optionLetter == 'C') {

    char charge = optionLetter;
    return charge;
  }
  
  if (optionLetter == 'E') {

    char energy = optionLetter;
    return energy;
  }
}

int volts(char voltage) {

  cout << "Since you choose voltage, choose the option below to continue as 1 (option 1). below is the only option\n";
  cout << "---------------------------------------------------------------------------------------------------------";
  cout << "1). V = IR\n";
  cout << "---------------------------------------------------------------------------------------------------------";

  int voltageOption {};
  cin >> voltageOption;

  if (voltageOption == 1) {

    int voltageOption_one = voltageOption;
    return voltageOption_one;
  }  
}

int coulumb(char charge) {

  cout << "Since you choose charge, choose the option below to continue as 1 (option 1). below is the only option\n";
  cout << "---------------------------------------------------------------------------------------------------------";
  cout << "1). Q = It\n";
  cout << "---------------------------------------------------------------------------------------------------------";

  int chargeOption {};
  cin >> chargeOption;

  if (chargeOption == 1) {

    int chargeOption_one = chargeOption;
    return chargeOption_one;
  }  
}

int watts(char power) {

  cout << "Since you choose power, choose either option 1, 2, or 3 below to continue\n";
  cout << "---------------------------------------------------------------------------------------------------------";
  cout << "1). P = VI, 2). P = (I*I)*R, 3). P = (V*V)/R\n";
  cout << "---------------------------------------------------------------------------------------------------------";

  int powerOption {};
  cin >> powerOption;

  if (powerOption == 1) {

    int powerOption_one = powerOption;
    return powerOption_one;
  }  

  if (powerOption == 2) {

    int powerOption_two = powerOption;
    return powerOption_two;
  }  

  if (powerOption == 3) {

    int powerOption_three = powerOption;
    return powerOption_three;
  }  
}

int joules(char energy) {

  cout << "Since you choose energy, choose either option 1, 2, 3, 4 or 5 below to continue\n";
  cout << "---------------------------------------------------------------------------------------------------------";
  cout << "1). E = Pt, 2). E = VIt, 3). E = QV, 4). E = (I*I)Rt 5). E = (V*V*t) / R\n";
  cout << "---------------------------------------------------------------------------------------------------------";

  int energyOption {};
  cin >> energyOption;

  if (energyOption == 1) {

    int energyOption_one = energyOption;
    return energyOption_one;
  }  

  if (energyOption == 2) {

    int energyOption_two = energyOption;
    return energyOption_two;
  } 

  if (energyOption == 3) {

    int energyOption_three = energyOption;
    return energyOption_three;
  }

  if (energyOption == 4) {

    int energyOption_four = energyOption;
    return energyOption_four;
  }

  if (energyOption == 5) {

    int energyOption_five = energyOption;
    return energyOption_five;
  }
}

void voltResult(int voltageOption_one) {

  cout << "Enter the current of the circuit\n";
  double current {};
  cin >> current;

  cout << "Enter the resistance of the circuit\n";
  double resistance {};
  cin >> resistance;

  double voltage {current * resistance};
  cout << "Voltage result of the circuit is " << voltage << " volts\n";
}

void coulumbResult(int chargeOption_one) {

  cout << "Enter the current of the circuit\n";
  double current {};
  cin >> current;

  cout << "Enter the time of the circuit\n";
  double time {};
  cin >> time;

  double charge {current * time};
  cout << "Charge result of the circuit is " << charge << " volts\n";
}

void wattResultOne(int powerOption_one) {

  cout << "Enter the voltage of the circuit\n";
  double voltage {};
  cin >> voltage;

  cout << "Enter the current of the circuit\n";
  double current {};
  cin >> current;

  double power {current * voltage};
  cout << "Power result of the circuit is " << power << " volts\n";
}

void wattResultTwo(int powerOption_two) {

  cout << "Enter the current of the circuit\n";
  double current {};
  cin >> current;

  cout << "Enter the resistance of the circuit\n";
  double resistance {};
  cin >> resistance;

  double power {current * current * resistance};
  cout << "Power result of the circuit is " << power << " volts\n";
}

void wattResultThree(int powerOption_three) {

  cout << "Enter the voltage of the circuit\n";
  double voltage {};
  cin >> voltage;

  cout << "Enter the resistance of the circuit\n";
  double resistance {};
  cin >> resistance;

  double power {(voltage * voltage) / resistance};
  cout << "Power result of the circuit is " << power << " volts\n";
}

void jouleResultOne(int energyOption_one) {

  cout << "Enter the power of the circuit\n";
  double power {};
  cin >> power;

  cout << "Enter the time of the circuit\n";
  double time {};
  cin >> time;

  double energy {power * time};
  cout << "Energy result of the circuit is " << energy << " volts\n";
}

void jouleResultTwo(int energyOption_two) {

  cout << "Enter the voltage of the circuit\n";
  double voltage {};
  cin >> voltage;

  cout << "Enter the current of the circuit\n";
  double current {};
  cin >> current;

  cout << "Enter the time of the circuit\n";
  double time {};
  cin >> time;

  double energy {voltage * current * time};
  cout << "Energy result of the circuit is " << energy << " volts\n";
}

void jouleResultThree(int energyOption_three) {

  cout << "Enter the voltage of the circuit\n";
  double voltage {};
  cin >> voltage;

  cout << "Enter the charge of the circuit\n";
  double charge {};
  cin >> charge;

  double energy {charge * voltage};
  cout << "Energy result of the circuit is " << energy << " volts\n";
}

void jouleResultFour(int energyOption_four) {

  cout << "Enter the current of the circuit\n";
  double current {};
  cin >> current;

  cout << "Enter the resistance of the circuit\n";
  double resistance {};
  cin >> resistance;

  cout << "Enter the time of the circuit\n";
  double time {};
  cin >> time;

  double energy {current * current * resistance * time};
  cout << "Energy result of the circuit is " << energy << " volts\n";
}

void jouleResultFive(int energyOption_five) {

  cout << "Enter the voltage of the circuit\n";
  double voltage {};
  cin >> voltage;

  cout << "Enter the resistance of the circuit\n";
  double resistance {};
  cin >> resistance;

  cout << "Enter the time of the circuit\n";
  double time {};
  cin >> time;

  double energy {(voltage * voltage * time) / resistance};
  cout << "Energy result of the circuit is " << energy << " volts\n";
} 
*/

int main() {

   char circuitChoice = optionCalculate();

   if (circuitChoice == 'V') {
     int voltageChoice = volts(circuitChoice);
     if (voltageChoice == 1) {
       voltResult(voltageChoice);
     } else {
       cout << "Invalid input!\n";
     }
   }

  if (circuitChoice == 'C') {
     int chargeChoice = coulumb(circuitChoice);
     if (chargeChoice == 1) {
       coulumbResult(chargeChoice);
     } else {
       cout << "Invalid input!\n";
     }
   }

  if (circuitChoice == 'P') {
     int powerChoice = watts(circuitChoice);
     if (powerChoice == 1) {
       wattResultOne(powerChoice);
     }
     else if (powerChoice == 2) {
       wattResultTwo(powerChoice);
     }
    else if (powerChoice == 3) {
       wattResultThree(powerChoice);
     } else {
       cout << "Invalid input!\n";
     }
   }

  if (circuitChoice == 'E') {
     int energyChoice = joules(circuitChoice);
     if (energyChoice == 1) {
       jouleResultOne(energyChoice);
     }
     else if (energyChoice == 2) {
       jouleResultTwo(energyChoice);
     }
    else if (energyChoice == 3) {
       jouleResultThree(energyChoice);
     }
    else if (energyChoice == 4) {
       jouleResultFour(energyChoice);
     }
    else if (energyChoice == 5) {
       jouleResultFive(energyChoice);
     } else {
       cout << "Invalid input!\n";
     }
   }

   return 0;
}
