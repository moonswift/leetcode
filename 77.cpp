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
    void backtracking(int n, int k, int StartIndex)
    {
        if(path.size() == 4)
        {
            result.push_back(path);
            return;
        }
        for(int i = StartIndex; i < n; ++i)
        {
            path.push_back(i);
            backtracking(n, k, i + 1);
            path.pop_back();
        }

    }
    vector<vector<int>> public_Solution(int n, int k)
    {
        result.clear();
        path.clear();
        backtracking(n, k, 0);
        return result;
    }
};



int main()
{

	return 0;
}