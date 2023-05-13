#ifndef DRONE_VECTOR3_H
#define DRONE_VECTOR3_H


class Vector3 {
public:
    float x, y, z;
    operator+(Vector3 other);
    operator-(Vector3 other);
    operator*(float scalar);
};


#endif //DRONE_VECTOR3_H
