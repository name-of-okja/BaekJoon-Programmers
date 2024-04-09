#include <iostream>

using namespace std;

int main()
{
    int pay, n;

    cin >> pay;
    cin >> n;

    int sum = 0;
    while (n--)
    {
        int v, c;
        cin >> v >> c;
        sum += (v * c);
    }

    if (pay == sum)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
