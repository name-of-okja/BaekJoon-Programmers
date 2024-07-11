#include <iostream>
#include <string>

using namespace std;

int main()
{
    int b;
    string s;
    cin >> s >> b;

    cout << stoi(s, 0, b);
    return 0;
}
