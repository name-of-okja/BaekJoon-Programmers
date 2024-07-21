#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    int N, K;
    cin >> N >> K;

    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            v.push_back(i);
        }

        if (v.size() == K)
        {
            break;
        }
    }

    cout << (v.size() < K ? 0 : v[K - 1]);
}