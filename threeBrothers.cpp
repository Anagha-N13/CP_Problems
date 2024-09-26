#include<bits/stdc++.h>
using namespace std;

int main()
{
    int bro1,bro2;
    cin>>bro1>>bro2;

    if((bro1 == 1 && bro2 == 2) || (bro1 == 2 && bro2 == 1))
    cout<<"3"<<endl;
    else if((bro1 == 1 && bro2 == 3) || (bro1 == 3 && bro2 == 1))
    cout<<"2"<<endl;
    else
    cout<<"1"<<endl;

    return 0;
}