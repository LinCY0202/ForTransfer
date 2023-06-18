data=[0]*501
sum=[0]*501
data[1]=1
sum[1]=1
i=2 
thr=1
while(i<501):
    data[i]=data[i-1]+thr*4
    sum[i]=sum[i-1]+data[i]
    thr*=3
    i+=1
try:
    while True:
        n=input()
        n=int(n)
        print(data[n])
        print(sum[n])

except EOFError:
    pass