#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

void printVal(ofstream & oFile, int volume );

main()
{
    ofstream outFile;
    outFile.open("output1.text");
    int number;
    cout << "Please enter a number: ";
    cin >> number;
    printVal(outFile, number);
    printVal(outFile, 2 * number);
    printVal(outFile, 7 + number);
    outFile.close();

    return 0;
}

void printVal(ofsttream & oFile, int value )        // Value is a number parameter
// This function recieves a number in valpar and prints the value
{
    oFile << "The value recieved through the parameter list is: " << setw(2) << value << endl << endl;
}