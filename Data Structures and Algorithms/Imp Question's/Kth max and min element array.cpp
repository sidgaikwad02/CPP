#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cin >> k;

    set<int> s(arr.begin(), arr.end());

    if(k > s.size()) {
        cout << "K is larger than the number of unique elements\n";
        return 1;
    }

    auto itr = s.begin(); // s.begin() returns an iterator to the first element in the set
    advance(itr, k - 1); // advance iterator to the k-th element (k-th smallest)
    cout << "Minimum: " << *itr << "\n";

    itr = s.begin();
    advance(itr, s.size() - k); // advance iterator to the (n-k+1)-th element (k-th largest)
    cout << "Maximum: " << *itr << "\n";

    return 0;
}
