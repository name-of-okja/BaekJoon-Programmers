#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int arr[26] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
    int res = s.length();
    for (int i = 0; i < s.length(); i++)
    {
        res += arr[s[i] - 'A'];
    }
    cout << res;
    return 0;
}
