#include<stdio.h>
#include<stdlib.h>
#define years 2022
#define pi 53563.1415
int main()
{
    printf("/0123456789/\n");
    printf("/%2d/\n",years);//������A����X�|�ӡA�G�۰ʶ�� 
    printf("/%10d/\n",years);//�Q�����A��J�|�ӡA�Ѿl���ӥѥ��ɪť� 
    printf("/%-10d/\n",years);//�Q�����A��J�|�ӡA�Ѿl���ӥѥk�ɪť� 
    printf("/%5d/\n",years);
    printf("/%-5d/\n",years);
    printf("\n");
	printf("/0123456789/\n");
    printf("/%f/\n",pi);//�B�I�ƿ�X 
    printf("/%e/\n",pi);//5.356314e+004���5.356314e+004X10��4���� 
    printf("/%4.2f/\n",pi);//�|�����A�p���I��2��
    printf("/%3.1f/\n",pi);//�T�����A�p���I��1��
    printf("/%10.3f/\n",pi);
    printf("/%+4.2f/\n",pi);//+���Ψ���ܸӼƦr�쥻�����t�� 
    printf("/%010.2f/\n",pi);//�Q�����A�p���I��2��A����h���0�ɻ�
    printf("/%10.3e/\n",pi);
    return 0;
}
