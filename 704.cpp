#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        if(nums.size() == 1 && nums[0] == target)
        {
            return 0;
        }else{
            return -1;
        }
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(nums[mid] > target)
            {
                right = mid - 1;
            }else if(nums[mid] < target)
            {
                left = mid + 1
            }else{
                return mid;
            }
        }
    }
};

int main()
{

    return 0;
}