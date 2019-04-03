#include <stdio.h>

int main() {
    int n, i, s=0;
    scanf("%d", &n);
    for(i=1; ; i++) //for 반목문에서 가운데의 조건이 빠진 경우 무한 반복된다.
    {
        s+=i;
        if(s >= n) break; //조건식의 결과가 참이라면, 가장 가까운 반복 코드블럭의 밖으로 빠져나간다.
    } //반복 코드블럭의 마지막, break; 가 실행되면 반복을 중단하고 여기로 튕겨 나온다.
    printf("%d", s);
}

