// Ray, Casey 
// LAB2 Available until Mar 26 at 1
//Class Section: CS_116_25990SP20P, Thursday 1735-2200

// Menu program for calculating areas of shapes

#include <iostream>
#include <ios>
#include <iomanip>
#include <string>
using namespace std;

    int main() {

                     
    // DEFINE THE NAMED CONSTANT PI HERE AND SET ITS VALUE TO 3.14159

    double pi = 3.14159;


    // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE

    double
        area,
        height,
        width,
        radius,
        base;

    // NAME AND AN APPROPRIATE DATA TYPE. 
    
    int userChoice;

    // WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.

    cout << "Program to calculate areas of objects \n\n";
    cout << "          1 -- square" << endl;
    cout << "          2 -- circle" << endl;
    cout << "          3 -- triangle" << endl;
    cout << "          4 -- quit" << endl << endl;
    

    // WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
      
        cout << "Please choose a number 1-4\n";
        cin >> userChoice;

        // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION 
        // AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
        if (userChoice == 1) {
                cout << "You want to calcultate the area of a square!\nPlease enter the length of a side:\n";
                cin >> base;
                area = base * base;
                cout << endl << base << "^2 is equal to the area: " << area << " square units\n";
            
            }
        else if (userChoice == 2) {
            cout << "You want to calcultate the area of a circle!\nPlease enter the radius:\n";
            cin >> radius;
            area = (radius * radius) * pi;
            cout << endl << radius << "^2 multiplied by pi is equal to the area: " << area << " square units\n";
        }
        else if (userChoice == 3) {
            cout << "You want to calcultate the area of a triangle!\nPlease enter the length of the base:\n";
            cin >> base;
            cout << "Please enter the height:\n";
            cin >> height;
            area = (base * height)/2;
            cout << endl << "(" << base << " x " << height << ")/2 is equal to the area of this triangle: " << area << " square units\n";
        }


        else if (userChoice == 4) {
            cout << "Forget math anyway, right?\n";
        }


        // IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
        // BE DISPLAYED.
        else {
            cout << "That ain't it." << endl;
        }
        
        

        
        system("pause");

        return 0;

               
    }










    /*  cout << (3 == 4) << endl;
 cout << (3 == 3) << endl;
 cout << (5 == 3 + 2) << endl << endl;

 cout << (7 > 5) << endl;
 cout << (7 > 5 + 2) << endl;
 cout << (2 >= 8 % 3) << endl << endl;

 cout << (8 < 6) << endl;
 cout << (3 * 5 < 2 * 9 - 1) << endl;
 cout << (5 * 4 <= 40 / 2) << endl << endl;

 cout << (3 != 5) << endl;
 cout << (3 != 9 - 2 * 3) << endl;
 cout << (10 != (4 * 5) / 2) << endl << endl;

 cout << (5 > 6 && 3 < 4) << endl;
 cout << (5 > 6 || 3 < 4) << endl;
 cout << (!(7 > 6)) << endl << endl;

 cout << (2 * 3 == 6 && !(1 > 2)) << endl;
 cout << (!(2 * 3 == 6 && 1 > 2)) << endl;
 cout << (!(2 * 3 == 6 && 1 != 2)) << endl; */


 // Lab 4 tryIt4B 


    /*   bool hungry = true,
                sleepy = false,
                happy = true,
                lazy = false;

           cout << hungry << "  " << sleepy
        << endl;

           if (hungry == true)
              cout << "I'm hungry. \n";

           if (sleepy == true)
              cout << "I'm sleepy. \n";

           if (hungry)
              cout << "I'm still hungry. \n";
       else
              cout << "I'm not hungry. \n";

           if (sleepy)
              cout << "I'm still sleepy. \n";
       else
              cout << "I'm not sleepy. \n";

           if (sleepy)
              cout << "I'm sleepy. \n";
       else if (lazy)
              cout << "I'm lazy. \n";
       else if (happy)
              cout << "I'm happy. \n";
       else if (hungry)
              cout << "I'm hungry. \n";

           */

           /*
           int score = 65;          // Initialize student's test score

                   if (score == 100)
                      cout << "You made a perfect score.\n";
                   else if (score != 100)
                      cout << "You needed " << 100 - score << " more points for a perfect score.\n";

           */


           /* int choice;    // Menu choice should be 1, 2, or 3

                // Display the menu of choices
                cout << "Choose a primary color by entering its number. \n\n";
                cout << "1 Red \n" << "2 Blue \n" << "3 Yellow \n";

                    // Get the user's choice
                    cin >> choice;

                    // Tell the user what he or she picked
                if (choice == 1)
                       cout << "\nYou picked red.\n";
                else if (choice == 2)
                       cout << "\nYou picked blue.\n";
                else if (choice == 3)
                    cout << "\nYou picked Yellow.\n";
                else
                       cout << choice << " was not one of the options.\n\n"; */

                       /*
                       string pet;         // "cat" or "dog"
                           char spayed = 'f';        // 'y' or 'n'


                           while (spayed != 'q') {
                               cout << "Enter the pet type (cat or dog): ";
                               cin >> pet;
                               if (pet != "cat" || "dog") {
                                   cout << "Only cats and dogs need pet tags. \n";
                               }
                               else
                               cout << "Has the pet been spayed or neutered (y/n)? ";
                               cin >> spayed;

                               // Determine the pet tag fee


                               if (pet == "cat")
                               {
                                   if (spayed == 'y' || 'Y')
                                       cout << "Fee is $4.00 \n";
                                   else
                                       cout << "Fee is $8.00 \n";
                               }
                               else if (pet == "dog")
                               {
                                   if (spayed == 'y' || 'Y')
                                       cout << "Fee is $6.00 \n";
                                   else
                                       cout << "Fee is $12.00 \n";
                               }


                           }; */

