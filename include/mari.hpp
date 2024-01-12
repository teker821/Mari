#include <immintrin.h>

// def.h
#define PI 3.14159265358979323846
#define E  2.71828182845904523536

namespace mari::vec {
    class vec2;
    class vec3;
    class vec4;
}

namespace mari::ext {
    // simd.hpp
    const __m128 EMPTYM128 = _mm_set1_ps(0.0f);

    // degAndRand
    float radToDeg(float x);
    float degToRad(float x);

    __m128 cpuRsqrt(__m128 number);
    float rsqrt(float number);

    // rand.hpp
    float randRaw();
    double randDouble(double max);
    float randFloat(float max);
    int randInt(int max);
}