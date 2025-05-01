#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
#include <string>
#include <unordered_set>
#include <sstream>

using namespace std;

// Function to check if two words differ by exactly one letter
bool isDoublet(const string& a, const string& b) {
    if (a.length() != b.length()) return false;
    int diffCount = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) diffCount++;
        if (diffCount > 1) return false;
    }
    return diffCount == 1;
}

// BFS to find the shortest sequence of doublets
vector<string> bfs(const string& start, const string& end, const unordered_set<string>& dict) {
    queue<vector<string>> q;
    unordered_set<string> visited;
    q.push({start});
    visited.insert(start);

    while (!q.empty()) {
        vector<string> path = q.front();
        q.pop();
        string currentWord = path.back();

        if (currentWord == end) {
            return path; // Return the path once we reach the target word
        }

        // Try all possible words in the dictionary that are doublets of the current word
        for (const string& word : dict) {
            if (visited.find(word) == visited.end() && isDoublet(currentWord, word)) {
                visited.insert(word);
                vector<string> newPath = path;
                newPath.push_back(word);
                q.push(newPath);
            }
        }
    }

    return {}; // No solution found
}

int main() {
    string line;
    unordered_set<string> dictionary;
    
    // Read dictionary
    while (getline(cin, line) && !line.empty()) {
        dictionary.insert(line);
    }

    // Read word pairs and process each case
    bool firstCase = true;
    while (getline(cin, line)) {
        stringstream ss(line);
        string startWord, endWord;
        ss >> startWord >> endWord;

        if (!firstCase) {
            cout << endl; // Print blank line between cases
        }
        firstCase = false;

        if (dictionary.find(startWord) == dictionary.end() || dictionary.find(endWord) == dictionary.end()) {
            cout << "No solution." << endl;
            continue;
        }

        vector<string> result = bfs(startWord, endWord, dictionary);

        if (result.empty()) {
            cout << "No solution." << endl;
        } else {
            for (const string& word : result) {
                cout << word << endl;
            }
        }
    }

    return 0;
}
