#include <cmath>

namespace mari::vec {
    class vec3 {
        public:
            float x;
            float y;
            float z;

            vec3(float x, float y, float z) {
                this->x = x;
                this->y = y;
                this->z = z;
            }
        
        protected:
            float dotProduct();

            void add(vec3 vecb);
            void sub(vec3 vecb);
            void copy(vec3 out);

            float length();
            void normalize();

            void scale(float scaleNum); 
    };

    float vec3::dotProduct() {
        float x = this->x * this->x;
        float y = this->y * this->y;
        float z = this->z * this->z;
    
        return x + y + z;
    }

    void vec3::add(vec3 vecb) {
        this->x += vecb.x;
        this->y += vecb.y;
        this->z += vecb.z;
    }

    void vec3::sub(vec3 vecb) {
        this->x -= vecb.x;
        this->y -= vecb.y;
        this->z -= vecb.z;
    }

    void vec3::copy(vec3 out) {
        out.x = this->x;
        out.y = this->y;
        out.z = this->z;
    }

    float vec3::length() {
        return sqrtf(this->dotProduct());
    }

    void vec3::normalize() {
        float length, ilength;

        length = this->length();

        if(length) {
            this->x *= 1 / sqrtf(length);
            this->y *= 1 / sqrtf(length);
            this->z *= 1 / sqrtf(length);
        }

        return;
    }

    void vec3::scale(float scaleNum) {
        this->x *= scaleNum;
        this->y *= scaleNum;
        this->z *= scaleNum;
    }
}