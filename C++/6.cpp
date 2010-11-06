/*
 * =====================================================================================
 *
 *       Filename:  6.cpp
 *
 *    Description:  http://projecteuler.net/index.php?section=problems&id=6
 *
 *        Version:  1.0
 *        Created:  11/04/2010 08:22:01 PM CET
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:   (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	unsigned int difference = 0,
				 sum_of_squares = 0,
				 square_of_sum = 0;
				

	int limit, sum = 0;

	cout << "Input the limit number: " << endl;
	cin >> limit;

	for (int i = 1; i <= limit; ++i) {
		sum_of_squares += i*i;
		sum += i;
		cout << sum << "\t" << i*i << "\t" << sum_of_squares << endl;
	}
	
	square_of_sum = sum*sum;
	cout << "The numbers sum to : " << sum << endl;
	cout << "The square of the sum is: " << square_of_sum << endl;

	difference = square_of_sum - sum_of_squares;

	cout << "The difference is : " << difference << endl;

	return 0;
}
