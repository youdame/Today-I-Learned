#include <stdio.h>

/* 나눗셈 법을 이용한 해싱 함수 */
int divisionMethod(char* key, int tableSize) {
    unsigned int hash_key = 0;
    int c;
    while ((c = *key++)) {
        hash_key += c;
    }
    return hash_key % tableSize;
}

int midsquareMethod(char* key, int tableSize) {
    unsigned int hash_key = 0;
    unsigned int squared;
    int midPart;
    int c;
    while ((c = *key++)) {
        hash_key += c;
    }
    squared = hash_key * hash_key;
    midPart = (squared / 100) % 1000; // 제곱값의 중간 부분 추출
    return midPart % tableSize;
}
