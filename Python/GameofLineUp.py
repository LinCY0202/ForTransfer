n=int(input())
for x in range(n):
    k=int(input())
    s=input()
    str=s.split()
    leng=len(str)

    while(len(str)!=1):
        tame=str.pop(0)
        str.insert(len(str),tame)
        tame=str.pop(0)
        str.insert(len(str),tame)
        str.pop(0)
    print(str[0])
