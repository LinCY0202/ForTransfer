#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        if(!n)
            break;
        long long int num[n];
        for(int i=0;i<n;i++)
            cin >> num[i];
		//連續最長子序列和
        long long int ans=0, Max=0;
        for(int i=0;i<n;i++){
            Max=max(num[i],Max+num[i]);
            ans=max(ans,Max);
        }

        cout << ans << "\n";
    }
    

    return 0;
}
