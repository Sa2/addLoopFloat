#include<stdio.h>

int main()
{
    float floatNum = 0.1;
    float floatResult = 0;
    double doubleNum = 0.1;
    double doubleResult = 0;

    int loopCnt = 100;
	
    printf("float \t double\n");
    for (int i = 0; i < loopCnt; i++)
    {
        floatResult += floatNum;
        doubleResult += doubleNum;
        printf("%.9f\t%.9f\n", floatResult, doubleResult);
    }
	
    printf("Float Result %.9f\n", floatResult);
    printf("Double Result %.9f\n", doubleResult);

    return 0;
}
