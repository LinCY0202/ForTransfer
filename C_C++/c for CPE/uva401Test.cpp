#include <iostream>
#include <string>
#include <cctype>
using namespace std;
char ch[36]={'A',' ',' ',' ','3',' ',' ','H','I','L',
             ' ','J','M',' ','O',' ',' ',' ','2','T',
			 'U','V','W','X','Y','5','1','S','E',' ',
			 'Z',' ',' ','8',' '};
char rev(char);
int main() {
  string s;
  int len,m,p;
  while (getline(cin,s)){
	m=1,p=1;
  	len=s.length();
	for(int i=0;i<len/2;i++){
      if (s[i]!=s[len-1-i]) {
      	p=0;
      	break;
	  }      
    }
	for(int i=0;i<=len/2;i++){
      if (s[i]!=rev(s[len-1-i])) {
      	m=0;
      	break;
	  }      
    } 
	if ((m==1)&&(p==1)) cout << s <<" -- is a mirrored palindrome."<<endl<<endl; 
	if ((m==1)&&(p==0)) cout << s <<" -- is a mirrored string."<<endl<<endl;
	if ((m==0)&&(p==1)) cout << s <<" -- is a regular palindrome."<<endl<<endl;
	if ((m==0)&&(p==0)) cout << s <<" -- is not a palindrome."<<endl<<endl;       
  }
}
char rev(char c){
  if (isalpha(c)){
  	return ch[c-'A'];
  }	else {
  	return ch[c-'1'+26];
  }	
}
