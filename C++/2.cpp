/*
 * =====================================================================================
 *
 *       Filename:  2.cpp
 *
 *    Description:  http://projecteuler.net/index.php?section=problems&id=2
 *
 *        Version:  1.0
 *        Created:  11/02/2010 02:14:36 PM CET
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

	int fib,
		fib_1 = 1,
		fib_2 = 0,
		sum = 0;

	while (fib < 4000000) {
		fib = fib_2 + fib_1;
		if (fib % 2 == 0) 
			sum += fib;
		fib_2 = fib_1;
		fib_1 = fib;
	}

	std::cout << "Problem 2: " << std::endl;
	std::cout << "The sum of the even valued fibbonacci terms under 4 million is: " << sum << std::endl;
	std::cout << std::endl;

	return 0;
}
