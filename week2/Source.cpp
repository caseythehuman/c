// Using else if to assign a letter grade
// Casey James Ray 
// Date: 03/05/2020
// HW2. 


#include <iostream> 
using namespace std;

    int main() {

        //take these as input
        int score1, score2, score3;

        cout << "Enter your first score: " << endl;
        cin >> score1;
        cout << "Enter your second score: " << endl;
        cin >> score2;
        cout << "Enter your third score: " << endl;
        cin >> score3;
        

               

        int average = (score1 + score2 + score3) / 3;

            if (average >= 60 && average < 70 ) {
                cout << average << " - D " << endl;
            }
            else if (average >= 70 && average < 80){
                cout << average << " - C" << endl;
            }
            else if (average >= 80 && average < 90 ) {
                cout << average << " - B" << endl;
            }
            else if (average > 90) {
                cout << average << " - A" << endl;
            }
            else {
                cout << average << "You Failed!";
            }  ;







        system("pause");

        return 0;

               
    }
