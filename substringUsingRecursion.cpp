
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int arr[3][2]={{4,5},{2,3},{3,4}};


int n = sizeof(arr)/sizeof(arr[0]);


vector<int> ans;

for(int i=0; i<n; i++)
{
    int idx = -1;
    int result = INT_MAX; 
    for(int j=0;j<n;j++)
    {
        if(arr[j][0] >= arr[i][1]  && arr[j][0]  < result )
        {
            result= min(result,arr[j][0]);
            idx =j;
        }
    }
    ans.push_back(idx);
}

for(int i=0; i<ans.size() ;i++)
{
    cout<<ans[i] <<endl;
}

}

    
