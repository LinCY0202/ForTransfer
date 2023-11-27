#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long int n,m,k;
    while(cin >> n >> m >> k){
        vector<long long int> a_set,b_set;
        for(int i=0;i<n;i++){
            int x;cin >> x;
            a_set.push_back(x);
        }
        for(int i=0;i<m;i++){
            int x;cin >> x;
            b_set.push_back(x);
        }
        //sort(a_set.begin(),a_set.end());
        sort(b_set.begin(),b_set.end());
        // for(auto &v:a_set)
        //     cout << v << " ";
        
        int count=0;
        for(int i=0;i<a_set.size();i++){
            int left=0,right=b_set.size()-1;
            while(left<=right){
                if(b_set[(left+right)/2]+a_set[i]==k){
                    count++;
                    break;
                }
                else if(b_set[(left+right)/2]+a_set[i]>k)
                    right=(left+right)/2-1;
                else
                    left=(left+right)/2+1;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}
