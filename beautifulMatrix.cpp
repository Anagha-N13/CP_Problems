#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mat[5][5];

    
    int posi = 0, posj = 0;
    for(int i =0; i<5;i++){
        for(int j =0; j<5; j++){
            cin>>mat[i][j];
            if(mat[i][j] == 1){
                posi = i;
                posj = j;
            }
        }

    }

    if(mat[2][2] == 1)
    cout<<"0"<<endl;

    else{
        int moves = 0;

        while(posi != 2){
            if(posi < 2){
                posi++;
                moves++;
            }
            else
            {
                posi--;
                moves++;
            }
        }
        while(posj != 2){
            if(posj < 2){
                posj++;
                moves++;
            }
            else
            {
                posj--;
                moves++;
            }
        }

        cout<<moves<<endl;
    }
    return 0;
}