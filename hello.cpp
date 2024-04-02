#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        string newStr;

        while (i < word1.length() && j < word2.length()) {
            newStr += word1[i++];
            newStr += word2[j++];
        }

        while (i < word1.length()) {
            newStr += word1[i++];
        }

        while (j < word2.length()) {
            newStr += word2[j++];
        }

        return newStr;
    }
};

int main() {
    Solution solution;
    string word1 = "hello";
    string word2 = "world";
    string merged = solution.mergeAlternately(word1, word2);
    cout << "Merged String: " << merged << endl;
    return 0;
}
