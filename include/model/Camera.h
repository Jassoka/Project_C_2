//
// Created by Mathis Pean on 27/05/2026.
//

#ifndef MIRADREAM3D_CAMERA_HPP
#define MIRADREAM3D_CAMERA_HPP

#include <glm/glm.hpp>

class Camera {


public:
    Camera(glm::vec3 up, glm::vec3 right, glm::vec3 lookAt, glm::vec3 position);

    const glm::mat4& computeViewMatrix();

private:
    glm::mat4 mRotationMatrix = glm::mat4();
    glm::mat4 mTranslationMatrix = glm::mat4();
    glm::mat4 mViewMatrix = glm::mat4();
};



#endif //MIRADREAM3D_CAMERA_HPP
