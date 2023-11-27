#include<bits/stdc++.h>
using namespace std;
bool cmp(long long int a, long long int b){
    if(a < 0 && b < 0){         //狦ㄢ常琌璽计
        if(a%2==0 && b%2==0)
            return a < b;
        else if(a%2 && b%2){
        	return b < a;
		}
        else if(a%2==0)
            return 1;
        return 0;
    }else if(a > 0 && b > 0){   //狦ㄢ常琌タ计
        return a < b;
    }else if(a < 0){            //a琌璽计b琌タ计
        if(a%2==0)
            return 1;
        return 0;
    }else{                      //a琌タ计b琌璽计
        if(b%2==0)
            return 0;
        return 1;
    }

}
int main(){
    int n,m;
    while(cin >> n >> m){
        vector<long long int> num(m);
        vector<long long int> ans;
        for(int i=0;i<m;i++)
            cin >> num[i];
        sort(num.begin(),num.end(),cmp);
        int x=1;
        for(int i=0;i<num.size();i++){
            ans.push_back(num[i]);
            if(num[i] < 0 && num[i]%2==0){
                n+=num[i]*-1;

            }
            else if(num[i] >= 0){

                if(num[i]>n){
                    cout << "reset" << "\n";
                    x=0;
                    break;
                }
                n+=num[i];
            }
            else{

                n+=num[i];
                if(n<0){
                    cout << "reset" << "\n";
                    x=0;
                    break;
                }
            }
        }
        if(ans.size() == m && x)
            cout << "I'm on the next level\n";
        for(auto &v:ans)
            cout << v << " ";
        cout << "\n\n";
    }

}
