#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
class island
{
public:
    string removeDuplicates(string s) {
    string result;
    for(auto singal_s:s)
    {
        if(result.empty() || result.back() != singal_s)
        {
            result.push_back(singal_s);
        }else{
            result.pop_back();
        }
    }
    return result;
}
};

int main()
{
    return 0;
}