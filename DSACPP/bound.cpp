#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int> vec ={3,4,5,5,5,6,9,10,11};
    std::vector<int>::iterator index =  std::lower_bound(vec.begin(),vec.end(),5);
    std::cout<< index -vec.begin();
    return 0;
}