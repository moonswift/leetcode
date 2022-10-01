#include<iostream>
#include<string>
#include <vector>
#include <unordered_map>

class split_palindrome
{
private:
    /* data */
    std::vector<std::vector<std::string>>result;
    std::vector<std::string>path;
public:
    split_palindrome(/* args */) {}
    ~split_palindrome() {}
    void backtracking(const std::string&s, int StartIndex)
    {
        if(StartIndex == s.size())
        {
            result.push_back(path);
            return;
        }
        for(int i = StartIndex; i < s.size(); ++i)
        {
            if(ispalindrome(s, StartIndex, i))
            {
                path.push_back(s.substr(StartIndex, i - StartIndex + 1));
            } 
            else{
                continue;
            }
            backtracking(s, i + 1);
            path.pop_back();            
        }
    }
    bool ispalindrome(const std::string&s, int start, int end)
    {
        for(int i = start, j = end; i < j; ++i, --j)
        {
            if(s[i] != s[j])
            {
                return false;
            }
        }
        return true;
    }
    std::vector<std::vector<std::string>>public_split_palindrome(const std::string&s)
    {
        result.clear();
        path.clear();
        backtracking(s, 0);
        return result;
    }
};
int main()
{
    split_palindrome sp;
    std::string s = "aab";
    sp.public_split_palindrome(s);
    return 0;
}