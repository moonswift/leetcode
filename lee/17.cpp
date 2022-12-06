#include<iostream>
#include<string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
private:
    const string nums[10] = {
    "", // 0
    "", // 1
    "abc", // 2
    "def", // 3
    "ghi", // 4
    "jkl", // 5
    "mno", // 6
    "pqrs", // 7
    "tuv", // 8
    "wxyz", // 9
};
public:
    vector<string>result;
    string s;
    void backtracking(string digits, int StartIndex)
    {
        if(result.size() == digits.size())
        {
            result.push_back(s);
            return;
        }
        for(int i = StartIndex; i < digits.size(); ++i)
        {
            int digit = digits[i] - '0';
            s.push_back(nums[digit][i]);
            backtracking(digits, i + 1);
            s.pop_back();
        }
    }

};



int main()
{

	return 0;
}