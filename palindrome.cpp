#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(const string& s) {

    for (char c : s) { //iterate through every character in s to check if it is alphabetic (8)
        if (!isalpha(c)) {
            return false;
        }
    }
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (isPalindrome(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
