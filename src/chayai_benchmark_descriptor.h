#ifndef CHAYAI_BENCHMARKER_DATA_H
#define CHAYAI_BENCHMARKER_DATA_H

#include <stdint.h>

typedef struct CHayaiBenchmarkDescriptor
{
    int64_t (*runFunction)(void);
    char* fixtureName;
    char* benchmarkName;
    unsigned int runs;
    unsigned int iterations;
    
    struct CHayaiBenchmarkDescriptor* next;
} CHayaiBenchmarkDescriptor;



#endif // CHAYAI_BENCHMARKER_DATA_H
