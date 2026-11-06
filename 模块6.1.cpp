#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    int dot = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            dot = i;
            break;
        }
    }

    if (dot == -1) {
        cout << s << endl;
        return 0;
    }

    int p = -1;
    for (int i = dot + 1; i < n; i++) {
        if (s[i] >= '5') {
            p = i;
            break;
        }
    }

    int end = n;

    while (t > 0 && p > dot) {
        t--;
        end = p;

        int cur = p - 1;
        if (cur == dot) cur--;

        if (cur < 0) {
            s = "1" + s;
            dot++;
            end++;
            break;
        }

        s[cur]++;

        while (cur >= 0 && s[cur] > '9') {
            s[cur] = '0';
            cur--;
            if (cur == dot) cur--;
            if (cur >= 0) s[cur]++;
        }

        if (cur < 0) {
            s = "1" + s;
            dot++;
            end++;
            break;
        }

        if (s[cur] >= '5') {
            p = cur;
        } else {
            break;
        }
    }

    int last = end - 1;
    if (last == dot) last--;

    for (int i = end - 1; i > dot; i--) {
        if (s[i] == '0') {
            last--;
        } else {
            break;
        }
    }
    if (last == dot) last--;

    for (int i = 0; i <= last; i++) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}
