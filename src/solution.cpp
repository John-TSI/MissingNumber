#include"../inc/solution.hpp"

// idea: use Gauss' method for summation of integer range to deduce the missing value
int Solution::missingNumber(std::vector<int>& nums)
{
    int len = nums.size(), maxVal{-1}, sum{0};  // values are unique and >0
    for(int n : nums)
    {
        if(n > maxVal){ maxVal = n; }  // track the largest value found in nums
        sum += n;
    }
    // Gauss' method: sum of integers from 1..n = n*(n+1)/2 ; if maxVal != len then
    // compute the expected sum using the above formula and subtract the actual sum found
    return (maxVal != len) ? len : maxVal*(maxVal+1)/2 - sum;
}