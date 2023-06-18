# Program to generate a random number between 0 and 9

# importing the random module
import random

def hello():
    print( random.randint(1,10) )        # 產生1-10的隨機整數
    print( random.random() )             # 產生 0 到 1 之間的隨機浮點數
    print( random.uniform(1.1,5.4) )     # 產生  1.1 到 5.4 之間的隨機浮點數，區間可以不是整数
    print( random.choice('tomorrow') )   # 從序列中隨機選取一個元素
    print( random.randrange(1,100,2) )   # 生成從1到100的間隔為2的随機整數
    a=[1,3,5,6,7]                
    random.shuffle(a)            #將陣列a中元素順序打亂
    print(a)

hello()