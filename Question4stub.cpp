/*
 *  Question4.cpp
 *
 *  Name: BASSEY LEO ELENG
 *  Department: DEPARTMENT OF COMPUTER SCIENCE
 *  Matric. No: 47038007CH
 *
 *  Program that inputs a five-digit integer,
 *  separates the integer into its digits and prints them separated by three spaces each
 *
 *  Stub file to enable you complete assignment #1 - question #4
 */
	
	#include <iostream>
	#include <string>
	#include <math.h>
	using namespace std;
	

	
	int main()
	{
	// Variable declaration
	int digits;
	
	// display welcome messages to user
	cout << "Welcome - This program reads a five-digit integer\n";
	cout << "separates the integer into its digits and prints them\n";
	cout << "separated by three spaces each\n\n";
	
	// TODO: Read integer using cin
	cout << "Enter five digit integer value - ";
	cin>>digits;
	
	// check if digit is a five digit integer
/*	if (to_string(digits).length() < 5 || to_string(digits).length() > 5)
	{
	cout << "\nERROR - Please enter a five digit integer";
	} else {
 */
	// TODO: Separate the integer into its digits and prints them separated by three spaces each
	int n=10000;		// n is number of decimal place
	double number2;
	double number3;
	int counter=1;
	while(counter>=1 && counter<=5)
	{
		number2=digits/n;
		number3=floor(number2);
		cout<<number3<<"   ";
		digits=digits-number3*n;
		n=n/10;
		counter=counter+1;
	}

	
	cout<< "\nThanks and Goodbye";
	
	system("PAUSE");
	return EXIT_SUCCESS;
	}
	
