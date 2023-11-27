#include<stdio.h>
int main(){
    int arr[100]={0};
    for(int i=0;i<100;i++){
        arr[i]=-1;
    }
    arr[0]=1;
    for(int i=1;i<=50;i++){
    	for(int j=0;arr[j]!=-1;j++){
			if(arr[j]>=10){
                if(arr[j+1]==-1){
                    arr[j+1]=0;
                }
                arr[j+1]+=arr[j]/10%10;
                arr[j]-=(arr[j]/10%10)*10;
            }
            if(arr[j]>=100){
                if(arr[j+2]==-1){
                    arr[j+2]=0;
                }
                arr[j+2]+=arr[j]/100;
                arr[j]-=(arr[j]/100)*100;
            }

        }
        for(int j=0;arr[j]!=-1;j++){
            arr[j]*=i;
        }
        for(int j=0;arr[j]!=-1;j++){
			if(arr[j]>=10){
                if(arr[j+1]==-1){
                    arr[j+1]=0;
                }
                arr[j+1]+=arr[j]/10%10;
                arr[j]-=(arr[j]/10%10)*10;
            }
            if(arr[j]>=100){
                if(arr[j+2]==-1){
                    arr[j+2]=0;
                }
                arr[j+2]+=arr[j]/100;
                arr[j]-=(arr[j]/100)*100;
            }
        }
    }    
        for(int k=99;k>=0;k--){
    	if(arr[k]!=-1)
        	printf("%d",arr[k]);
    	}
             
    return 0;
}
