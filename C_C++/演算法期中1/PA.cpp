#include <iostream>
using namespace std;
int count=0;
struct x{
  int a;
  char c;
};

void merge(x arr[], int l, int m, int r){
    int i, j, k;
    int n1=m-l+1;
    int n2=r-m;
    
    x L[n1],R[n2];
    
    for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(j=0;j<n2;j++)
        R[j]=arr[m+1+j];
        
    i=0,j=0;
    k=l;
    
    while(i < n1 && j < n2){
        if(L[i].a <= R[j].a){
            arr[k] = L[i];
            i++;
            count+=j;
        }else{
            arr[k] = R[j];
            j++;
            
        }
        k++;
    }
    
    while(i < n1){
        arr[k] = L[i];
        i++,k++;
        count+=n2;
    }
    while(j < n2){
        arr[k] = R[j];
        j++,k++;
    }
    
}

void merge_sort(x arr[], int l, int r){
    //cout << "test ";
    if(l < r){
        int m=(l+r)/2;
        
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        
        merge(arr,l,m,r);
    }
        
    
    
}



int main(){
    int n;
    cin >> n;
    while(n){
        x num[1001];
        string s;
        for(int i=0;i<n;i++)
            cin >> num[i].a;
        cin >> s;
        for(int i=0;i<s.size();i++)
            num[i].c = s[i];
        

        merge_sort(num,0,n-1);
        for(int i=0;i<n;i++){
            cout << num[i].a << " ";
        }cout << "\n";
        for(int i=0;i<n;i++)
            cout << num[i].c;
        cout << "\n";
        cout << count << "\n";
        count = 0;
        
        cin >> n;
    }
    
    return 0;
}
/*
4
10 6 8 6
ABCC
6
3 6 4 5 5 1
AABBCC
0
Sample Output
6 6 8 10
BCCA
4
1 3 4 5 5 6
CABBCA
8
*/
