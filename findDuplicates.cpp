#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h> 


int findDuplicateNSquared(std::vector<int>& nums) {
    for(int i = 0; i < nums.size(); ++i) {
        for(int j = 1; j < nums.size(); ++j) {
            if(nums[i] == nums[j])
                return nums[i];
        }
    }
    return -1;
}

int findDuplicateNLogN(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size() - 1; ++i)
        if(nums[i] == nums[i + 1])
            return nums[i];
    return -1;
}

int findDuplicateNSpace(std::vector<int>& nums) {
    std::unordered_set<int> numSet;
    for(auto& num: nums) {
        auto inserted = numSet.insert(num);
        if(!inserted.second)
            return num;
    }
    return -1;
}

// Find the sum of what you would expect from n + 1 elements and the difference will be the duplicate number
// spot on. Bonus points if you know a mathy way to get the expected sum without summing it up in a loop. 
// n(n + 1) / 2
// And the winner is... TYLER! Congrats on your new job at GOOGLE! XP 
// Awesome I expect 150k plus bonuses and stock options 
// hahahhaa rite. gtg!
int findDuplicateSumMethod(std::vector<int>& nums) {
    int n = nums.size() - 1;
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for(auto& num: nums)
        actualSum += num;
    return actualSum - expectedSum;
}

// This method places each number in its corresponding array location, the duplicates will be pushed to the end
int findDuplicateConstantSpace(std::vector<int>& nums) {
    for(int i = 0; i < nums.size(); ++i) {
        while(nums[i] != nums[nums[i] - 1])
            std::swap(nums[i], nums[nums[i] - 1]);
    }
    return nums[nums.size() - 1];
}

// Trying to think of how to do this without modifying >P
int findDuplicateInPlace(std::vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];
    
    while(1) {
        slow = nums[slow];
        fast = nums[nums[fast]];
        if(slow == fast)
            return slow;
    }
    return -1;
}


int main() {
    std::vector<int> nums = {1, 3, 2, 3, 4, 3};
    std::cout << findDuplicateNSquared(nums) << std::endl;
    std::cout << findDuplicateNLogN(nums) << std::endl;
    std::cout << findDuplicateNSpace(nums) << std::endl;
    std::cout << findDuplicateConstantSpace(nums) << std::endl;
    std::cout << findDuplicateInPlace(nums) << std::endl;
    //std::cout << findDuplicateSumMethod(nums) << std::endl;
    return 0;
}
