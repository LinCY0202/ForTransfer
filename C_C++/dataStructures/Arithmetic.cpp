#include<stdio.h>
#include<string.h>
//8-(3+2*6)/5+4
//(10+22)*(34+4)
//3+1*2+(4+5*6)/(9-7)
//((3+(1*2))+((4+(5*6))/(9-7)))
//1+2+3+4
int main(){
    char str1[101];	
    while(scanf("%s",str1)!=-1){
    	char stack[100];
    	int str2[200];
   		int k=0,j=0;
	    for(int i=0;i<strlen(str1);i++){//j for str2, k for stack
	        if(str1[i]>='0'&&str1[i]<='9'){//number
	            str2[j]=str1[i]-'0';
	            while(str1[i+1]>='0'&&str1[i+1]<='9'){
	              str2[j]*=10;
	              str2[j]+=str1[i+1]-'0';
	              i++;
	            }
	            j++;
	            
	        }
	        else if(str1[i]=='('){
	            stack[k]='(';
	            k++;
	        }
	        else if(str1[i]==')'){
	            while(stack[k-1]!='('){
	                if(stack[k-1]=='+')
	                    	str2[j]=-9999;
	                else if(stack[k-1]=='-')
	                    	str2[j]=-9998;
	                else if(stack[k-1]=='*')
	                    	str2[j]=-9997;
	                else if(stack[k-1]=='/')
	                    	str2[j]=-9996;
	                j++,k--;
	            }
	            k--;
	        }
	        else if(str1[i]=='*'){
	        	if(k!=0)
		            if(stack[k-1]=='*'||stack[k-1]=='/')
		                while(1){
		                    if(stack[k-1]=='(')
		                        break;
		                    if(stack[k-1]=='+')
		                    	break;
		                    else if(stack[k-1]=='-')
		                    	break;
		                    else if(stack[k-1]=='*')
		                    	str2[j]=-9997;
		                    else if(stack[k-1]=='/')
		                    	str2[j]=-9996;
		                    j++;
		                    k--;
		                    if(k==0)
		                        break;
		                }
	            stack[k]='*';
	            k++;
	        }
	        else if(str1[i]=='/'){
	        	if(k!=0)
		            if(stack[k-1]=='*'||stack[k-1]=='/')
		                while(1){
		                    if(stack[k-1]=='(')
		                        break;
		                    if(stack[k-1]=='+')
		                    	break;
		                    else if(stack[k-1]=='-')
		                    	break;
		                    else if(stack[k-1]=='*')
		                    	str2[j]=-9997;
		                    else if(stack[k-1]=='/')
		                    	str2[j]=-9996;
		                    j++;
		                    k--;
		                    if(k==0)
		                        break;
		                }
	            stack[k]='/';
	            k++;
	        }
	        else if(str1[i]=='+'){
	          if(k!=0)
	            if(stack[k-1]=='*'||stack[k-1]=='/'||stack[k-1]=='+'||stack[k-1]=='-')
	                while(1){
	                    if(stack[k-1]=='(')
	                        break;
	                    if(stack[k-1]=='+')
	                    	str2[j]=-9999;
	                    else if(stack[k-1]=='-')
	                    	str2[j]=-9998;
	                    else if(stack[k-1]=='*')
	                    	str2[j]=-9997;
	                    else if(stack[k-1]=='/')
	                    	str2[j]=-9996;
	                    j++;
	                    k--;
	                    if(k==0)
	                        break;
	                }
	            stack[k]='+';
	            k++;
	
	        }
	        else if(str1[i]=='-'){
	          if(k!=0)
	            if(stack[k-1]=='*'||stack[k-1]=='/'||stack[k-1]=='+'||stack[k-1]=='-')
	                while(1){
	                    if(stack[k-1]=='(')
	                        break;
	                    if(stack[k-1]=='+')
	                    	str2[j]=-9999;
	                    else if(stack[k-1]=='-')
	                    	str2[j]=-9998;
	                    else if(stack[k-1]=='*')
	                    	str2[j]=-9997;
	                    else if(stack[k-1]=='/')
	                    	str2[j]=-9996;
	                    j++;
	                    k--;
	                    if(k==0)
	                        break;
	                    
	                }
	            stack[k]='-';
	            k++;
	        }  
	    }
	    k--;
	    while(k>=0){
	        if(stack[k]=='+')
	            str2[j]=-9999;
	        else if(stack[k]=='-')
	            str2[j]=-9998;
	        else if(stack[k]=='*')
	            str2[j]=-9997;
	        else if(stack[k]=='/')
	            str2[j]=-9996;
	        j++,k--;
	    }
	    for(int i=0;i<j;i++){
	    	if(str2[i]==-9999)
	    		printf("+ ");
	    	else if(str2[i]==-9998)
	    		printf("- ");
			else if(str2[i]==-9997)
	    		printf("* ");
	    	else if(str2[i]==-9996)
	    		printf("/ ");
	    	else
	    		printf("%d ",str2[i]);
		}
		printf("\n");
	    int i=2,count=0;
	    while(1){
	    	if(str2[i]==-9999)
	    		str2[i-2]=str2[i-2]+str2[i-1];
	    	else if(str2[i]==-9998)
	    		str2[i-2]=str2[i-2]-str2[i-1];
	    	else if(str2[i]==-9997)
	    		str2[i-2]=str2[i-2]*str2[i-1];
	    	else if(str2[i]==-9996)
	    		str2[i-2]=str2[i-2]/str2[i-1];
	    	int x=0;
	    	if(str2[i]>-10000&&str2[i]<-9995)
	    	for(int l=i;l<j-1;l++){
	    		str2[l-1]=str2[l+1];
				x=1;
			}
			if(x==1){
				j-=2,i=2;
				for(int h=0;h<j;h++){
	    			if(str2[h]==-9999)
	    				printf("+ ");
	    			else if(str2[h]==-9998)
	    				printf("- ");
					else if(str2[h]==-9997)
	    				printf("* ");
	    			else if(str2[h]==-9996)
	    				printf("/ ");
	    			else
	    				printf("%d ",str2[h]);
		
		}
				printf("\n");
			}
			else
				i++;
			if(j==3)
				count++;
			if(count==2){
				printf("%d\n",str2[0]);
				break;
			}
			
		}
	}
	

    return 0;
}
