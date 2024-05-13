#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "STMain.h"

char separators[] = " ,;\t\n\r\n";
char str_pool[100]; // 읽은 내용을 저장할 버퍼
int sym_table[SYM_TABLE_SIZE][2];

int main() {
    FILE* fp; 
    int result;
    int c; // 읽은 문자를 저장할 변수
    int index_start = 0;
    int index_next = 0;
    int index = 0;
    
    // 파일을 읽기 모드로 열기 (맥에서 fopen_s 안됨)
    // result = fopen_s(&fp, "example.txt", "r");
    // if (result!= 0) {
    //     printf("파일 열기 실패(%d)\n", result);
    //     return -1;
    // }

    // 파일을 읽기 모드로 열기
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return -1;
    }

    while ((c= fgetc(fp)) != EOF) { // 파일 끝까지 문자 하나씩 읽기
        // 구분자를 만나거나 버퍼 크기 제한에 도달했을 때
        // strchr(separators, c) 함수는 c 문자가 separators 배열에 있는지를 확인
        if (strchr(separators, c) != NULL || index_next >= sizeof(str_pool) - 1) {
            if (index_start < index_next) {// 버퍼에 내용이 있을 경우만 출력
                str_pool[index_next] = '\0'; // 문자열 종료
                if (str_pool[index_start] >= '0' && str_pool[index_start] <= '9') { // 문자열이 숫자로 시작
                    printf("Error - start with digit (%s)\n", str_pool + index_start); // 에러 출력 
                    index_next = index_start; // 버퍼 인덱스 초기화
                } 
                else {
                    //index 변수 만들어서 카운트
                    sym_table[index][0] = index_start;
                    sym_table[index++][1] = strlen(str_pool + index_start); //index 업데이트
                    printf("%s\n", str_pool + index_start); // 버퍼의 내용을 화면에 출력 
                    index_start=++index_next; // 버퍼 인덱스 초기화
                }
            }
            if (strchr(separators, c) == NULL) {
                str_pool[index_next++]= (char)c; // 구분자가 아닌 문자를 버퍼에 저장
            }
            continue; // 다음 문자로 이동
        }
        str_pool[index_next++]=(char)c; // 버퍼에 문자 저장
    }
    // 현재까지 버퍼에 읽은 내용이 있는지를 확인
    if (index_start < index_next) { // 마지막 문자열 출력
        str_pool[index_next] = '\0'; // 문자열 종료 
        // 심볼테이블에 값을 넣어놓고 출력하기!
        printf("%s\n", str_pool + index_start); // 버퍼의 내용을 화면에 출력
    }

    // 파일 닫기
    fclose(fp);
    return 0;
}
