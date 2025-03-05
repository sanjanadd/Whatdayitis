#include <iostream> //including the input output library
#include <algorithm> // for transforming strings to lowercase
#include <string> //including the string library

using namespace std;

int main() {
    //declaring the variable day to store user input
    string day;

    //prompting user to enter a day of the week
    cout << "Enter a day of the week: ";
    //reading user input and storing it in the day variable
    cin >> day;

    //convert input to lowercase to ensure case insensitivity
    for (char &c : day) {
        c = tolower(c); //transfrom each character to lowercase
    }

    //declaring variable to store the number representing the day
    int dayNum;

   // Using if-else to check which day is entered and assigning the corresponding number
    if(day == "monday"|| day == "tuesday" || day == "thursday"){
        dayNum=1; // 1 for Monday, Tuesday, Thursday
    }
    else if(day == "wednesday"){
        dayNum = 2; // 2 for Wednesday
    }
    else if(day == "friday"){
        dayNum = 3; // 3 for Friday
    }
    else if(day == "saturday" || day == "sunday"){
        dayNum = 4; // 4 for Saturday, Sunday
    }
    //if day is not any of the above, its invalid
    else{
        dayNum = 0;
    }
    
    //using a switch case to print what day it is based on the number
    switch(dayNum){
        case 1: //monday, tuesday, thursday
            cout << "It's a weekday!" << endl;
            break;
        case 2: //wednesday
            cout << "Hump Daaaaay" << endl;
            break;
        case 3: //friday
            cout << "TGIF!" << endl;
            break;
        case 4: //weekend
            cout << "It's a weekend!" << endl;
            break;
        default: //invalid input
            cout << "Invalid day." << endl;
            break;
    }

    return 0; //returning 0 to end the program
}