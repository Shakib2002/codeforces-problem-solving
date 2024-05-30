 #include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isStrongPassword(const string& password) {
    vector<char> digits;
    vector<char> letters;

    for (char ch : password) {
        if (isdigit(ch)) {
            digits.push_back(ch);
        } else {
            letters.push_back(ch);
        }
    }

 
    if (!is_sorted(digits.begin(), digits.end())) {
        return false;
    }
 
 
    if (!is_sorted(letters.begin(), letters.end())) {
        return false;
    }

 
    bool foundLetter = false;
    for (char ch : password) {
        if (isalpha(ch)) {
            foundLetter = true;
        } else if (foundLetter && isdigit(ch)) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    vector<string> results;
    for (int i = 0; i < t; ++i) {
        int n;
        string password;
        cin >> n >> password;

        if (isStrongPassword(password)) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
