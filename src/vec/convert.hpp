#include "vec2.hpp"
#include "vec3.hpp"
#include "vec4.hpp"

namespace mari::vec {
    vec2 vec3ToVec2(vec3 in) {
        vec2 out(0.0f, 0.0f);
        out.x = in.x;
        out.y = in.y;

        return out;
    }

    vec3 vec2ToVec3(vec2 in) {
        return vec3(in.x, in.y, 0.0f);
    }

    vec4 vec3ToVec4(vec3 in) {
        return vec4(in.x, in.y, in.z, 0.0f);
    }
}