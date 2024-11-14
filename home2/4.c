#include <stdio.h>

void print_truth_table_implication() {
    printf("A -> B = !A || B\n");
    printf("| A | B | A -> B | !A || B |\n");
    printf("|---|---|--------|---------|\n");
    
    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            int implication = (A == 0 || B == 1); // A -> B = !A || B
            int disjunction = (A == 0 || B == 1); // !A || B
            printf("| %d | %d |   %d    |    %d    |\n", A, B, implication, disjunction);
        }
    }
}

void print_truth_table_equivalence() {
    printf("A <-> B = (A && B) || (!A && !B)\n");
    printf("| A | B | A <-> B | (A && B) || (!A && !B) |\n");
    printf("|---|---|---------|-----------------------|\n");
    
    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            int equivalence = (A == B); // A <-> B
            int equivalence_exp = ((A && B) || (!A && !B)); // (A && B) || (!A && !B)
            printf("| %d | %d |    %d    |          %d          |\n", A, B, equivalence, equivalence_exp);
        }
    }
}

int main() {
    print_truth_table_implication();
    printf("\n");
    print_truth_table_equivalence();
    
    return 0;
}
