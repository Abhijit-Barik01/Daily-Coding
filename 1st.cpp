#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string DivisionStringified(int num1, int num2) {
    float result = static_cast<float>(num1) / num2;
    int resultInt = static_cast<int>(ceil(result));
    string formattedStringResult = to_string(resultInt);

    // Check if the result has less than 4 digits
    if (formattedStringResult.length() <= 3) {
        return formattedStringResult; // Return result without commas
    }

    // Insert commas every three digits from the end
    for (int i = formattedStringResult.length() - 3; i > 0; i -= 3) {
        formattedStringResult.insert(i, ",");
    }

    return formattedStringResult;
}

int main(void) {
    cout << DivisionStringified(68417, 67);
    return 0;
}
