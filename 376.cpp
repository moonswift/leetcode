
#include<iostream>
#include<string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include<algorithm>
using namespace std;

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() <= 1) return nums.size();
        int curDiff = 0; // 当前一对差值
        int preDiff = 0; // 前一对差值
        int result = 1;  // 记录峰值个数，序列默认序列最右边有一个峰值
        for (int i = 0; i < nums.size() - 1; i++) {
            curDiff = nums[i + 1] - nums[i];
            // 出现峰值
            if ((curDiff > 0 && preDiff <= 0) || (preDiff >= 0 && curDiff < 0)) {
                result++;
                preDiff = curDiff;
            }
        }
        return result;
    }
};

int main()
{
    vector<int>s1 = {0, 0};
    cout << s1.size() << endl;
    Solution solu;
    cout << solu.wiggleMaxLength(s1);
    int result = INT32_MIN, re = INT32_MAX;
    cout << endl << result << endl << re << endl;
    vector<vector<int>>res = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    cout << res.size();
	return 0;

}