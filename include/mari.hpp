#include <immintrin.h>

// def.h
#define PI 3.14159265358979323846
#define E  2.71828182845904523536

namespace mari::vec {
    // vec2.hpp
    class vec2;
    // vec3.hpp
    class vec3;
    // vec4.hpp
    class vec4;

    // convert.hpp
    vec2 vec3ToVec2(vec3 in);
    vec3 vec2ToVec3(vec2 in);
    vec4 vec3ToVec4(vec3 in);
}

namespace mari::ext {
    // degAndRand.hpp
    float radToDeg(float x);
    float degToRad(float x);

    // simd.hpp
    const __m128 EMPTYM128 = _mm_set1_ps(0.0f);
    __m128 cpuRsqrt(__m128 number);
    float rsqrt(float number);

    // rand.hpp
    float randRaw();
    double randDouble(double max);
    float randFloat(float max);
    int randInt(int max);
}