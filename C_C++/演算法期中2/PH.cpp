#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    while(cin >> n >> m){
        vector<int> num(n+1);
        vector<int> dp(n+1);//需要幾步才可以上岸
        for(int i=1;i<=n;i++)
            cin >> num[i];
        // for(auto &v:num)
        //     cout << v << " " ;

        for(int i=n;i>0;i--){
            if(num[i]+i>n){
                dp[i]=1;
            }
            else{
                dp[i]=1+dp[num[i]+i];
            }
        }
        int count=0;
        for(auto &v:dp){
            //cout << v << " " << endl;
            if(v<=m)
                count++;
        }
            cout << count-1 << endl ;

    }
    return 0;
}
/*
5 2
4 1 1 1 1

*/
