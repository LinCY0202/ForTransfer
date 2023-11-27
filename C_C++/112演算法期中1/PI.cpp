#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        long long int m,n,k; cin >> n >> m >> k;
        vector<vector<long long int>> board(n+1,vector<long long int>(m+1,0));
        vector<vector<long long int>> dp(n+1,vector<long long int>(m+1,0));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin >> board[i][j];
        if(board[1][1] == -1 || board[1][1] > k){
            cout << -1 << "\n";
            continue;
        }
        else{
            dp[1][1]=k+board[1][1];
            //k+=board[1][1];
        }


        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++){
                if(i == 1 && j == 1)
                    continue;
                if(board[i][j] > max(dp[i-1][j],dp[i][j-1]) || board[i][j] == -1){
                    dp[i][j]==-1;
                }else{
                    if(dp[i-1][j] != -1 || dp[i][j-1] !=-1){
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1])+board[i][j];

                    }

                }

            }
        // for(int i=1;i<=n;i++)
        //     {for(int j=1;j<=m;j++)
        //         cout  << dp[i][j] << " ";
        //     cout  << "\n";
        //     }
        if(!dp[n][m]){
            cout << -1 << "\n";
            continue;
        }

        cout << dp[n][m] << "\n";
    }
    return 0;
}
