#include <iostream>
#include <vector>
#include "prefixSum.h"

int main() {
    using namespace std;
    int n = 0;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    vector<int> lst(n);
    cout << "Enter " << n << " elements (only 1 or -1): " << endl;
    for(int i = 0; i < n; i++) { //must iterate through to add to the array
        cin >> lst[i];
        if (lst[i] != 1 && lst[i] != -1) { //error case user inputs a number that is not -1 or 1
            std::cerr << "Error: Invalid input. Only 1 or -1.\n";
            return 1;
        }
    }
    bool resultNonNeg = non_neg_prefix_sum(lst);
    bool resultNonPos = non_pos_prefix_sum(lst);

    cout << "Does the array have only non-negative prefix sums? " << (resultNonNeg ? "Yes" : "No") << endl;
    cout << "Does the array have only non-positive prefix sums? " << (resultNonPos ? "Yes" : "No") << endl;

    return 0;
}