#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;

        int numOfOp = 0;

        while(n1 <= n3 && n2 <= n3){
            if(n1 > n2)
                n2 += n1;
            else
                n1 += n2;
            numOfOp++;
        }
        cout<<numOfOp<<endl;
    }

    return 0;
}