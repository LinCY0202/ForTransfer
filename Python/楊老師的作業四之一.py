try:
    while True:
        f=float(input())
        if f<0:
            f=f*-1
        count=0
        if f>=1:
            a=1
            while(f>=2):
                f=f/2
                count=count+1
        else:
            a=-1
            while(f<1):
                f=f*2
                count=count+1
        print(int(count)*a)
except EOFError:
    pass