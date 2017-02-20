#ifndef PLANE_H
#define PLANE_H

#include "Object.h"

class Plane: public Object
{
public:
    Plane(vec3 normal,vec3 point,Material *m);
    ~Plane() {}
    bool hit(const Ray& r, float t_min, float t_max, HitInfo& info) const;

private:
    vec3 normal;
    vec3 point;
};

#endif // PLANE_H
