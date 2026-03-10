#include "Question4.h"
#include <cstddef>
double average(double* a, int a_size) {
    if (a_size == 0) return 0.0;

    double sum = 0.0;
    double* ptr = a;

    for (int i = 0; i < a_size; i++) {
        sum += *ptr;
        ptr++;
    }
    return sum / a_size;
}

double* maximum(double* a, int a_size) {
    if (a_size == 0) return NULL;

    double* maxPtr = a;
    double* ptr = a;

    for (int i = 0; i < a_size; i++) {
        if (*ptr > *maxPtr) {
            maxPtr = ptr;
        }
        ptr++;
    }
    return maxPtr;
}
