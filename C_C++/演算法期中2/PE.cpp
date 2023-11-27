#include<iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string str;
    while(cin >> str){
        str.erase(0,1); str.erase(str.size()-1,1); //§R«e«á<>

        stringstream ss(str);
        vector<long long int> num;
        string token;

        while (getline(ss, token, ',')) {
            num.push_back(stoll(token));
        }

        vector<long long int> ans;
        for(long long int i=0;i<3 && i<num.size();i++)
            ans.push_back(num[i]);
        // for(auto &v:ans)
        //     cout << v << " " << endl;

        for(long long int i=3;i<num.size();i++){
            long long int max=num[i];
            for(int j=i-3;j>=0;j--){
                if(num[i]+ans[j] > max){
                    max=num[i]+ans[j];
                }
            }
            ans.push_back(max);
        }
        //std::vector<int>::iterator maxElement = std::max_element(numbers.begin(), numbers.end());
        long long int ans_max = *max_element(ans.begin(),ans.end());
        cout << ans_max << endl;
        // for(auto &v:ans)
        //     cout << v << " " << endl;
    }


    return 0;
}
