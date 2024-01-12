#include <cmath>

namespace mari::vec {
    class vec2 {
        public:
            float x;
            float y;
            int layer;

            vec2(float x, float y) {
                this->x = x;
                this->y = y;
            }
        
        protected:
            float dotProduct();

            void add(vec2 vecb);
            void sub(vec2 vecb);
            void copy(vec2 out);

            float length();
            void normalize();

            void scale(float scaleNum); 
    };

    float vec2::dotProduct() {
        float x = this->x * this->x;
        float y = this->y * this->y;
    
        return x + y;
    }

    void vec2::add(vec2 vecb) {
        this->x += vecb.x;
        this->y += vecb.y;
    }

    void vec2::sub(vec2 vecb) {
        this->x -= vecb.x;
        this->y -= vecb.y;
    }

    void vec2::copy(vec2 out) {
        out.x = this->x;
        out.y = this->y;
    }

    float vec2::length() {
        return sqrtf(this->dotProduct());
    }

    void vec2::normalize() {
        float length, ilength;

        length = this->length();

        if(length) {
            this->x *= 1 / sqrtf(length);
            this->y *= 1 / sqrtf(length);
        }

        return;
    }

    void vec2::scale(float scaleNum) {
        this->x *= scaleNum;
        this->y *= scaleNum;
    }
}