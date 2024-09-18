#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin>>num;

    if(num[0] != '9' && num[0] > '4')
    num[0] = '9' - num[0] + '0';

    for(int i = 1; i< num.length(); i++){
        if(num[i] > '4')
        num[i] = '9' - num[i] + '0';
    }

    cout<<num<<endl;
    return 0;
}