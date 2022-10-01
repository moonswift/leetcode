#include<iostream>
#include<string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution_88 {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1, p2 = n - 1;
        int cur_back = m + n -1;
        while(p1 >= 0 || p2 >= 0)
        {
            if(p1 == -1){
                nums1[cur_back--] = nums2[p2--];
            }
            else if(p2 == -1){
                nums1[cur_back--] = nums1[p1--];
            }
            else if(nums1[p1] > nums2[p2]){
                nums1[cur_back--] = nums1[p1--];
            }
            else{
                nums1[cur_back--] = nums2[p2--];
            }
            //nums1[cur_back--] = nums1[cur_back--];
        }
    }
};
int main()
{
    Solution_88 solu;
    vector<int>a = {1, 2, 3, 0, 0, 0};
    vector<int>b = {2, 5, 6};
    solu.merge(a, 3, b, 3);
    for(auto i = a.begin(); i != a.end(); ++i)
    {
        cout << *i << "\t";
    }
    return 0;
}