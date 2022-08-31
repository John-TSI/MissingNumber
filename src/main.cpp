// https://leetcode.com/problems/missing-number/

#include<iostream>
#include"../inc/solution.hpp"

int main()
{
	std::vector<int> vec{0,1};
	std::vector<int> vec2{9,6,4,2,3,5,7,0,1};
	std::cout << Solution().missingNumber(vec);  // 2
	std::cout << Solution().missingNumber(vec2);  // 8
	return 0;
}

