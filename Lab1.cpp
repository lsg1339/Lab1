//Leonardo Garcia
//Lab 1

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	//declare variables
	string file;
	ifstream inFile;
	int count = 0;
	double between = 0, first, second, last = 0, bLast = 0;

	//output request to keyboard and input file name
	cout << "Enter a File Name: " << endl << "\n";
	cin >> file;

	//open file
	inFile.open(file);

	//get first two double values in the list
	inFile >> first;
	inFile >> second;
	count = 2;
	
	//while loop to read through entire file to get last two numbers and total count
	while (!inFile.eof())
	{
		inFile >> last;
		if (!inFile.fail()) {
			bLast = between;
			between = last;
			count++;
		}

	}

	//close file and output results
	inFile.close();
	cout << "\nFirst #: " << first << endl << "Second #: " << second << endl << "Second to Last #: " << bLast << endl << "Last #: " << last << endl << "Total Count: " << count << endl << "\n";

	system("pause");
	return 0;
}
