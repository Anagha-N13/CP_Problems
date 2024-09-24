#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int cap = 0;
    int maxi = INT_MIN;
    for(int i = 0; i< n; i++){
        int in,out;
        cin>>out>>in;
        cap -= out;
        cap += in;
        maxi = max(maxi,cap);
    }

    cout<<maxi<<endl;
    return 0;
}