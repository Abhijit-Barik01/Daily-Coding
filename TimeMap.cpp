#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans = 0;
        for (int num : left) {
            ans = max(ans, num);
        }
        
        for (int num : right) {
            ans = max(ans, n - num);
        }
        
        return ans;
    }
};


int main()
{

int  n = 4;
  vector<int>left = {1};
   vector<int> right = {};
   Solution obj = Solution();
  cout << obj.getLastMoment(n,left,right);
 
}