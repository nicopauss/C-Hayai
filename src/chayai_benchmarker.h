#ifndef CHAYAI_BENCHMARKER_H
#define CHAYAI_BENCHMARKER_H

#include "chayai_benchmark_descriptor.h"
#include "chayai_benchmark_pp.h"
#include "chayai_outputter.h"

/// Register benchmark, called by macros
void chayai_register_benchmark(CHayaiBenchmarkDescriptor* descriptor);

/// Set outputter
void chayai_set_outputter(CHayaiOutputter* outputter);

/// Run all registered benchmark
void chayai_run_benchmarks();

#endif // CHAYAI_BENCHMARKER_H
