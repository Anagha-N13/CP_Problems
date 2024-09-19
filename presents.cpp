#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    unordered_map<int,int>inp;
    //instead of a hashmap couldve used an array for simplicity.
    for(int i = 1; i<= n; i++)
    {
        int num;
        cin>>num;

        inp[num] = i;
    }

    for(int i = 1; i<= n; i++){
        cout<<inp[i]<<" ";
    }
    cout<<endl;

    return 0;

}