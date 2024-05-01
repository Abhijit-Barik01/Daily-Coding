#include <iostream>
#include <string>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

string FarthestNodes(string strArr[], int arrLength) {


   unordered_map<char,vector<char>>graph;

   for(int i =0; i< arrLength; i++)
   {
     char fromNode = strArr[i][0];
     char toNode = strArr[i][1];
     graph[fromNode].push_back(toNode);
     graph[toNode].push_back(fromNode);
   }
    int maxdistance = 0;

    for(auto& entry:graph)
    {
      char startNode = entry.first;
      vector<bool>visited(26,false);
      vector<int>distance(26,0);
      queue<char>q;
      q.push(startNode);

      visited[startNode - 'a'] = true;

      while(!q.empty())
      {
           char curr = q.front();
            q.pop();

            for( char neighbor : graph[curr])
            {
              if(!visited[neighbor - 'a'])
              {
                q.push(neighbor);
                visited[neighbor - 'a'] = true;
                distance[neighbor - 'a'] = distance[curr - 'a']+1;
                maxdistance = max(maxdistance,distance[neighbor -'a']);
              }
            }
      }
     

    }
  
  // code goes here  
  return to_string(maxdistance);

}

int main(void) { 
   
  // keep this function call here
  string A[] = {"b-e", "b-c", "c-d", "a-b", "e-f"};
    int arrLength = sizeof(A) / sizeof(*A);
    cout << FarthestNodes(A, arrLength);
    return 0;
    
}