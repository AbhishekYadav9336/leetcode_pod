You are given an array nums consisting of positive integers.
Return the total frequencies of elements in nums such that those elements all have the maximum frequency.
The frequency of an element is the number of occurrences of that element in the array.
Example 1:
Input: nums = [1,2,2,3,1,4]
Output: 4
Explanation: The elements 1 and 2 have a frequency of 2 which is the maximum frequency in the array.
So the number of elements in the array with maximum frequency is 4.
Example 2:
Input: nums = [1,2,3,4,5]
Output: 5
Explanation: All elements of the array have a frequency of 1 which is the maximum.
So the number of elements in the array with maximum frequency is 5.
solution---
    class Solution {
  public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> mp;
        int maxi=INT_MIN, c=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
            maxi=max(maxi, mp[nums[i]]);
        }
         // int a=0;
        // for(int j=0;j<n;j++)
        // {
        //     if(mp[nums[j]]==maxi)
        //     {
        //            a=a+1;
        //     }
        // }
        // return a;
        for(auto it: mp){
            if(it.second==maxi)
            c+=it.second;
        }
        return c;
        
    }
};


