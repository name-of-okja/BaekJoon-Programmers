#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        cout << s[0] << s[s.length() - 1] << endl;
    }
    return 0;
}
