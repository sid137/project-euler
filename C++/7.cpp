/*
 * =====================================================================================
 *
 *       Filename:  sieve_of_eratosthenes.cpp
 *
 *    Description:  Attempt to do simple sieve of eerastosthenes
 *
 *        Version:  1.0
 *        Created:  11/05/2010 04:58:44 AM CET
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:   (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main() {

	vector<int>::size_type limit;

	cout << "This program attempts to find all prime numbers up until a certain number.  Enter that number: " << endl;
	cin >> limit;

	vector<int> numbers, primes;

	//create lit from 2..n 
	for (vector<int>::size_type i = 2; i < limit; ++i)
		numbers.push_back(i);

	vector<int>::iterator p_iter = numbers.begin();
	int p = *p_iter;

	while(p*p < limit) {
		// eliminate (not prime) multiples of p
		for (vector<int>::iterator n_iter = p_iter + p ; n_iter < numbers.end(); n_iter += p)
			*n_iter = 0;

		//find the next prime
		do {
			++p_iter;
			p = *p_iter;
		} while (p == 0);
	}

	// filter out primes into new list
	for (vector<int>::iterator iter = numbers.begin(); iter != numbers.end(); ++iter) {
		if (*iter != 0) {
			primes.push_back(*iter);
			//cout << *iter << " ";
		}
	}

	cout << endl;

	cout << primes[10000] << endl;
	return 0;
}

