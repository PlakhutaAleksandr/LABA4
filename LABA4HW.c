#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int A = 0;
    int B = 0;
    int C = 0;
    int portal_open = 0;

    printf("=== ОТКРЫТИЕ ПОРТАЛА ===\n");
    printf("Введите энергию для трех кристаллов (A, B, C через пробел): ");
    scanf("%d %d %d", &A, &B, &C);

    portal_open = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("\n--- РЕЗУЛЬТАТЫ ---\n");
    printf("Портал открыт (1 - да, 0 - нет): %d\n", portal_open);

    return 0;
}