#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str)){
        stringstream s(str);
        vector<int>num;
        string token;
        while(getline(s,token,' ')){
            num.push_back(stoi(token));
        }
		//sort(num.begin(),num.end());
        int key;    cin >> key;
        int l=0,r=num.size()-1;
        int count=0;
        bool find_it=false;
        while(l<=r){
            int m=(r+l)/2;
            if(num[m] == key){
                find_it=true;
                break;
            }
            else if(num[m] < key){
                l=m+1;
            }
            else
                r=m-1;
            count++;    
        }
        if(find_it)
            cout << count << "\n";
        else
            cout << -1 << "\n";
        cin.ignore();
    }

    return 0;
}
