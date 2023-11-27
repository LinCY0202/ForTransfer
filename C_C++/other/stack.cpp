#include<iostream>	//黑色部分為程式碼，紅色為註解
using namespace std;
#define DEFAULT_STACK_SIZE 10
class Stack{
private:
    int top;
    int *arr;
public:
    Stack() {
        arr = new int[DEFAULT_STACK_SIZE];
        top = -1;
    }
    Stack(int s) {
        arr = new int[DEFAULT_STACK_SIZE];
        top = -1;
        top++;
        arr[top]=s;
        
    }
    Stack(const Stack& s) {
        arr = new int[DEFAULT_STACK_SIZE];
        top = s.top;
        for (int i = 0; i <= top; i++) {
               arr[i] = s.arr[i];
        }
    }

    void push(int data) {
        if (top == DEFAULT_STACK_SIZE - 1) {
            cout << "Error: Stack overflow." << endl;
            return;
        }
        top++;
        arr[top] = data;
    }
    int pop() {
        if (top == -1) {
            cout << "Error: Stack underflow." << endl;
            return -1;
        }
        int data = arr[top];
        top--;
        return data;
    }
    int peek() {
        if (top == -1) {
            cout << "Error: Stack underflow." << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty() {
        return top == -1;
    }
    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int operator-() {
        return pop();
    }
    int operator~() {
        return peek();
    }
    int operator!() {
    	return isEmpty();
	}

    Stack& operator<<(int data) {
        push(data);
        return *this;
    }
    Stack& operator+=(const Stack& other) {
        for (int i = 0; i <= other.top; i++) {
            push(other.arr[i]);
        }
        return *this;
    }
    Stack& operator<<(Stack& s) {
	    while (!s.isEmpty()) {
	        int data = s.pop();
	        this->push(data);
	    }
	    return *this;
	}



    friend ostream& operator<<(ostream& os, const Stack& s) {
        if (s.top < 0) {
            os << "Stack is empty" <<endl;
        }
        else {
            os << "Stack contents: " ;
            for (int i = s.top; i >= 0; i--) {
                os << s.arr[i] << " ";
            }
            os << endl;
        }
        return os;
    }

};




int main(){
    int m=5;				//指定整數變數m=5
    Stack s1,s2(m),s3(s1);
/*
Stack s1; // 使用預設建構子，建立一個空的 Stack 物件
Stack s2(5); // 使用帶有一個 int 參數的建構子，建立一個帶有一個元素的 Stack 物件
Stack s3(s1); // 使用複製建構子，建立一個與 s1 完全相同的 Stack 物件
*/
    cout<<s1<<s2<<s3;		//顯示s1、s2、s3 Stack元素，由頂部開始
    s1<<1<<2<<3;
/* <<:push element 呼叫這段程式碼去push 1,2,3進s1
    Stack& operator<<(int data) {
        push(data);
        return *this;
    }
*/
    cout<<s1<<s2<<s3;		//顯示s1、s2、s3 Stack元素，由頂部開始
    s2<<8<<9;			//<<:push element，push 8,9進s2
    s3=s2+=s1<<4;		
/*
	1.<<:push element，push 4進s1
	2.將s1加入Stack(s2)的頂部，利用下面這段
	Stack& operator+=(const Stack& other) {
        for (int i = 0; i <= other.top; i++) {
            push(other.arr[i]);
        }
        return *this;
    }
	3.將s2的記憶體位置給s3，雖然兩者記憶體位置相同，但各有各的top
*/
    cout<<s1<<s2<<s3;		//顯示s1、s2、s3 Stack元素，由頂部開始
    cout<<-s1<<-s2<<-s3<<endl;
/*
	-:pop 將s1,s2,s3最上面的元素pop出，呼叫下面者段程式碼
int operator-() {
        return pop();
    }
*/
    cout<<s1<<s2<<s3;		//顯示s1、s2、s3 Stack元素，由頂部開始
    cout<<~s1<<~s2<<5<<endl;
/*
	~:peek 輸出s1,s2最頂部的元素，並且不刪除，呼叫下面這段程式碼
	int operator~() {
        return peek();
    }
	最後輸出5
*/
    !s1;
/*
	!:empty stack將s1清空，呼叫下面這段程式碼
    int operator!() {
    	return isEmpty();
	}
*/
    s1<<0<<s2;
/*
	先將0 push進s1，接著把s2 pop出給s1，呼叫下面這段程式碼
    Stack& operator<<(Stack& s) {
	    while (!s.isEmpty()) {
	        int data = s.pop();
	        this->push(data);
	    }
	    return *this;
	}
	注意，這個動作會使得s2變為空
*/
    cout<<s1<<(s2<<-1)<<s3;
/*
將-1 push進s2，不過由於s2和s3的記憶體位置是相同的，故s3最底部也會被更改成-1，
顯示s1、s2、s3 Stack元素，由頂部開始
*/
    return 0;
} 


