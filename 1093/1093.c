#include <stdio.h>

int main() {
    int n, i, t = 0;
    int a[24] = { 0, };
    //printf("> ");
    scanf("%d", &n); //개수 입력 받기
    for(i = 1; i <= n; i++) //개수 만큼 입력 받기
    {
        scanf("%d", &t); //읽어서
        a[t] = a[t] + 1; // 그 방에 먼저 들어있던 값에 1만큼 더해 다시 저장한다. a[t]+=1 과 같다.
    }
    
    for(i = 1; i <= 23; i++)
    {
        printf("%d ", a[i]);  //1~23 번 배열에 저장되어있는 값 출력하기
    }
    

    return 0;
    
}

