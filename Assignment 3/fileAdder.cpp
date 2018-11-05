/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/8/2018
** Description:  Reads a file and writes the sum to new file
*******************************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;

int main()
{
	//asks user for file name
	cout << "Please enter your filename." << endl;
	string fileName;
	cin >> fileName;

	//opening file
	ifstream inputFile;
	inputFile.open(fileName);

	//tells user if file was not opened
	if (!inputFile)
		cout << "could not access file" << endl;

	//if file is opened, rest of program will continue
	else {
		int sum = 0, tempNum = 0;

		//loop to keep adding while there is content
		while (inputFile >> tempNum)
			sum += tempNum;
		
		//to open an output file that will contain sum
		ofstream outputFile;
		outputFile.open("sum.txt");
		outputFile << sum;

		//to display that writing is finished
		cout << "result written to sum.txt" << endl;

		//closing input and output files
		inputFile.close();
		outputFile.close();
	}

	return 0;
}