#include <iostream>
#include <string>
// (1) Include header file
#include <fstream>

using namespace std;

int main()
{
    
// (2) Declare input and output file variables

    ifstream inFile;    // input file variable
    ofstream outFile;   // output file variable
// Declare variables    
    string name;
    int num, result;
    float num2;
    char letter;
    
 // (3) Open Files   
 
    inFile.open("input1.txt");   // open the input file
    outFile.open("output1.txt");    // open the output file
        
// Get data

    

// (4) Use the file variables

    inFile >> name;                        // Get name from the input file
    inFile >> num >> num2 >> letter;       // Get rest of data from the input file


// Process data

    result = num * 2;
    
// Send output to the screen

    cout << endl << "Greetings " << name << endl << endl;
    cout << "The double of " << num << " is " << result << endl << endl;
    cout << "The other number is " << num2 << endl << endl;
    cout << "and the letter is " << letter << endl << endl;

 // Send output to the file
   
    outFile << endl << "Greetings " << name << endl << endl;
    outFile << "The double of " << num << " is " << result << endl << endl;
    outFile << "The other number is " << num2 << endl << endl;
    outFile << "and the letter is " << letter << endl << endl;

// (5) Close the file

    inFile.close();    // Close the input file
    outFile.close();    // Close the output file


    return 0;

}