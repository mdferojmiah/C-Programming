#include <stdio.h>
int main() {
    int ft_marks[40] = {86,45,55,78,90,93,50,57,79,89,98,99,79,99,85,89,55,33,44,55,66,29,85,79,54,56,95,96,92,91,35,36,34,37,38,94,96,85,35,21},
    st_marks[40] = {91,35,36,34,37,38,94,96,85,35,21,86,45,55,78,90,93,50,57,79,66,29,85,79,54,56,95,89,89,55,33,44,55,66,29,85,79,54,56,95},
    final_marks[40] = {98,99,79,99,85,89,94,96,90,93,57,79,89,98,99,79,99,85,89,55,33,44,55,66,29,85,79,54,56,95,35,36,34,37,38,35,36,34,37,21};
    int i;
    double total_marks[40];

    for (i = 0; i < 40; i++) {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }

    for (i = 0; i < 40; i++) {
        printf("Roll no: %d\tTotal marks: %.2lf\n", i+1, total_marks[i]);
    }

    return 0;
}