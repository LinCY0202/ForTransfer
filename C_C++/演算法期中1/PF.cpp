#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int board[110][110];
int main(){
    int m;  cin >> m;
    while(m--){
        int w,n;
        cin >> w >> n;
        cin.ignore();
        for(int i=0;i<=w;i++)
            for(int j=0;j<=n;j++)
                board[i][j]=0;
        for(int i=0;i<w;i++){
            string str;
            getline(cin,str);
            stringstream s(str);
            vector<int> num;
            string token;
            while(getline(s,token,' ')){
                num.push_back(stoi(token));
            }
            for(int i=1;i<num.size();i++){
                board[num[0]][num[i]]=-1;
            }
            
            num.clear();
            
        }
        int dp[110][110];
        for(int i=0;i<=w;i++)
            for(int j=0;j<=n;j++)
                dp[i][j]=0;
        dp[0][1]=1;
        for(int i=1;i<=w;i++)
            for(int j=1;j<=n;j++){
                if(board[i][j]!=-1){
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
        // for(int i=0;i<=w;i++){
        //     for(int j=0;j<=n;j++)
        //         cout << dp[i][j] << " ";
        //     cout << "\n" ;
        // }
        // cout << "\n";
        // for(int i=0;i<=w;i++){
        //     for(int j=0;j<=n;j++)
        //         cout << board[i][j] << " ";
        //     cout << "\n";
        // }
        cout << dp[w][n] << "\n";
    }
    return 0;
}
/*
2
4 5
1
2 2
3 3 5
4
5 5
1
2 1 2 3 4
3 1 2 3
4 1 2 3 5
5 1 2 3
Sample Output
4
0
*/