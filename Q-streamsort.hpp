#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

void streamsort(istream & is) {
    vector<int> numbers;
    int number;
    while (is >> number) {
        numbers.push_back(number);
    }
    
    sort(numbers.begin(), numbers.end());

    cout << "sorted: ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout << numbers[i];
        if (i < numbers.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
}
