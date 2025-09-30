#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int k = 1;
    int m;

    cin >> n;

    while (true)
    {
        m = 37 * k;
        if (m >= n)
        {
            break;
        }
        sum += m;
        k++;
    }

    cout << sum << endl;
    return 0;
}