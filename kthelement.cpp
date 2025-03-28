#include <bits/stdc++.h>
using namespace std;
int kthLargest(vector<int> &arr, int K) {
    sort(arr.begin(), arr.end(), greater<int>());
    return arr[K - 1];
}
int main() {
    vector<int> arr = {1,4,3,8,4,9,2,5,6};
    int K = 2;
    cout << kthLargest(arr, K);
    return 0;
}