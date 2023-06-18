import random
number = random.randint(1,20)
# print(number)
frequency = 0
frequencylimit= 6
def a():
    while(frequency<frequencylimit):
        take_number=input()
        take_number=int(take_number)
        if(take_number==number):
            print("great")
            print("GameOver,You win")
            break
        if(take_number>number):
            print("小1點")
        if(take_number<number):
            print("大1點")
        frequency=frequency+1
        print("成功",frequency)
for abc in range(6):
    take_number=input()
    take_number=int(take_number)
    if(take_number==number):
        print("great")
        print("GameOver,You win")
        break
    if(take_number>number):
        print("小1點")
    if(take_number<number):
        print("大1點")
    frequency=frequency+1
    print("成功",frequency)

if(frequency==6):
    print("You lose")