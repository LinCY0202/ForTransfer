#include<iostream>
#include<vector>
#include<utility>
using namespace std;
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }

    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

vector<int> Bidirectional(int start, int end, vector<pair<int,int> >& num, vector<int> ans){
    if(ans.size()==end){
        if(is_prime(ans[0]+ans[end-1])){
            for(auto &v :ans)
                cout << v << " ";
                cout << endl;
        }
    }

    for(int i=2;i<=end;i++){
        if(num[i].second)
            if(is_prime(start+i)){
                   vector<pair<int,int>> tame_num(num);
                   vector<int> tame_ans(ans);
                   tame_num[i].second=0;
                   tame_ans.push_back(i);
                   Bidirectional(i ,end ,tame_num,tame_ans);
            }
    }
    vector<int> a;
    return a;
}

int main(){
    int n;
    int count=1;
    while(cin >> n){
        vector<pair<int,int>> num;
        vector<int> ans; ans.push_back(1);

        for(int i=0;i<=n;i++)
            num.emplace_back(i,1);
        num[1].second=0;
        cout << "Case " << count << ":" << endl;
        count++;
        Bidirectional(1,n,num,ans);
        cout << endl;

    }

}
