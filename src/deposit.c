#include "deposit.h"

int calc(int summa, int srok){
if (sum < 100000 ) {
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
