// Ray, Casey 
// Assignment Due Date and Lab Number: Mar 19 by 11:59pm, HW 2
//Class Section: CS_116_25990SP20P, Thursday 1735-2200

// Program to calculate a customer’s monthly bill. It should ask which package was purchased and how many hours were used.


#include <iostream>
#include <ios>
#include <iomanip>
using namespace std;

    int main() {
        
        //const
        double 
            priceA = 9.95, 
            priceB = 14.95, 
            priceC = 19.95, 
            overageA = 2.00, 
            overageB = 1.00, 
            baseHoursA = 10, 
            baseHoursB = 20,
            totalCost,
            price = 0,
            baseHours = 0,
            overagePrice = 0,
            overageMultiplier = 0;

        //userInput variables
        double
            hoursUsed,
            hoursUsedInCalculation;
        char
            charInputType;
        string
            prompt = "Enter plan type (A, B or C) as a single letter and press return.\n",
            hoursPrompt = "Enter hours used: \n";

                
        //input
        //ask which package was purchased

        
        cout << prompt;
        cin  >> charInputType;
                
        //price is at zero until a plan is selected, so user is stuck until they enter ABC or abc
        while (price == 0) {
            
            charInputType = toupper(charInputType);
            
            switch (charInputType) {

            case 'A':
            { price = priceA;
            overagePrice = overageA;
            baseHours = baseHoursA;  } break;
            case 'B':
            { price = priceB;
            overagePrice = overageB;
            baseHours = baseHoursB; } break;

            case 'C':
            { price = priceC;
            overagePrice = 0;
            } break;

            default:
                cout << "Was that A, B or C? This event has been reported. \n";
                cout << prompt;
                cin >> charInputType;
                break;

            }
        }
        

        //ask about usage
        cout << hoursPrompt;
        cin >> hoursUsed;

        //math
        //Hours cannot exceed 200, I took this to mean you can't be charged for more than 200 hours
        
        if (hoursUsed > 200) {
            hoursUsedInCalculation = 200;
        } else  hoursUsedInCalculation = hoursUsed;

        //find hours used above base hours
        overageMultiplier = hoursUsedInCalculation - baseHours;
        
        //if they use less than their base, don't charge extra
        if (overageMultiplier <= 0) { overageMultiplier = 0; };

        //add subscription price to overage price
        totalCost = price + (overageMultiplier * overagePrice);
        
       
        
        //output with formatting
        cout << setw(40) << setfill('_') << "" << endl << endl;
        
        cout << "Package " << charInputType << ", usage " << hoursUsed << " hours" << endl;
        cout << setw(40) << setfill('_') << "" << endl << endl;
        cout << "Bill: $" << showpoint << fixed << setprecision(2) << totalCost << endl << endl << endl << endl << endl;
        

        system("pause");

        return 0;

               
    }
