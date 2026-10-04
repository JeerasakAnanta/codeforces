#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char s[64];
        scanf("%s", s);
        string t = s;
        int r, c;
        if (sscanf(s, "R%dC%d", &r, &c) == 2 && t[1] >= '0' && t[1] <= '9') {
            string col;
            while (c > 0) {
                c--;
                col += char('A' + c % 26);
                c /= 26;
            }
            reverse(col.begin(), col.end());
            printf("%s%d\n", col.c_str(), r);
        } else {
            size_t i = 0;
            long long col = 0;
            while (isalpha(t[i])) col = col * 26 + (t[i++] - 'A' + 1);
            printf("R%sC%lld\n", t.substr(i).c_str(), col);
        }
    }
}
