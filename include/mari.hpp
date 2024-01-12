#include <immintrin.h>

namespace mari::vec {
    class vec2;
    class vec3;
    class vec4;
}

namespace mari::ext {
    const __m128 EMPTYM128 = _mm_set1_ps(0.0f);

    __m128 cpuRsqrt(__m128 number);
    float rsqrt(float number);
}