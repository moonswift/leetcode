#include<iostream>
#include<string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
		unordered_map<int, int>counts;
		int mode = 0, cnt = 0;
		for(int num:nums)
		{
			cout << "counts[num] :" << counts[num] << "\t";
			++counts[num];
			cout << "++counts[num] :" << ++counts[num] << endl;
			if(counts[num] > cnt)
			{
				mode = num;
				cnt = counts[num];
			}
		}
		return mode;      
    }
	//二分查找
	bool searchMatrix(vector<vector<int>>& matrix, int target)
	{
		for(const auto& row: matrix)
		{
			 auto i = lower_bound(row.begin(), row.end(), target);
			if(i != row.end() && *i == target)
			{
				return true;
			}
		}
		return false;
	}
	//Z字查找
	bool searchMatrix_Z(vector<vector<int>>& matrix, int target)
	{
		int m = matrix.size(), n = matrix[0].size();
		int x = m - 1, y = n - 1;
		while (x > m && y >= 0)
		{
			if(matrix[x][y] == target)
				return true;
			else if(matrix[x][y] > target)
				--y;
			else
				++x;
		}
		return false;
		
	}
	//C
	bool searchMatrix_C(int** matrix, int matrixSize, int* matrixColSize, int target)
	{
		int row = matrixSize, col = *matrixColSize;
		int x = 0, y = col - 1;
		for(int i = 0; i < row; i++)
		{
			for(int j = 0; j < col; j++)
			{
				if(*(*(matrix + j)) == target)
				{
					return true;
				}
			}
			*matrix = (*matrix + 1);
		}
		return false;
	}
};
class Building
{
    friend void laoWang1(Building *building);
 public:
	// Building的构造函数，给成员变量赋初�?
	Building()
	{
		m_SittingRoom = "客厅";
		m_bedRoom = "卧室";
	}
	
	string m_SittingRoom;	// 客厅

private:

	string m_bedRoom;		// 卧室
};
void laoWang1(Building *building)
{
	cout << "隔壁老王 全局函数 正在访问：（地址传递） " << building->m_SittingRoom << endl;

	cout << "隔壁老王 全局函数 正在访问：（地址传递） " << building->m_bedRoom << endl;
}
bool isPalindrome(const string& s, int start, int end) {
	for (int i = start, j = end; i < j; i++, j--) {
		if (s[i] != s[j]) {
			return false;
		}
	}
	return true;
}

class Solution_split_huiwen {
private:
    vector<vector<string>> result;
    vector<string> path; // 放已经回文的子串
    void backtracking (const string& s, int startIndex) {
        // 如果起始位置已经大于s的大小，说明已经找到了一组分割方案了
        if (startIndex >= s.size()) {
            result.push_back(path);
            return;
        }
		int i = 50;
        for (i = startIndex; i < s.size(); i++) {
            if (isPalindrome(s, startIndex, i)) {   // 是回文子串
                // 获取[startIndex,i]在s中的子串
                string str = s.substr(startIndex, i - startIndex + 1);
                path.push_back(str);
            } else {                                // 不是回文，跳过
                continue;
            }
            backtracking(s, i + 1); // 寻找i+1为起始位置的子串
            path.pop_back(); // 回溯过程，弹出本次已经填在的子串
        }
    }
    bool isPalindrome(const string& s, int start, int end) {
        for (int i = start, j = end; i < j; i++, j--) {
            if (s[i] != s[j]) {
                return false;
            }
        }
        return true;
    }
public:
    vector<vector<string>> partition(string s) {
        result.clear();
        path.clear();
        backtracking(s, 0);
        return result;
    }
};
int main()
{
    //Building bd;
	//Solution solu;
    //laoWang1(&bd);
	/*vector<int>nums{2, 2, 1, 1, 1, 2, 2};
	int value = 0;
	int res = solu.majorityElement(nums);
	cout << "mode is : ";
	cout << res;*/
	//string s = "hello world";
	//const char *p = s.c_str() + s.size() - 1;
	vector<int>nums{2, 2, 1, 1, 1, 2, 2};
	cout << nums.size();
	return 0;
}