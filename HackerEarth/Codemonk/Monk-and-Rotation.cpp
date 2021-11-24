#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        k %= n;
        int p;
        for (int i = 0; i < n; i++)
        {
            p = a[(i + (n - k)) % n];
            cout << p << " ";
        }
        cout << "\n";
    }
    return 0;
}