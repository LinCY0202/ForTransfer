#include<stdio.h>         

#include<stdlib.h>      

#include<string.h>      

main()      

{      

 char input[1001];      

 int d,b,c,n,m;      

 while(scanf("%d ",&m)==1)      

  {int a[100]={0},max=0;                     /*�s���~�P�覡*/    

   for(d=0;d<m;d++)   

    {      

   gets(input)!=0;      

   n=strlen(input);      

    for(b=0;b<n;b++)                    /*�P�_�æs�Jint�}�C��*/     

     {      

     if(input[b]<=90&&input[b]>=65)       

      a[input[b]]=a[input[b]]+1;         /*�Ӽƪ��֥[*/  

     if(input[b]>=97&&input[b]<=122)   

      a[input[b]-32]=a[input[b]-32]+1;   

      max=max+n;      

     }        

    }                                   

   for(b=max;b>=1;b--)                   /*�q�ӼƤp*/     

    {       

     for(c=65;c<=90;c++)               /*ASCII�j��*/     

      {      

       if(a[c]==b)      

        printf("%c %d\n",c,b);       

      }        

    }      

  }      

 return 0;           

} 
