#include <iostream>
#include <unordered_map>

using namespace std;

struct Card {
    char rank;
    char suit;
};

int main() {
    unordered_map<char, int> rankCount;
    Card hand[5];

    // Read input
    for (int i = 0; i < 5; ++i) {
        cin >> hand[i].rank >> hand[i].suit;
        rankCount[hand[i].rank]++;
    }

    // Find the maximum count
    int maxCount = 0;
    for (int i = 0; i < 5; ++i) {
        maxCount = max(maxCount, rankCount[hand[i].rank]);
    }

    cout << maxCount << endl;

    return 0;
}
