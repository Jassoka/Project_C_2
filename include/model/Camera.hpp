//
// Created by Mathis Pean on 27/05/2026.
//

#ifndef MIRADREAM3D_CAMERA_HPP
#define MIRADREAM3D_CAMERA_HPP

#include <glm/glm.hpp>

class Camera {


    public:
        Camera(glm::vec3 up,glm::vec3 right,glm::vec3 lookAt,glm::vec3 position);

    private:
        glm::vec3 mUp;
        glm::vec3 mRight;
        glm::vec3 mLookAt;
        glm::vec3 mPosition;
};



#endif //MIRADREAM3D_CAMERA_HPP
