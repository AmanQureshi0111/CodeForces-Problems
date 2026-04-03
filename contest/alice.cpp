#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

// Function to simulate Alice's movement
bool willMeetAlice(int a, int b, const string &s) {
    int x = 0, y = 0;
    unordered_set<string> visitedPositions;
    visitedPositions.insert("0,0");

    // Calculate Alice's movement after one complete cycle
    for (char move : s) {
        if (move == 'N') y++;
        else if (move == 'E') x++;
        else if (move == 'S') y--;
        else if (move == 'W') x--;

        // Check if Alice meets the Red Queen at (a, b)
        if (x == a && y == b) return true;
        visitedPositions.insert(to_string(x) + "," + to_string(y));
    }

    // After one cycle, Alice's position shift
    int cycleShiftX = x;
    int cycleShiftY = y;

    // Check for subsequent cycles if there's any shift
    for (int i = 0; i < 10; i++) {  // Limit iterations since coordinates are small
        for (const auto &pos : visitedPositions) {
            int posX = stoi(pos.substr(0, pos.find(',')));
            int posY = stoi(pos.substr(pos.find(',') + 1));

            // Check if (posX, posY) matches Red Queen's position
            if (posX + cycleShiftX * i == a && posY + cycleShiftY * i == b) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        if (willMeetAlice(a, b, s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
