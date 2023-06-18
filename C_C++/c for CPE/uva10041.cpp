/*璝絬璶т翴ㄤㄤ翴禯瞒㎝程
ボ硂翴ㄤ翴畒夹い计(獶キА计)
璶тい计よ猭だ虏虫盢┮Τ翴竚逼
璝Τ计翴玥い计碞俱竤计沮タい丁竚计
璝Τ案计翴玥い计い丁ㄢ计キА
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
