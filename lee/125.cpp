#include<iostream>
#include<string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution_125 {
public:
    bool isPalindrome(string s) {
        int p1 = 0, p2 = s.size() - 1;
        while(p1 < p2)
        {
            while(p1 < p2 && !isalnum(s[p1]))
            {
                ++p1;
            }
            while(p1 < p2 && !isalnum(s[p2]))
            {
                --p2;
            }
            if(p1 < p2)
            {
                if(tolower(s[p1]) != tolower(s[p2]))
                {
                    return false;
                }
            }
            ++p1;
            --p2;
        }
        return true;
    }
};
int main()
{
    string s = ".,";
    Solution_125 solu_125;
    bool res = solu_125.isPalindrome(s);
    if(res)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}