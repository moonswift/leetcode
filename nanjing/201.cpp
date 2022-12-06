#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
class A
{
    public:
        void print()
        {
            cout<<"This is A"<<endl;
        }
};
 
class B : public A
{
    public:
        void print()
        {
            cout<<"This is B"<<endl;
        }
};
 
int main()
{
    //main2
    A a;
    B b;
    A *p1 = &a;
    A *p2 = &b;
    p1->print();
    p2->print();
    return 0;
}