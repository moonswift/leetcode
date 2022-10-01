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
        if(path.size() == k && !n)
        {
            result.push_back(path);
            return;
        }
        for(int i = 1; i <= 9; ++i)
        {
            if(path.size() <= 3)
            {
                path.push_back(i);
                n-=i;
            }
            backtracking(n, k, i + 1);
            path.pop_back();
        }
    }
};



int main()
{

	return 0;
}