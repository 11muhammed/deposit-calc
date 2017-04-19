#include "deposit.h"
#include <stdio.h>
int main(){
	int summa,srok,flag=1;
	printf("deposit Amount\n");
	scanf("%d",&summa);
	
	printf("For how long ?\n");
	scanf("%d",&srok);
	
	flag=conditions(summa,srok);
	if (flag==0){
        return 0;
	}
	
	summa=calc(summa,srok);
	printf("Your input at the time of expiry= %d\n",summa);

	return 0;
}
