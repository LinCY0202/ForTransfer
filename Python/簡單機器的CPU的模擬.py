memory=[0 for i in range(257)] # 記憶體 254 words
register=[0 for i in range(16)] # 暫存器 16 個
pc=0 #程式記數器 program counter
ir=0 #指令暫存器 Instruction Register
noi=int(input())        # 讀入指令數 
for i in range(noi):    # load instructions to memeory
   memory[i]=int(input(),16) # instruction以16進位讀入

while True:          # machine cycle 機器循環
   ir=memory[pc]     # 指令抓取 fetch instruction
   opcode=ir>>12         # 解碼 取得op code 
   Rd =int(hex(memory[pc])[3],16)
   Rs1=int(hex(memory[pc])[4],16)
   Rs2=int(hex(memory[pc])[5],16)# 取得 Rd 目的地暫存器 ,Rs1 來源暫存器1 ,Rs2 來源暫存器2
   Ms =int(hex(memory[pc])[4],16)*16+int(hex(memory[pc])[5],16)
   Md =int(hex(memory[pc])[3],16)*16+int(hex(memory[pc])[4],16)
   #  Ms 來源記憶體位址, Md 目的地記憶體位址
   pc=pc+1                     # pc 指向下一指令所在位址
   if opcode==0:      # 解碼執行指令碼 (參考指令表)
      break
   elif opcode==1:
      memory[Md]=int(input())
      register[Rd]=memory[Md]
   elif opcode==2:
      memory[Md]=register[Rs2]
      print(memory[Md])
   elif opcode==3:
      register[Rd]=register[Rs1]+register[Rs2]
   elif opcode==4:
      register[Rd]=register[Rs1]+register[Rs2]
   elif opcode==5:
      register[Rd]=register[Rs1]
   elif opcode==6:
      register[Rd]=~register[Rs1]
   elif opcode==7:
      register[Rd]=register[Rs1]&register[Rs2]
   elif opcode==8:
      register[Rd]=register[Rs1]|register[Rs2]
   elif opcode==9:
      register[Rd]=register[Rs1]^register[Rs2]
   elif opcode==10:
      register[Rd]=register[Rd]+1
   elif opcode==11:
      register[Rd]=register[Rd]-1
   elif opcode==12:
       if(Rs2==0):
        a=bin(register[Rd])[2:]
        l=8-len(a)
        a='0'*l+a
        a=a[len(a)-Rs1:]+a[0:len(a)-Rs1]
        register[Rd]=int(a,2)
       else:
        a=bin(register[Rd])[2:]
        l=8-len(a)
        a='0'*l+a
        a=a[Rs1:]+a[0:Rs1]
        register[Rd]=int(a,2)
   elif opcode==13:
       if register[0]!=register[Rd]:
           pc=Ms
   elif opcode==14:
      memory[Md]=(input())
      register[Rd]=memory[Md]
   elif opcode==15:
      memory[Md]=Rs2
      print(memory[Md])
   else:
      break