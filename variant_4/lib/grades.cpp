#include "grades.h"

double calculateAverage(const int* grades, int size) {
    if (size == 0) return 0;

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }

    return (double)sum / size;
}

int findMin(const int* grades, int size) {
    if (size == 0) return 0;

    int min = grades[0];
    for (int i = 1; i < size; i++) {
        if (grades[i] < min) {
            min = grades[i];
        }
    }

    return min;
}

int findMax(const int* grades, int size) {
    if (size == 0) return 0;

    int max = grades[0];
    for (int i = 1; i < size; i++) {
        if (grades[i] > max) {
            max = grades[i];
        }
    }

    return max;
}