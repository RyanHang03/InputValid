/* Author: Ryan Hang
 * Purpose: Provide functions that validate the various types of input and return said inputs
 * Parameters: A prompt for the input
 * Return: The type of input that we want
 * Checking: Will continuously ask with a preset error message until the user provides correct input.
 * Created: 9/11/2022
 * Last Updated: 9/11/2022
 */
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

bool checkStreamIsEmpty (istream& stream) {
    if (stream.rdbuf()->in_avail() == 0) {
        return true;
    } else {
        return false;
    }
}

int validInt (const string& prompt) {
    int ans = 0;
    string userInput = "";
    cout << prompt << endl;
    bool readProperly = false;
    do {
        getline(cin, userInput);
        //places the string into a stream to be attempted to be converted to an int
        stringstream strStream(userInput);
        strStream >> ans;
        readProperly = checkStreamIsEmpty(strStream);
        if (!readProperly) {
            cout << "Invalid Input Entered, Please Try Again." << endl;
        }
    } while(!readProperly);

    return ans;
}

double validDouble (const string& prompt) {
    double ans = 0;
    string userInput = "";
    cout << prompt << endl;
    bool readProperly = false;
    do {
        getline(cin, userInput);
        //places the string into a stream to be attempted to be converted to an int
        stringstream strStream(userInput);
        strStream >> ans;
        readProperly = checkStreamIsEmpty(strStream);
        if (!readProperly) {
            cout << "Invalid Input Entered, Please Try Again." << endl;
        }
    } while (!readProperly);

    return ans;
}
