#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int mid = (n % 2) == 0 ? 0 : (n / 2) + 1;

    int r = n / 2;
    int sum = 1 + n;
    int result = 0;
    while (r--)
    {
        result += sum;
    }

    cout << result + mid << endl;
}
