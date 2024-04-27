#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int r;
        string s;
        cin >> r >> s;

        for (int i = 0; i < s.length(); i++)
        {
            cout << string(r, s[i]);
        }

        cout << endl;
    }

    return 0;
}
