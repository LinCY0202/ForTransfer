data=['']*32
data[0]='1'
data[1]='11'
for j in range(1,31,1):
    i=len(data[j])-1
    while(i>=0):
        count=1
        tame=data[j]
        while(tame[i]==tame[i-1] and i!=0):
            count+=1
            i-=1
        data[j+1]=str(count)+tame[i]+data[j+1]
        i-=1
n=int(input())
while(n!=-1):
    print(data[n])
    n=int(input())