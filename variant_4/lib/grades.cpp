#include "grades.h"

double getAverage(const std::vector<int>& grades) {
    int sum = 0;
    for (int g : grades) {
        sum += g;
    }
    return (double)sum / grades.size();
}

int getMin(const std::vector<int>& grades) {
    int min = grades[0];
    for (int g : grades) {
        if (g < min) min = g;
    }
    return min;
}

int getMax(const std::vector<int>& grades) {
    int max = grades[0];
    for (int g : grades) {
        if (g > max) max = g;
    }
    return max;
}