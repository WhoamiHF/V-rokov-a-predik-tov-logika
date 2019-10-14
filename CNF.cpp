// CNF.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main()
{
	int variables = 9;
	int clauses = 0;
	for (size_t i = 0; i <= (variables - 3) / 2; i++)
	{
		clauses += 2 * variables - 4 * i - 4;
	}
	ofstream myfile;
	myfile.open("cnf1.txt");
	myfile << "p cnf " << variables << " " << clauses << endl;
	for (int i = 0; i <= (variables - 3) / 2; i++) //mezera
	{
		for (int j = 1; j <= (variables - 2 - 2 * i); j++) // od které proměnné 
		{
			myfile << j << " " << j + i+1 << " " << j + 2 * (i+1) << " 0" << endl;
			myfile << -j << " " << -(j + i + 1) << " " << -(j + 2 * (i + 1)) << " 0" << endl;
		}
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
