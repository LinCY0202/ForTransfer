n=input()
n=int(n)
while n!=-1:
    count=1
    while n!=0:
        count*=n
        n=n-1
    print(count)
    n=input()
    n=int(n)