/*
 * =====================================================================================
 *
 *       Filename:  pythagorean_triples.cpp
 *
 *    Description:
 *    http://en.wikipedia.org/wiki/Formulas_for_generating_Pythagorean_triples 
 *
 *        Version:  1.0
 *        Created:  11/06/2010 03:21:47 AM CET
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
using std::string;


int main() {

	int a, b, c;
	for (int n = 0; n < 40; ++n) {
		a = 2*n+1;
		b = 2*n*(n+1);
		c = b+1;
		if (a*a+b*b == c*c) {
			cout << a << " " << b << " " << c << "\t" << a+b+c << endl;
			if (a+b+c == 1000) {
				cout << "PE solution is: " << a*b*c << endl;
			}
		} else {
			cout << " error at " << n << endl;
		}
		if (n%2 == 0) {
			a = 2*n;
			b = n*n-1;
			c = b + 2;
			if (a*a+b*b == c*c) {
				cout << a << " " << b << " " << c << "\t" << a+b+c << endl;
				if (a+b+c == 1000) {
					cout << "PE solution is: " << a*b*c << endl;
				}
			} else {
				cout << " error at " << n << endl;
			}	
		}
	}

	return 0;
}
