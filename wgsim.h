#pragma once

#include <stdio.h>
#include <stdint.h>

extern "C" void wgsim_core(FILE *fpout1, FILE *fpout2, FILE *fpmutout, const char *fn, int is_hap,
                           uint64_t N, int dist, int std_dev, int size_l, int size_r, int seed,
                           double ERR_RATE, double MUT_RATE, double INDEL_FRAC,
                           double INDEL_EXTEND, double MAX_N_RATIO);