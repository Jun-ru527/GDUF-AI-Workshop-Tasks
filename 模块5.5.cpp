#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        
    
        int a[55] = {0}, b[55] = {0}, c[110] = {0};
        int len1 = s1.length(), len2 = s2.length();
        
        
        for (int i = 0; i < len1; i++) a[i] = s1[len1 - 1 - i] - '0';
        for (int i = 0; i < len2; i++) b[i] = s2[len2 - 1 - i] - '0';
        
        
        for (int i = 0; i < len1; i++) {
            for (int j = 0; j < len2; j++) {
                c[i + j] += a[i] * b[j];
            }
        }
        
        
        for (int i = 0; i < len1 + len2; i++) {
            if (c[i] >= 10) {
                c[i + 1] += c[i] / 10; 
                c[i] %= 10;            
            }
        }
        
        
        int len = len1 + len2;
        while (c[len] == 0 && len > 0) len--; 
        
        for (int i = len; i >= 0; i--) {
            cout << c[i];
        }
        cout << endl;
    }
    return 0;
}
