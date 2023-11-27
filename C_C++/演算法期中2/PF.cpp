#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct sword{
    long long int time;
    long long int punish;

};

bool cmp(sword a,sword b){
    return a.time * b.punish < a.punish * b.time;

}

int main()
{
    long long int n;

    while(cin >> n){
        vector<sword> sw(n);
        for(int i=0;i<n;i++)
            cin >> sw[i].time;
        for(int i=0;i<n;i++)
            cin >> sw[i].punish;

        sort(sw.begin(),sw.end(),cmp);
        long long int ttime = 0;
        long long int tcost = 0;
        for(auto &v: sw){
            ttime += v.time;
            tcost += ttime * v.punish;
            //cout << v.time << " " << v.punish << endl;
        }
        cout << tcost << endl;
    }

    return 0;
}
