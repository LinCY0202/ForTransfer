#include <iostream>
#include <vector>
using namespace std;


void only_one(vector<vector<int>>& num,int i,int j,int color){
    if(num[i+1][j]==color){
        num[i+1][j]=color+5;
        only_one(num,i+1,j,color);
    }
    if(num[i-1][j]==color){
        num[i-1][j]=color+5;
        only_one(num,i-1,j,color);
    }
    if(num[i][j+1]==color){
        num[i][j+1]=color+5;
        only_one(num,i,j+1,color);
    }
    if(num[i][j-1]==color){
        num[i][j-1]=color+5;
        only_one(num,i,j-1,color);
    }


 }
int main(){
    int n,m;
    int Case=1;
    while(cin >> n >> m){
        vector<vector<int>> num(n+2,vector<int>(m+2,-2));
        int w=0,b=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin >> num[i][j];
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(num[i][j]==1){
                    only_one(num,i,j,num[i][j]);
                    b++;
                }
                else if(num[i][j]==0){
                    only_one(num,i,j,num[i][j]);
                    w++;
                }

                cout << b << " " << w << endl;
                for(int i=0;i<=n+1;i++){
                    for(int j=0;j<=m+1;j++){
                        cout << num[i][j] << " ";
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
        cout << "Case #" << Case << ":" << endl;
        cout << "b: " << b << endl;
        cout << "w: " << w << endl;
        Case++;
    }

    return 0;
}
/*
3 3
1 0 1
1 1 0
0 1 0
5 5
1 1 0 1 1
0 1 0 1 1
0 0 0 0 0
1 0 1 0 1
1 0 0 1 1
*/
                // cout << b << " " << w << endl;
                // for(int i=0;i<=n+1;i++){
                //     for(int j=0;j<=m+1;j++){
                //         cout << num[i][j] << " ";
                //     }
                //     cout << endl;
                // }
                // cout << endl;
