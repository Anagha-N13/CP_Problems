#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,w,k;
    cin>>k>>n>>w;

    int cost = 0;
    
    int i = 1;
    while(w--){
        cost = cost + k * i;
        i++;
    }

    cout<<(cost-n > 0 ? cost-n : 0)<<endl;
    return 0;
}