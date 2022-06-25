// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int solve(int i, int j) {
    vector<int> v1, v2;
 
    int p1 = i;
    int p2 = j;
    while (i != 0)
    {
        v1.push_back(i % 2);
        i = i / 2;
    }
    while (j != 0) {
        v2.push_back(j % 2);
        j = j / 2;
    }
 
    reverse(v1.begin(), v1.end());
    reverse(v2.begin(), v2.end());
 
    int m = v1.size(), n = v2.size(), k = 0;
    if (m < n) {
        while (k < m && v1[k] == v2[k]) k++;
    }
    else {
        while (k < n && v1[k] == v2[k]) k++;
    }
 
    return m + n - 2 * k;
}
int main() {
    int x,y;
    cout << solve(x,y);

    return 0;
}