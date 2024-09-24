#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,k;
    cin>>num>>k;

    while(k--){
        if(num % 10 != 0)
            num--;
        else
            num = num / 10;
    }

    cout<<num<<endl;
    return 0;
}