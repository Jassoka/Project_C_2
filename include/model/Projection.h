//
// Created by Mathis Pean on 27/05/2026.
//

#ifndef MIRADREAM3D_PROJECTION_HPP
#define MIRADREAM3D_PROJECTION_HPP

#include <glm/glm.hpp>

class Projection {
public:
    Projection(double FOV, double nearPlane, double farPlane, double aspectRatio);
    const glm::mat4& computePerspectiveMatrix();


private:
    double mFOV;
    double mNearPlane;
    double mFarPlane;
    double mAspectRatio;
    glm::mat4 mPerspectiveMatrix;

};

#endif //MIRADREAM3D_PROJECTION_HPP
