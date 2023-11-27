#include <iostream>
#include <vector>
#include <set>
using namespace std;
set<string> ans;
void SaveToSet(vector<vector<int>> &dp, int i, int j, string& s1, string& s2, string str){
    //cout << "debug" << s1 << endl;
    while(i>0 && j>0){
        if(s1[i-1] == s2[j-1]){
            str = s1[i-1]+str;
            // cout << str << endl;
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]){
            i--;
        }
        else if(dp[i][j-1] > dp[i-1][j]){
            j--;
        }
        else{
            SaveToSet(dp,i,j-1,s1,s2,str);
            SaveToSet(dp,i-1,j,s1,s2,str);

            return;
        }
    }
    //cout << str << endl;
    ans.insert(str);

}

int main()
{
    string s1,s2;
    while(cin >> s1 >> s2){
        //cout << s1 << " " << s2 << endl;
        ans.clear();

        int n=s1.size();
        int m=s2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));

        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }

        SaveToSet(dp,n,m,s1,s2,"");
        // if(ans.empty())
        //     cout << "sasd" <<endl;
        for(auto &v:ans)
            cout << v << endl;
    }

    return 0;
}
