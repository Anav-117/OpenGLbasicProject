#ifndef CAMERA_H
#define CAMERA_H

#include <glad/glad.h>
#include <glfw/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Camera {
public:

	bool firstMouse = true;
	glm::vec3 cameraPos;
	glm::vec3 cameraFront;
	glm::vec3 cameraUp;
	glm::vec3 Direction;
	float pitch = 0.0f;
	float yaw = -90.0f;
	float fov = 45.0f;
	float lastX = 400.0f, lastY = 300.0f;

	Camera(glm::vec3 pos, glm::vec3 front, glm::vec3 up);
	void cameraSetCentre(float X, float Y);
	void cameraSetFOV(float fov);

};

#endif