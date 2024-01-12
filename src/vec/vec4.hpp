#include <cmath>

namespace mari::vec {
    class vec4 {
        public:
            float x;
            float y;
            float z;
            float w;

            vec4(float x, float y, float z, float w) {
                this->x = x;
                this->y = y;
                this->z = z;
                this->w = w;
            }
        
        protected:
            float dotProduct();

            void add(vec4 vecb);
            void sub(vec4 vecb);
            void copy(vec4 out);

            float length();
            void normalize();

            void scale(float scaleNum); 
    };

    float vec4::dotProduct() {
        float x = this->x * this->x;
        float y = this->y * this->y;
        float z = this->z * this->z;
        float w = this->w * this->w;
    
        return x + y + z + w;
    }

    void vec4::add(vec4 vecb) {
        this->x += vecb.x;
        this->y += vecb.y;
        this->z += vecb.z;
        this->w += vecb.w;
    }

    void vec4::sub(vec4 vecb) {
        this->x -= vecb.x;
        this->y -= vecb.y;
        this->z -= vecb.z;
        this->w -= vecb.w;
    }

    void vec4::copy(vec4 out) {
        out.x = this->x;
        out.y = this->y;
        out.z = this->z;
        out.w = this->w;
    }

    float vec4::length() {
        return sqrtf(this->dotProduct());
    }

    void vec4::normalize() {
        float length, ilength;

        length = this->length();

        if(length) {
            this->x *= 1 / sqrtf(length);
            this->y *= 1 / sqrtf(length);
            this->z *= 1 / sqrtf(length);
            this->w *= 1 / sqrtf(length);
        }

        return;
    }

    void vec4::scale(float scaleNum) {
        this->x *= scaleNum;
        this->y *= scaleNum;
        this->z *= scaleNum;
        this->w *= scaleNum;
    }
}