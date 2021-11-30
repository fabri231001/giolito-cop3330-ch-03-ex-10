/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Fabrizio Giolito
 */

#include <iostream>
#include "std_lib_facilities.h"

int main() {
  
	string operation;
	double val1, val2, total;

	cout << "Enter your expression (ex. / 6 2):\n";
	cin >> operation >> val1 >> val2;

	if(operation == "+")	
		total = val1 + val2;
	if(operation == "-")	
		total = val1 - val2;
	if(operation == "*")	
		total = val1 * val2;
	if(operation == "/")	
		total = val1 / val2;

	cout << "Total: " << total;

	return 0;
} 