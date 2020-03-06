//Using an if statement 


// Casey James Ray 
// Date: 03/05/2020
// HW2. 


#include <iostream>;
    using namespace std;

    int main() {

        //take these as input
        int score1 = 60, score2 = 70, score3 = 25;

        cout << "Enter your first score: " << endl;
        cin >> score1;
        cout << "Enter your second score: " << endl;
        cin >> score2;
        cout << "Enter your third score: " << endl;
        cin >> score3;
        

        int average = (score1 + score2 + score3) / 3;

            if (average > 60) {
                cout << "Congratulations!" << endl;
            }
            else {
                cout << "Fail" << endl;
            };



        system("pause");

        return 0;




    }
