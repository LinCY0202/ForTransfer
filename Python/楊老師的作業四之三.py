try:
    while True:
        import struct
        x=float(input())
        if(x==0):
            print('00000000000000000000000000000000')
        else:
            y=struct.unpack('<I',struct.pack('<f',x))
            z=bin(y[0])
            if(x>=0):
                b=len(z)
                while(b<33):
                    print(0,end='')
                    b+=1
                print(0,end='')

            print(z[2:])
except EOFError:
    pass