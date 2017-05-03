#include <stdio.h>
#include <stdlib.h>
#include <ctest.h>
#include <../src/deposit.h>

//Check function conditions

CTEST(cond, test1){
    ASSERT_EQUAL(0,conditions(-1,1000));
}
CTEST(cond, test2){
    ASSERT_EQUAL(0,conditions(1,365));
}
CTEST(cond, test3){
    ASSERT_EQUAL(0,conditions(1000,366));
}
CTEST(cond, test4){
    ASSERT_EQUAL(1,conditions(1500,365));
}
CTEST(cond, test5){
    ASSERT_EQUAL(1,conditions(1000,300));
}
CTEST(cond, test6){
    ASSERT_EQUAL(0,conditions(1000,-6));
}
CTEST(cond, test7){
   ASSERT_EQUAL(1,conditions(1000,330));
}

