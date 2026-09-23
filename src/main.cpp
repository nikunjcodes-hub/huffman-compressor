#include <iostream>

using namespace std;

int main() {

    cout << "Huffman compressor" << endl;

    string text;

    cout << "Enter text: ";
    cin >> text;

    int count[26] = {0};

    for(const char& ch : text) {
        count[ch - 'a']++;
    }

    for(char i = 'a'; i <= 'z'; i++) {
        if(count[i - 'a'] != 0) {
            cout << i << ":" << count[i - 'a'] << endl;
        }
    }

    return 0;
}