//Introductory21.cpp - Displays the average stock price
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double prices[10] = {96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9};
	double total = 0.0;
	double average = 0.0;
	//finding length of array
	int length = (sizeof(prices)/sizeof(*prices)) ;
	//looping to find total
	for (int a=0; a<length; a++)
		{

      total +=prices[a];
		
		}
	  //calculate average
	average = total/length;

	cout << fixed << setprecision(2);

	cout << "Average stock price: $" << average << endl;

	return 0;
}
		