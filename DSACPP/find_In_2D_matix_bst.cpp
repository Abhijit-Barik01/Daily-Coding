#include <bits/stdc++.h>
using namespace std;

int search(int mat[4][4],int n,int x)
{
    int i=0;
    int j=n-1;
    while (i >=0 && i <n && j>=0 && j < n)
    {
        if(mat[i][j]== x)
        return x;

        else if(mat[i][j] > x)
          j--;
         else if(mat[i][j] < x)
         i++;
    }
    
 return -1;


}



int main()
{
    int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
 
    // Function call
    cout<< search(mat, 4, 45);
 
    return 0;
}