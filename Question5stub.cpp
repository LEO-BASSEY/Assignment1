/*
 *  Question6.cpp
 *
 *  Name: BASSEY LEO ELENG
 *  Department: DEPARTMENT OF COMPUTER SCIENCE
 *  Matric. No: 47038007CH
 *
 *  Program that calculates the squares and cubes of the integers from 0 to 10
 *
 *  Stub file to enable you complete assignment #1 - question #6
 */
	
	#include <iostream>
	#include <math.h> // library to use pow() function to calculate squares and cubes
	#include <iomanip> 
	using namespace std;
	

 
 			
	int main()
	{
	
	// display welcome messages to user
	cout << "Welcome - This program calculates the squares and cubes\n";
	cout << "of the integers from 0 to 10 and prints using tabs\n\n";
	
	// TODO: Hint use pow(base, power) to calculate squares and cubes
	// Put code here ...
			cout<<"Integer"<<"   Square"<<"   Cube"<<endl;
	int num;
	for(num=0; num<=10; num++)
	{
	cout<<num<<setw(12);
	cout<<num*num<<setw(10);
	cout<<num*num*num<<endl;
	}
	
	cout << "\nThanks and Goodbye";
	
	system("PAUSE");
	return EXIT_SUCCESS;
	}
