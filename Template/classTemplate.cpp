#include<bits/stdc++.h>
using namespace std;

template<class X>
class Solution
{
    private :
     X val;
    public:
    Solution(X y)
    {
    val = y;
    }

    X calculate()
    {
        return val*val;
    }
};


int main()
{
     Solution<float> s(4.5);
     Solution<int>s1(4);
     cout<<s.calculate() <<endl;

     cout<<s1.calculate();

return  0;
}