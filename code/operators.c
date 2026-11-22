#include <stdio.h>

int main() {
    int marks = 82;
    int attendance = 90;

    // 1 = True, 0 = False
    printf("Passed exam (marks >= 50): %d\n", marks >= 50);
    printf("Full score (marks == 100): %d\n", marks == 100);
    printf("Eligible for honors (marks >= 80 && attendance >= 75): %d\n",
           marks >= 80 && attendance >= 75);

    return 0;
}