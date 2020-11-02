// This program asks user for the number of the month, then states
// what season should it be. For simplicity it takes rough assumptions.
#include<iostream>
#include<string>
using namespace std;

int main(){

    int month;
    int season;

    string season_name;

    cout << "Write the number of the month and press ENTER:" << endl;
    cin >> month;

    // This is integer division, only whole number can be an output.
    // It happens because both numbers in expression are integers:
    season = ( (month - 1) / 3) + 1; 
    cout << season;

    // Switch statement:
    switch (season){
        case 1: 
            season_name = "Winter";
            break;
        case 2: 
            season_name = "Spring";
            break;
        case 3: 
            season_name = "Summer";
            break;
        case 4: 
            season_name = "Autumn";
            break;
        default:
            cout << "Wrong number!" << endl;
            return 0; // Program ends in this case!
    }

    cout << "It is " << season_name << endl;

    return 0;

}
