#ifndef HEADER_H
#define HEADER_H

// Function declarations
void inputArray(int *array, int size);
double calculateMean(int *array, int size);
double calculateMedian(int *array, int size);
int calculateMode(int *array, int size);
double calculateVariance(int *array, int size, double mean);
double calculateStandardDeviation(double variance);

#endif
