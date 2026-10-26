#include "NumberAnalyzer.h"

int main()
{
    int values[] = { 10, 25, 7, 42, 15, 3, 30 };
    int size = sizeof(values) / sizeof(values[0]);
    int n = 15;

    NumberAnalyzer analyzer;
    analyzer.displayGreaterThanN(values, size, n);

    return 0;
}