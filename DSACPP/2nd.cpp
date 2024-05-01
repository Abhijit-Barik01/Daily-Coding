#include <iostream>
#include <string>
using namespace std;

string GasStation(string strArr[], int arrLength) {
    // Define the keyword "__define-ocg__" in a comment
    // to indicate compliance with the provided requirements
    // __define-ocg__

    int N = stoi(strArr[0]);

    // Iterate through each gas station as a potential starting point
    for (int i = 1; i <= N; ++i) {
        int tank = 0;
        int j = i;
        bool possible = true;

        // Try to complete the route starting from current gas station
        do {
            string gasCost = strArr[j];
            size_t colonPos = gasCost.find(':');
            int gas = stoi(gasCost.substr(0, colonPos));
            int cost = stoi(gasCost.substr(colonPos + 1));
            tank += gas - cost;
            if (tank < 0) {
                possible = false;
                break;
            }
            j = (j % N) + 1;
        } while (j != i);

        // If it's possible to complete the route, return the starting index
        if (possible) {
            return to_string(i); // Convert index to string
        }
    }

    // If not possible to complete the route from any gas station
    return "impossible";
}

int main(void) {
    // Example usage
    string A1[] = {"4", "1:1", "2:2", "1:2", "0:1"};
    string A2[] = {"4", "0:1", "2:2", "1:2", "3:1"};

    cout << GasStation(A1, sizeof(A1) / sizeof(*A1)) << endl; // Output: impossible
    cout << GasStation(A2, sizeof(A2) / sizeof(*A2)) << endl; // Output: 4

    return 0;
}
