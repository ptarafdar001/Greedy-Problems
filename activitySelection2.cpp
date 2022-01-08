//N meetings in one room
#include <bits/stdc++.h>
using namespace std;

int maxMeetings(int start[], int end[], int n)
{
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({start[i], end[i]});
    }

    sort(v.begin(), v.end(), [&](vector<int> &a, vector<int> &b)
         { return a[1] < b[1]; });

    int take = 1;
    int temp = v[0][1];
    for (int i = 1; i < n; i++)
    {
        if (v[i][0] >= temp)
        {
            take++;
            temp = v[i][1];
        }
    }
    return take;
}

int main()
{
    int n;
    cin >> n;

    int start[n];
    int end[n];

    for (int i = 0; i < n; i++)
        cin >> start[i];
    for (int i = 0; i < n; i++)
        cin >> end[i];

    cout << maxMeetings(start, end, n);
    return 0;
}
