/*
 * =====================================================================================
 *
 *       Filename:  factorization_fermet.cpp
 *
 *    Description:  Simple test of implementing the Fermat Factorization method
 *    http://en.wikipedia.org/wiki/Fermat%27s_factorization_method
 *
 *        Version:  1.0
 *        Created:  11/03/2010 12:16:25 PM CET
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:   (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main() {

	unsigned int number;
	double a, b_2;

	while (cin >> number) {
		a = ceil(sqrt(number));
		b_2 = a*a-number;
		while (sqrt(b_2) != ceil(sqrt(b_2))) {
			++a;
			b_2 = a*a - number;
		}
		
		cout << " The factors are: " 
			<< a - sqrt(b_2)
			<< " and "
			<< a + sqrt(b_2)
			<< endl;
	}


	return 0;
}

