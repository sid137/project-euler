/*
 * =====================================================================================
 *
 *       Filename:  1.cpp
 *
 *    Description:  http://projecteuler.net/index.php?section=problems&id=1
 *
 *        Version:  1.0
 *        Created:  11/02/2010 02:01:43 PM CET
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:   Sidney Burks, 
 *        Company:  
 *
 * =====================================================================================
 */

#include <iostream>


int main() {


	int sum = 0;

	for (int i=0; i < 1000; i++) {
		if ((i % 3 == 0) or (i % 5 == 0))
			sum += i;
	}

	std::cout << "Problem 1:" << std::endl;
	std::cout << "The sum of all multiples of 3 and 5 from 0 to 1000 is " << sum << std::endl;
	std::cout << std::endl;

	return 0;
}
