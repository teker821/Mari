#include <cstdlib>
#include <cstdint>
#include <cmath>
#include <cassert>
#include <cstring>
#include <time.h>

namespace mari::ext {
    float randRaw() {
        // you probably shouldn't use this in a project, but you can do whatever you want

        srand(time(NULL));
        // returns a random value in the range [0.0-1.0)
    
        // start with a bit pattern equating to 1.0
        uint32_t pattern = 0x3f800000;
    
        // get 23 bits of random integer
        uint32_t random23 = 0x7fffff & (rand() << 8 ^ rand());
    
        // replace the mantissa, resulting in a number [1.0-2.0)
        pattern |= random23;
    
        // convert from int to float without undefined behavior
        assert(sizeof(float) == sizeof(uint32_t));
        char buffer[sizeof(float)];
        std::memcpy(buffer, &pattern, sizeof(float));
        float f;
        std::memcpy(&f, buffer, sizeof(float));
    
        return f - 1.0;
    }

    double randDouble(double max) {
        long double rand = (long double)randRaw();
        return floor(rand * max);
    }

    float randFloat(float max) {
        long double rand = (long double)randRaw();
        return floorf(rand * max);
    }

    int randInt(int max) {
        long double rand = (long double)randRaw();
        return (int)floorf(rand * max);
    }

}