try:
    while True:
        f=float(input())
        if f<0:
            f=f*-1
        count=23
        if f>=1:
            while(f>=2):
                f=f/2
            f=f-1
            while(count>0):
                f=f*2
                b=int(f%10) 

                if(b==1):
                    print(1,end='')
                    f=f-1
                else:
                    print(0,end='')
                count=count-1 
                      
        else:
            while(f<1):
                f=f*2
            f=f-1
            while(count>0):
                f=f*2
                b=int(f%10) 

                if(b==1):
                    print(1,end='')
                    f=f-1
                else:
                    print(0,end='')
                count=count-1 
        print()
except EOFError:
    pass