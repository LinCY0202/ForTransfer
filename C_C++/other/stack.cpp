#include<iostream>	//�¦ⳡ�����{���X�A���⬰����
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
    int m=5;				//���w����ܼ�m=5
    Stack s1,s2(m),s3(s1);
/*
Stack s1; // �ϥιw�]�غc�l�A�إߤ@�ӪŪ� Stack ����
Stack s2(5); // �ϥαa���@�� int �Ѽƪ��غc�l�A�إߤ@�ӱa���@�Ӥ����� Stack ����
Stack s3(s1); // �ϥνƻs�غc�l�A�إߤ@�ӻP s1 �����ۦP�� Stack ����
*/
    cout<<s1<<s2<<s3;		//���s1�Bs2�Bs3 Stack�����A�ѳ����}�l
    s1<<1<<2<<3;
/* <<:push element �I�s�o�q�{���X�hpush 1,2,3�is1
    Stack& operator<<(int data) {
        push(data);
        return *this;
    }
*/
    cout<<s1<<s2<<s3;		//���s1�Bs2�Bs3 Stack�����A�ѳ����}�l
    s2<<8<<9;			//<<:push element�Apush 8,9�is2
    s3=s2+=s1<<4;		
/*
	1.<<:push element�Apush 4�is1
	2.�Ns1�[�JStack(s2)�������A�Q�ΤU���o�q
	Stack& operator+=(const Stack& other) {
        for (int i = 0; i <= other.top; i++) {
            push(other.arr[i]);
        }
        return *this;
    }
	3.�Ns2���O�����m��s3�A���M��̰O�����m�ۦP�A���U���U��top
*/
    cout<<s1<<s2<<s3;		//���s1�Bs2�Bs3 Stack�����A�ѳ����}�l
    cout<<-s1<<-s2<<-s3<<endl;
/*
	-:pop �Ns1,s2,s3�̤W��������pop�X�A�I�s�U���̬q�{���X
int operator-() {
        return pop();
    }
*/
    cout<<s1<<s2<<s3;		//���s1�Bs2�Bs3 Stack�����A�ѳ����}�l
    cout<<~s1<<~s2<<5<<endl;
/*
	~:peek ��Xs1,s2�̳����������A�åB���R���A�I�s�U���o�q�{���X
	int operator~() {
        return peek();
    }
	�̫��X5
*/
    !s1;
/*
	!:empty stack�Ns1�M�šA�I�s�U���o�q�{���X
    int operator!() {
    	return isEmpty();
	}
*/
    s1<<0<<s2;
/*
	���N0 push�is1�A���ۧ�s2 pop�X��s1�A�I�s�U���o�q�{���X
    Stack& operator<<(Stack& s) {
	    while (!s.isEmpty()) {
	        int data = s.pop();
	        this->push(data);
	    }
	    return *this;
	}
	�`�N�A�o�Ӱʧ@�|�ϱos2�ܬ���
*/
    cout<<s1<<(s2<<-1)<<s3;
/*
�N-1 push�is2�A���L�ѩ�s2�Ms3���O�����m�O�ۦP���A�Gs3�̩����]�|�Q��令-1�A
���s1�Bs2�Bs3 Stack�����A�ѳ����}�l
*/
    return 0;
} 


