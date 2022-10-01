#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
class island
{
private:
    int Maxarea = 0;

public:
    void dfs(vector<vector<int>> &res, int x, int y)
    {
        if (x < 0 || y < 0)
        {
            return;
        }
        if (x > res.size() || y > res[x].size() || res[x][y] == 0)
        {
            return;
        }
        if (res[x][y])
        {
            ++Maxarea;
            res[x][y] = 0;
        }
        dfs(res, x - 1, y);
        dfs(res, x + 1, y);
        dfs(res, x, y - 1);
        dfs(res, x, y + 1);
    }
    int MaxareaIsland(vector<vector<int>> &res)
    {
        dfs(res, 5, 7);
        return Maxarea;
    }
};

int main()
{
    vector<vector<int>> maps = {
        {1, 2, 1, 0, 0, 0, 0, 0, 2, 3},
        {3, 0, 2, 0, 1, 2, 1, 0, 1, 2},
        {4, 0, 1, 0, 1, 2, 3, 2, 0, 1},
        {3, 2, 0, 0, 0, 1, 2, 4, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 5, 3, 0},
        {0, 1, 2, 1, 0, 1, 5, 4, 3, 0},
        {0, 1, 2, 3, 1, 3, 6, 2, 1, 0},
        {0, 0, 3, 4, 8, 9, 7, 5, 0, 0},
        {0, 0, 0, 3, 7, 8, 6, 0, 1, 2},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 0}};
    island islandquestion;
    cout << islandquestion.MaxareaIsland(maps) << endl;
    int count = 0;
    int val = 3;
    vector<int>nums = {3, 2, 2, 3};
    for(int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] == val)
        {
            ++count;
        }
    }
    cout << nums.size()-count;
    return 0;
}