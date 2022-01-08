#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> coinArr(n);
    for (int i = 0; i < n; i++)
        cin >> coinArr[i];

    int amount;
    cin >> amount;

    //sort in desending order
    sort(coinArr.begin(), coinArr.end(), greater<int>());
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += amount / coinArr[i];
        amount -= amount / coinArr[i] * coinArr[i];
    }
    cout << endl;
    cout << ans << endl;
    return 0;
}