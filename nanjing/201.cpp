#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
int main()
{
    for(int i = 1; i < 10; ++i)
    {
        for(int j = 1; j < 18; ++j)
        {
            for(int k = 1; k < 85; ++k)
            {
                for(float l = 1; l <= 168; ++l)
                {
                    float val = 10 * i + 5 * j + k + l / 2;
                    if(val == 100)
                    {
                        cout << i << "\t" << j << "\t" << k << "\t" << l << endl;
                    }
                }
            }
        }
    }
}