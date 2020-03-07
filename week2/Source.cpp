// Program to calculate a customer’s monthly bill. It should ask which package was purchased and how many hours were used.
// Casey Ray 
// Date: 03/05/2020
// HW2. 


#include <iostream> 
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
            price,
            baseHours = 0,
            overagePrice = 0,
            overageMultiplier = 0;

        //userInput variables
        double
            hoursUsed;
        char
            charInputType;

                
        //input
        //ask which package was purchased and how many hours were used.

        cout << "Enter hours used: \n";
        cin >> hoursUsed;
        cout << "Enter plan type (A, B or C) as a single letter and press return.\n";
        cin >> charInputType;

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
            
            default: cout << "You broke it. \n";

        }



        //math
        //find hours used above base hours
        overageMultiplier = hoursUsed - baseHours;
        
        //if they use less than their base, don't charge extra
        if (overageMultiplier <= 0) { overageMultiplier = 0; };

        //add subscription price to overage price
        totalCost = price + (overageMultiplier * overagePrice);
        
        //output with formatting
        cout << "Total: " << totalCost;










        system("pause");

        return 0;

               
    }
