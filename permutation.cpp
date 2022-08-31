#include <bits/stdc++.h>
using namespace std;

void f(int n)
{
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    if (n < 4)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }

    int even = 2;
    while (even <= n)
    {
        cout << even << " ";
        even += 2;
    }

    int odd = 1;
    while (odd <= n)
    {
        cout << odd << " ";
        odd += 2;
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    f(n);
    return 0;
}