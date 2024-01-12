#include "def.h"

namespace mari::ext {
    float degToRad(float x) {
        float ret = (x * PI) / 180.0f;
        return ret;
    }

    float radToDeg(float x) {
        float ret = (x * 180.0f) / PI;
        return ret;
    }
}