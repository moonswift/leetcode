#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution
{
private:
    vector<int>path = {-1, -1};
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
         int left = 0, right = nums.size() - 1;
         int mid = 0, count = 1;
         while(left <= right)
         {
            mid = left + (right - left) / 2;
            if(nums[mid] == target)
            {
                path = {mid, mid};
                while((nums[mid + count] == target || nums[mid - count] == target) && mid +count < nums.size())
                {
                    if(mid + count < nums.size()){
                        if(nums[mid + count] == target)
                        {
                            path[1] = mid + count;
                        }
                    }
                    if(mid - count >= 0){
                        if(nums[mid - count] == target)
                        {
                            path[0] = mid - count;
                        }
                    }
                    ++count;
                }
                if(count == 1)
                {
                    path = {mid, mid};
                }
                return path;
            }else if(nums[mid] > target){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
         }
         return path;
    }

};

int main()
{
    vector<int>res = {7};
    Solution solu;
    vector<int>result = solu.searchRange(res, 7);
    for(auto &i:result)
    {
        cout << i << "\t";
    }
    return 0;
}