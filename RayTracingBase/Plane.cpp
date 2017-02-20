#include "Plane.h"

Plane::Plane(vec3 n,vec3 p,Material *m): Object(m)
{
    normal = n;
    point = p;
}

bool Plane::hit(const Ray& r, float t_min, float t_max, HitInfo& rec) const {

    return false;
}
