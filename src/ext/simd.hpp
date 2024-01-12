#include <immintrin.h>

namespace mari::ext {
    const __m128 EMPTYM128 = _mm_set1_ps(0.0f);

    __m128 cpuRsqrt(__m128 number) {
        return _mm_rsqrt_ps(number); // probably should've made this more useful
    }

    float rsqrt(float number) {
        __m128 number128 = _mm_set1_ps(number);
        __m128 realRsqrt = cpuRsqrt(number128);

        float array[4]; // __m128 just points to an array of four 32-bit floats (4 * 32 = 128)
        _mm_storeu_ps(array, realRsqrt);

        return array[0]; // all values in the array should be the same
    }
}