#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    while(getline(cin, str)){
        stringstream s(str);
        vector<long long int> num;
        string token;

        while(getline(s, token , ' ')){
            num.push_back(stoll(token));
        }
        // for(auto &v:num)
        //     cout << v << " ";
        long long int Max=num[0];
        long long int Min=num[0];
        long long int max_result=num[0];
        for(int i=1;i<num.size();i++){
            auto end1=Max * num[i], end2=Min * num[i];
            Max=max(max(end1, end2), num[i]);
            Min=min(min(end1, end2), num[i]);
            max_result=max(max_result,Max);
            //cout << Max << " " << Min << " " << max_result << "\n" ;
        }
        cout << max_result << "\n";
    }
}

/*
1 2 3 4 5
-1 5 1 2 88 100 -9 -500
*/
