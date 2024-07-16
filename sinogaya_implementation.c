#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sinogaya_stats.h"

// Function to input array from user
void inputArray(int *array, int size) {
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

// Function to calculate mean
double calculateMean(int *array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return (double)sum / size;
}

// Function to calculate median
double calculateMedian(int *array, int size) {
    // Sorting the array (assuming ascending order for simplicity)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Finding the median
    if (size % 2 == 0) {
        return (double)(array[size / 2 - 1] + array[size / 2]) / 2.0;
    } else {
        return array[size / 2];
    }
}

// Function to calculate mode
int calculateMode(int *array, int size) {
    // Implementation of mode calculation goes here
     
    return 0;
}

// Function to calculate variance
double calculateVariance(int *array, int size, double mean) {
    double variance = 0;
    for (int i = 0; i < size; i++) {
        variance += pow(array[i] - mean, 2);
    }
    return variance / size;
}

// Function to calculate standard deviation
double calculateStandardDeviation(double variance) {
    return sqrt(variance);
}

// Main function
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    // Input array elements
    inputArray(array, size);

    // Calculate mean
    double mean = calculateMean(array, size);
    printf("Mean: %.2f\n", mean);

    // Calculate median
    double median = calculateMedian(array, size);
    printf("Median: %.2f\n", median);

    // Calculate mode
    int mode = calculateMode(array, size);
    printf("Mode: %d\n", mode);

    // Calculate variance
    double variance = calculateVariance(array, size, mean);
    printf("Variance: %.2f\n", variance);

    // Calculate standard deviation
    double standardDeviation = calculateStandardDeviation(variance);
    printf("Standard Deviation: %.2f\n", standardDeviation);

    return 0;
}

