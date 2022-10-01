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
public:
    void backtracking(vector<int>& candidates, int sum, int target, int StartIndex)
    {

        if(sum == target)
        {
            result.push_back(path);
            return;
        }

        //单层循环逻辑
        for(int i = StartIndex; i < candidates.size() && sum < target; ++i)
        {
            if(candidates[i] > target)
            {
                continue;
            }
            sum+=candidates[i];
            path.push_back(candidates[i]);
            backtracking(candidates, sum, target, i + 1);
            sum-=candidates[i];
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        result.clear();
        path.clear();
        backtracking(candidates, 0, target, 0);
        return result;
    }

};



int main()
{

    vector<int>candidates = {10, 1, 2, 7, 6, 1, 5};
    Solution solu;
    vector<vector<int>>result =  solu.combinationSum(candidates, 8);
    for(auto i = result.begin(); i != result.end(); ++i)
    {
        for(int j = 0; j  < (*i).size(); ++j)
        {
            cout << (*i)[j] << "\t";
        }
        cout << endl;
    }
	return 0;

}