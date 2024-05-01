#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {

        size_t pos= word.find(ch)+1;

        reverse(word.begin(),word.begin()+pos);

        return word;
        
    }
    
};

int main()
{


    Solution s;
    cout<<s.reversePrefix("abcdefgd",'d');
}