/*
 * =====================================================================================
 *
 *       Filename:  13.cpp
 *
 *    Description:  http://projecteuler.net/index.php?section=problems&id=13
 
 *        Version:  1.0
 *        Created:  11/05/2010 06:24:42 PM CET
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:   (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;


int main() {

	vector<unsigned long> numbers;
	unsigned long input, sum = 0;

	while (cin >> input) {
		sum += input;

	}
	cout << sum << endl;

	return 0;
}
