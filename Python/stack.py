n=int(input())  
while n>0:  
    k=input()  
    j=(k.split(' '))  
    i=0  
    l=50  
    s=[0]*50  
    p=int(j[0])-1  
    x=0  
    q=0  
    max=-1  
    max1=0  
    while i<len(j)-1:  
        s[int(j[i])]=1  
        if p>0 and int(j[i])>int(j[i+1]):  
            l=int(j[i])  
            while l>=1:  
                if s[l]==0:  
                    max1=l  
                    break  
                l-=1  
            if max1!=int(j[i+1]):  
                x=1  
                print("no")  
                break  
            q=1  
            p-=1  
        if p>0 and int(j[i])<int(j[i+1]) and q==1 and int(j[i+1])<max:  
            x=1  
            print("no")  
            break  
        if i>0 and int(j[i])>int(j[i-1]):     
            p+=int(j[i])-int(j[i-1])-1  
        if p==0:  
            max=0  
            q=0  
        i+=1  
        if max<int(j[i]):  
            max=int(j[i])  
    if x==0:  
        print('Yes')  
    n=n-1