//
// Created by jassoka on 5/30/26.
//

#include "model/Projection.h"
#include <cmath>

Projection::Projection(const double FOV, const double nearPlane, const double farPlane, const double aspectRatio):
    mFOV(FOV), mNearPlane(nearPlane), mFarPlane(farPlane), mAspectRatio(aspectRatio)
{
}

const glm::mat4& Projection::computePerspectiveMatrix()
{
    const double f = mFarPlane;
    const double n = mNearPlane;
    const double s = 1.0f / std::tan(mFOV / 2.0f);

    mPerspectiveMatrix = glm::mat4(
        s / mAspectRatio, 0.0f, 0.0f,        0.0f,
        0.0f,              s,    0.0f,        0.0f,
        0.0f,              0.0f, f / (f - n), 1.0f,
        0.0f,              0.0f, -(f * n) / (f - n), 0.0f
    );
    return mPerspectiveMatrix;
}
