#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Sword {
    long long int time;
    long long int importance;
};

bool compare(const Sword &a, const Sword &b) {
    return a.time * b.importance < b.time * a.importance;
}

int main() {
    long long int n;
    while(cin >> n){


        vector<Sword> swords(n);
        for(int i=0;i < n;i++)
            cin >> swords[i].time;
        for (int i = 0; i < n; ++i) {
            cin >> swords[i].importance;
        }

        sort(swords.begin(), swords.end(), compare);

        long long int total_time = 0;
        long long int total_cost = 0;
        for (const auto &sword : swords) {
            total_time += sword.time;
            total_cost += total_time * sword.importance;
        }

        cout << total_cost << endl;
    }


    return 0;
}
