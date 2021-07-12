#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int m[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }

        int inv = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int idx1 = i; idx1 < n; idx1++)
                {
                    for (int idx2 = j; idx2 < n; idx2++)
                    {
                        if (m[i][j] > m[idx1][idx2])
                            inv++;
                    }
                }
            }
        }

        cout << inv << "\n";
    }
    return 0;
}