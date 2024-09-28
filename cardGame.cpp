#include <iostream>
using namespace std;

int count_suneet_wins(int a1, int a2, int b1, int b2) {
    int suneet_wins = 0;
    
    int suneet_rounds = 0, slavic_rounds = 0;
    
    if (a1 > b1) suneet_rounds++;
    else if (a1 < b1) slavic_rounds++;
    
    if (a2 > b2) suneet_rounds++;
    else if (a2 < b2) slavic_rounds++;
    
    if (suneet_rounds > slavic_rounds) suneet_wins++;
    
    suneet_rounds = 0;
    slavic_rounds = 0;
    
    if (a1 > b2) suneet_rounds++;
    else if (a1 < b2) slavic_rounds++;
    
    if (a2 > b1) suneet_rounds++;
    else if (a2 < b1) slavic_rounds++;
    
    if (suneet_rounds > slavic_rounds) suneet_wins++;
    
    return suneet_wins;
}

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        int suneet_wins = count_suneet_wins(a1, a2, b1, b2);
        
        cout << suneet_wins * 2 << endl;
    }

    return 0;
}
























// #include<bits/stdc++.h>
// using namespace std;

// int count_wins(int a1, int a2, int b1, int b2){
//     // int matchups[4][2] = {
//     //     {a1,b1},{a1,b2},{a2,b1},{a2,b2}
//     // };

//     // int wins = 0;
//     // for(int i = 0; i< 4; i++){
//     //     if(matchups[i][0] > matchups[i][1])
//     //     wins++;
//     // }

//     // return wins;

//     // List of all matchups
//     int wins = 0;
    
//     // Check all possible pairs of flips
//     if (a1 > b1 && a2 > b2) wins++; // Suneet wins both matchups a1 vs b1 and a2 vs b2
//     if (a1 > b2 && a2 > b1) wins++; // Suneet wins both matchups a1 vs b2 and a2 vs b1
    
//     return wins;
// }
// int main()
// {

//     int t;
//     cin>>t;

//     while(t--){
//         int a1,a2,b1,b2;
//         cin>>a1>>a2>>b1>>b2;

//         int noOfWins = count_wins(a1,a2,b1,b2);
//         cout<<noOfWins<<endl;
//     }

//     return 0;
// }