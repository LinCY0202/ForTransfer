while True:
    a=input()
    a=int(a)
    b=a
    a=a/100
    a=int(a)
    a=a%100
    a=int(a)
    c=0
    if(a>=10 and a<=12):
        print('科學麵',end='')
        c=1
    if(b%2==1):
        if(c==1):
            print('+',end='')
        print('飲料',end='')
        c=1
    if(c==0):
        print(0,end='')
    print('')    