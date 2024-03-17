#include <stdio.h>

#define     RETURN__SUCCESS     0

// alignment ON -> we have more than 14 bytes TOTAL
struct _module_on {
    int     int_val;        // 4 bytes
    double  double_val;     // 8 bytes
    short   short_val;      // 2 bytes
} MODULE_ON;

// alignment OFF -> we have 14 bytes TOTAL
struct __attribute__((packed)) {
    int     int_val;        // 4 bytes
    double  double_val;     // 8 bytes
    short   short_val;      // 2 bytes
} MODULE_OFF;

int main(void)
{
    int size_alignment_on = sizeof(MODULE_ON);
    printf("Alignment ON: \nSIZE: [%2d]", size_alignment_on);

    printf(" ");

    int size_alignment_off = sizeof(MODULE_OFF);
    printf("\nAlignment OFF: \nSIZE: [%2d]", size_alignment_off);

    return RETURN__SUCCESS;
}
