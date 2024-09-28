#include<bits/stdc++.h>
using namespace std;

int main()
{
    string cardOnTable;
    vector<string>cardWithHim;

    cin>>cardOnTable;
    for(int i = 0; i<5;i++){
        string s;
        cin>>s;
        cardWithHim.push_back(s);
    }

    for(int i = 0; i<5; i++){
        if(cardWithHim[i][0] == cardOnTable[0] || cardWithHim[i][1] == cardOnTable[1])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    return 0;
}