#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string word;
    cin >> word;

    transform(word.begin(), word.end(), word.begin(), ::tolower);

    int freq[26] = {0};

    for (char c : word) {
        freq[c - 'a']++;
    }

    int maxFreq = 0;
    char maxChar;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = 'A' + i;
        } else if (freq[i] == maxFreq) {
            maxChar = '?';
        }
    }

    cout << maxChar << endl;

    return 0;
}