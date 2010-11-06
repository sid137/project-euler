/*
 * =====================================================================================
 *
 *       Filename:  5.cpp
 *
 *    Description:  http://projecteuler.net/index.php?section=problems&id=5
 *
 *    Solution given
 *    http://www.cut-the-knot.org/Curriculum/Arithmetic/LCM.shtml
 *
 *        Version:  1.0
 *        Created:  11/04/2010 03:56:38 AM CET
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:   (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {

	vector<unsigned int>::size_type limit;

	cout << "Enter the lcm number: " << endl;
	cin >> limit;
	
	vector<unsigned int> numbers(limit);

	for (vector<unsigned int>::size_type idx = 0; idx != numbers.size(); ++idx) 
		numbers[idx] = idx+1;

	bool all_equal = false;
	unsigned int eq_val, min_val, iterations = 0;
	vector<unsigned int>::size_type min_idx;

	while(!all_equal){
		++iterations;
		//Find minimum;
		min_val = numbers[0];
		min_idx = 0;
		for (vector<unsigned int>::size_type midx = 0; midx != numbers.size(); ++midx) {
			if (numbers[midx] < min_val) {
				min_val = numbers[midx];
				min_idx = midx;
			}
		}

		//Increment minimum index
		numbers[min_idx] += min_idx+1;


		// Check to see if we've found LCM
		eq_val = numbers[0];
		all_equal = true;
		for (vector<unsigned int>::const_iterator eq_iter = numbers.begin(); eq_iter != numbers.end(); ++eq_iter) {
		//	cout << *eq_iter << " ";
			if (*eq_iter != eq_val) {
				all_equal = false;
				break;
			}
		}
		//cout <<  endl;

	}

	cout << "The LCM of the numbers from 1 to " << limit << " is found to be " 
		 << numbers[0] << " after " << iterations << " iterations." << endl;
	return 0;
}
