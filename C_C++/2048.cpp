#include <stdio.h>
#include <stdlib.h>
#include<string.h> 
#include <time.h>
#define SIZE 4

int gameStart();
int game_loop();
int board[SIZE][SIZE]; 

int gameOver(){
	printf("==========================================\n");
	printf("遊戲結束\n");
	int k=gameStart();
	return k;
}

int gameStart(){	
	printf("開始遊戲\n");
	printf("是 Yes  否 No\n");
	printf("==========================================\n");
	char game_start[3];
	scanf("%s",&game_start);
	if(game_start[0]=='y'||game_start[0]=='Y'){
		system("cls");
    	game_loop();
	}
	return 0;
	
}
void init_board() {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            board[i][j] = 0;
        }
    }
}


int generate_new_block() {
    int i, j;
    int empty_count = 0;
    int empty_cells[SIZE * SIZE][2]; 

    
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                empty_cells[empty_count][0] = i;
                empty_cells[empty_count][1] = j;
                empty_count++;
            }
        }
    }

    if (empty_count > 0) {
        srand(time(NULL));
        int random_index = rand() % empty_count;
        int x = empty_cells[random_index][0];
        int y = empty_cells[random_index][1];
        board[x][y] = (rand() % 2 + 1) * 2; 
    }
    else{
    	int YandN=gameOver();
    	if(!YandN){
    		return 0;
		}
	}
	return 1;
    
}


int print_board() {
    int i, j;
    int over2048=0;
    printf("-------------------------------------------------------------------\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
        	if(board[i][j]==2048)
        		over2048=1;
            printf("|\t%d\t|", board[i][j]);
        }
        printf("\n");
        printf("-------------------------------------------------------------------\n");
    }
    printf("\n");
    if(over2048){
    	gameOver();
    	return 0;
	}
    	
}


int game_loop() {
    int game_over = 0;
    char move[10];
    init_board();
    generate_new_block();
    generate_new_block();
    print_board();

    while (!game_over) {
        printf("輸入移動方向 (w/a/s/d): ");
        scanf(" %s", move);
		if(strlen(move)>1||(move[0]!='w'&&move[0]!='s'&&move[0]!='a'&&move[0]!='d')){
			printf("失敗輸入\n");
		}
		else{
			if(move[0]=='w'){
        	int stack[4]={0};
            int top=-1;
            int x=0;
            for(int i=0;i<SIZE;i++){
                for(int j=0;j<SIZE;j++){
                    
                    if(board[j][i]!=0){
                        top++;
                        stack[top]=board[j][i];
                    }
                        
                    if(top>0)
                    if(stack[top]==stack[top-1]&&x==0){
                        stack[top-1]*=2;
                        stack[top]=0;
                        top--;
                    }
                    else{
                        x=0;
                    }
                }
                for(int j=0;j<SIZE;j++){
                    board[j][i]=stack[j];
                }
                for(int j=0;j<SIZE;j++)
                	stack[j]=0;
                top=-1;
	            }
			}
			if(move[0]=='a'){
				int stack[4]={0};
	            int top=-1;
	            for(int i=0;i<SIZE;i++){
	                int x=0;
	                for(int j=0;j<SIZE;j++){
	                    if(board[i][j]!=0){
	                        top++;
	                        stack[top]=board[i][j];
	                    }
	                    if(top>0)
	                    if(stack[top]==stack[top-1]&&x==0){
	                        stack[top-1]*=2;
	                        stack[top]=0;
	                        top--;
	                        x=1;
	                    }
	                    else{
	                        x=0;
	                    }
	                }
	                for(int j=0,k=0;j<SIZE;j++,k++){
	                    board[i][j]=stack[k];
	                }
	                for(int j=0;j<SIZE;j++)
	                	stack[j]=0;
	                top=-1;
	            }
			}
			if(move[0]=='s'){
				int stack[4]={0};
	        	int top=-1;
	        	int x=0;
	        	for(int i=0;i<SIZE;i++){
	        		for(int j=SIZE-1;j>=0;j--){
	        			if(board[j][i]!=0){
	                        top++;
	                        stack[top]=board[j][i];
	                    }
	        			if(top>0)
	        			if(stack[top]==stack[top-1]&&x==0){
	        				stack[top-1]*=2;
	        				stack[top]=0;
	        				top--;
	        				x=1;
						}
						else{
	                        x=0;
	                    }
					}
					for(int j=SIZE-1,k=0;j>=0;j--,k++){
						board[j][i]=stack[k];
					}
					for(int j=0;j<SIZE;j++)
	                	stack[j]=0;
					top=-1;
				}
			}
			if(move[0]=='d'){
				int stack[4]={0};
	            int top=-1;
	            for(int i=0;i<SIZE;i++){
	                int x=0;
	                for(int j=SIZE-1;j>=0;j--){
	                    if(board[i][j]!=0){
	                        top++;
	                        stack[top]=board[i][j];
	                    }
	                    if(top>0)
	                    if(stack[top]==stack[top-1]&&x==0){
	                        stack[top-1]*=2;
	                        stack[top]=0;
	                        top--;
	                        x=1;
	                    }
	                    else{
	                        x=0;
	                    }
	                }
	                for(int j=SIZE-1,k=0;j>=0;j--,k++){
	                    board[i][j]=stack[k];
	                }
	                for(int j=0;j<SIZE;j++)
	                	stack[j]=0;
	                top=-1;
	            }
			}
			system("cls");
	        if(!generate_new_block())
	        	break;
			if(!print_board())
				break;
		}

    }
    return 0;
}

int main() {    
	printf("==========================================\n");
    printf("該遊戲使用方向鍵讓方塊整體上下左右移動\n");
	printf("如果兩個帶有相同數字的方塊在移動中碰撞\n");
	printf("則它們會合併為一個方塊，且所帶數字變為兩者之和\n");
	printf("每次移動時，會有一個值為2或者4的新方塊出現，所出現的數字都是2的冪\n");
	printf("當值為2048的方塊出現時，遊戲即勝利\n");
	printf("==========================================\n");
	
	gameStart();
    return 0;
}
