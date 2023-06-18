def rev(arr,start:int,end:int):
    before=arr[:start]
    middle=arr[start:end+1]
    after=arr[end+1:]
    middle.reverse()
    arr=before+middle+after
    return arr


try:
    while True:
        n=input()
        num=n.split()
        leng=len(num)
        k=input()
        step=k.split()
        aim=0
        for x in range(int(step[0])):
            while(aim+int(step[x+1])-1<leng):
                num=rev(num,aim,aim+int(step[x+1])-1)
                aim+=int(step[x+1])
            aim=0
        for i in range(leng):
            print(num[i],end=" ")
        print()
except EOFError:
    pass