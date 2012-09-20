#include "fresample.h"

/*
  Calculate filter sets.

  nsamp: number of samples per filter

  nfilt: number of filters

  offset: X offset per filter

  cutoff: cutoff frequency, in units of 1/sample

  beta: Kaiser beta parameter
*/

void
lfr_s16_calculate(short *LFR_RESTRICT data, int nsamp, int nfilt,
                  double offset, double cutoff, double beta);

void
lfr_f32_calculate(float *LFR_RESTRICT data, int nsamp, int nfilt,
                  double offset, double cutoff, double beta);
