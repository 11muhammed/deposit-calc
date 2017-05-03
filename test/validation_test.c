#include <stdio.h>
#include <stdlib.h>
#include <ctest.h>
#include <../src/deposit.h>

CTEST(calct, test1){
    ASSERT_EQUAL(900,calc(1000,1));
}
CTEST(calct, test2){
    ASSERT_EQUAL(1020,calc(1000,31));
}
CTEST(calct, test3){
    ASSERT_EQUAL(1060,calc(1000,121));
}
CTEST(calct, test4){
    ASSERT_EQUAL(1120,calc(1000,241));
}
CTEST(calct, test5){
    ASSERT_EQUAL(90000,calc(100000,1));
}
CTEST(calct, test6){
    ASSERT_EQUAL(103000,calc(100000,31));
}
CTEST(calct, test7){
    ASSERT_EQUAL(108000,calc(100000,121));
}
