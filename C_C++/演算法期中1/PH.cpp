#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int num[n];
        for(int i=0;i<n;i++)
            cin >> num[i];
        int dp[n+1];  dp[1]=num[0]; dp[0]=0;
        for(int i=2;i<=n;i++){
            dp[i]=min(dp[i-1],dp[i-2])+num[i-1];
        }
        cout << dp[n] << "\n";
    }
    

    return 0;
}
