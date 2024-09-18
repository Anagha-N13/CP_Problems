#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drink = k * l;
    int limes = c * d;

    int reqdrink = drink/(n * nl);
    int reqLimes = limes/n;
    int reqsalt = p/(n*np);
    int ans = min({reqdrink,reqLimes,reqsalt});
    
    cout<<ans<<endl;

    return 0;
}
