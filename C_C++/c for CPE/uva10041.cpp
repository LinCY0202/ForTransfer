/*�Y�b���u�W�n��X�@�I�O����L�I���Z���M�̤p�A
��ܳo���I����L�I�y�Ъ������(�D������)�C
�n��X����ƪ���k�Q��²��A���N�Ҧ��I����m�ƧǡA
�Y���_�ƭ��I�A�h����Ƭ��N����s�ƾڪ���������m���ơF
�Y�����ƭ��I�A�h����Ƭ�������Ӽƪ������ȡC
*/
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		int N;
		int house[500];
		scanf("%d",&N);
		for(int j=0;j<N;j++){
			scanf("%d",&house[j]);
		}
		sort(house,house+N);
		int ans=0;
		if(N&1==1){//n=odd
			for(int j=0;j<N;j++){
				int distances=house[(N-1)/2]-house[j];
				ans+=abs(distances);
			}
		}
		else{
			for(int j=0;j<N;j++){
				int distances=(house[(N-1)/2]+house[(N+1)/2])/2-house[j];
				ans+=abs(distances);
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
