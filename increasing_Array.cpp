#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int ans = 0;

    for (long long int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            int temp = arr[i - 1] - arr[i];
            arr[i] += temp;
            ans += temp;
        }
    }

    cout << ans << endl;
    return 0;
}