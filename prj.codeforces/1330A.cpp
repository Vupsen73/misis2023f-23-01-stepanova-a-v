#include<iostream>
using namespace std;

bool achieve[201];
void solve()
{
    int n, x;
    cin >> n >> x;
    for(int i = 1; i <= n+x; i++)
    {
        achieve[i] = false;
    }
    for(int i = 1; i <= n; i++)
    {
        int rank;
        cin >> rank;
        achieve[rank] = true;
    }
    for(int i = n+x; i >= 1;i--)
    {
        int v = 0;
        for(int j = 1; j <= i; j++)
        {
            if(!achieve[j])
                v++;

        }
        if(v <= x)
        {
            cout << i << endl;
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

}