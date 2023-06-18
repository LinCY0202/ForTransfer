#include<stdio.h> 
#include<ctype.h>
#include<string.h>
char ch[36]={'A',' ',' ',' ','3',' ',' ','H','I','L',
             ' ','J','M',' ','O',' ',' ',' ','2','T',
			 'U','V','W','X','Y','5','1','S','E',' ',
			 'Z',' ',' ','8',' '};
char reverse(char c){
	if(isalpha(c))
		return ch[c-'A'];
	else
		return ch[c-'1'+26];
}
int main(){
	char s[400];
	
	while(scanf("%s",s)!=-1){
		
		int len=strlen(s);
		int palindrome=1,mirrored=1;
		for(int i=0;i<len/2;i++){
			if(s[i]!=s[len-i-1]){
				palindrome=0;
				break;
			}
		} 
		for(int i=0;i<len/2;i++){
			if(s[i]!=reverse(s[len-1-i])){
				mirrored=0;
				break;
			}
		}
		if(palindrome==1&&mirrored==1)printf("%s -- is a mirrored palindrome.\n\n",s);
		if(palindrome==0&&mirrored==1)printf("%s -- is a mirrored string.\n\n",s);
		if(palindrome==1&&mirrored==0)printf("%s -- is a regular palindrome.\n\n",s);
		if(palindrome==0&&mirrored==0)printf("%s -- is not a palindrome.\n\n",s);
	}
	return 0;
}
/*" "	if the string is not a palindrome and is not a mirrored string
" -- is a regular palindrome."	if the string is a palindrome and is not a mirrored string
" -- is a mirrored string."	if the string is not a palindrome and is a mirrored string
" -- is a mirrored palindrome."	if the string is a palindrome and is a mirrored string
A	A	M	M	Y	Y
B		N		Z	5
C		O	O	1	1
D		P		2	S
E	3	Q		3	E
F		R		4	
G		S	2	5	Z
H	H	T	T	6	
I	I	U	U	7	
J	L	V	V	8	8
K		W	W	9	
L	J	X	X		
*/
