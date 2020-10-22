
/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


*/


//method1: Time Complexity: O(n2); Space Complexity(O(1))
int* twoSums(int *nums, int numsSize, int target, int *returnSize){
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1; j<numsSize-1;j++){
            if(nums[i]+nums[j]==target){
                int* retVal = (int*)malloc(sizeof(int)*2);
                retVal[0] =i;
                retVal[1]=j;
                *returnSize =2;
                return retVal;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}


//method2: Using hashtable
//need to study the HashTable structure ADT for C