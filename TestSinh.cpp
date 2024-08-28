#include <bits/stdc++.h>
using namespace std;

int X[1000];
int n, final = 0;

void ktao() {
    for(int i = 1; i <= n; i++) {
        X[i] = 0;
    }
}

bool check() {
    for(int i = 1; i <= n; i++) {
        if(X[i] == 0) return false;
    }
    return true;
}

void sinh() {
    // Bắt đầu từ bit cuối cùng => đi tìm bit 0 đầu tiên
    // Trong quá trình gặp bit 1 => 0
    int i = n;
    while(i >= 1 && X[i] == 1) {
        X[i] = 0;
        i--;
    }
    if(i == 0) {
        final = 1;
    } else {
        X[i] = 1;
    }
}

int main() {
    cin >> n;
    ktao();
    while(final == 0) {
        for(int i = 1; i <= n; i++) {
            cout << X[i] << " ";
        }
        cout << endl;
        sinh();
    }
}
