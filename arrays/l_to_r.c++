#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
vector<int> a(n + 1);
for (int i = 1; i <= n; i++) {
cin >> a[i];
}
for (int i = 1; i <= n; i++) {
a[i] += a[i - 1];
}
int q;
cin >> q;
while (q--) {
int l, r;
cin >> l >> r;

cout << a[r] - a[l - 1] << endl;
}
}
