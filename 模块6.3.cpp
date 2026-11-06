#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char ch;
    while (cin.get(ch)) s += ch;

    int n = (int)s.size();
    for (int i = 0; i < n; ) {
        if (s[i] == '"' && (i == 0 || s[i - 1] != '\\')) {
            cout << s[i];
            ++i;
            while (i < n) {
                cout << s[i];
                if (s[i] == '"' && s[i - 1] != '\\') { ++i; break; }
                ++i;
            }
        }
        else if (s[i] == '/' && i + 1 < n && s[i + 1] == '*') {
            int k = i + 2;
            while (k + 1 < n && !(s[k] == '*' && s[k + 1] == '/')) ++k;
            if (k + 1 >= n) {
                for (int j = i; j < n; ++j) cout << s[j];
                break;
            }
            i = k + 2;
        }
        else { cout << s[i]; ++i; }
    }
    return 0;
}
