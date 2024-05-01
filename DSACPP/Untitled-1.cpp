#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;

// __define-ocg__
int FarthestNodes(string strArr[], int arrLength) {
    // Create an adjacency list to represent the graph
    unordered_map<char, vector<char>> graph;
    for (int i = 0; i < arrLength; ++i) {
        char from = strArr[i][0];
        char to = strArr[i][2];
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    // Perform BFS from each node to find the farthest node
    int maxDistance = 0;
    for (auto& entry : graph) {
        char startNode = entry.first;
        vector<bool> visited(26, false);
        vector<int> distance(26, 0);
        queue<char> q;
        q.push(startNode);
        visited[startNode - 'a'] = true;
        while (!q.empty()) {
            char curr = q.front();
            q.pop();
            for (char neighbor : graph[curr]) {
                if (!visited[neighbor - 'a']) {
                    q.push(neighbor);
                    visited[neighbor - 'a'] = true;
                    distance[neighbor - 'a'] = distance[curr - 'a'] + 1;
                    maxDistance = max(maxDistance, distance[neighbor - 'a']);
                }
            }
        }
    }

    return maxDistance;
}

int main(void) {
    // Example usage
    string A[] = {"b-e", "b-c", "c-d", "a-b", "e-f"};
    int arrLength = sizeof(A) / sizeof(*A);
    cout << FarthestNodes(A, arrLength);
    return 0;
}
