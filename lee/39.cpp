#include<iostream>
#include<string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
private:
    vector<vector<int>>result;
    vector<int>path;
    int sum = 0;
public:
    void backtracking(vector<int>& candidates, int target)
    {
        if(sum > target)
        {
            return;
        }
        if(sum == target)
        {
            result.push_back(path);
            return;
        }

        //单层循环逻辑
        for(int i = 0; i < candidates.size(); ++i)
        {
            sum+=candidates[i];
            path.push_back(candidates[i]);
            backtracking(candidates, target);
            sum-=candidates[i];
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        result.clear();
        path.clear();
        backtracking(candidates, target);
        return result;
    }

};



int main()
{

    vector<int>candidates = {2, 3, 6, 7};
    Solution solu;
    solu.combinationSum(candidates, 7);
	return 0;

}