#include "deposit.h"

int calc(int summa, int srok){
if (summa < 100000 ) {
          if (srok < 31 && srok > 0)
            summa*=0.9;
        else if (srok < 121 && srok > 30)
            summa*=1.02;

        else if (srok < 241 && srok > 120)
            summa*=1.06;
        else
            summa*=1.12;
    }
    else {
         if (srok < 31 && srok > 0)
            summa*=0.9;
        else if (srok < 121 && srok > 30)
            summa*=1.03;

        else if (srok < 241 && srok > 120)
            summa*=1.08;
        else
            summa*=1.15;
    }
    return summa;
}
int conditions(int summa, int srok){
if ( summa < 1000 || srok > 365 ) {
	printf("The minimum deposit amount in 1000\nSrok vklada ne bolshe 365 dney\n");
	return 0;
    }
    if (srok < 1){
	printf("The term does not below 1 day\n");
	return 0;
    }	
    return 1;
}
