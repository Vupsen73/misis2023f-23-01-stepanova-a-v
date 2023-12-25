#include <iostream>
using namespace std;

void solve()
{
    int n;
    int a;
    int res;
    cin >> n >> res;
    for(int i = 1; i < n; i++ )
    {
        cin >> a;
        res &= a;
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }


    return 0;
}
