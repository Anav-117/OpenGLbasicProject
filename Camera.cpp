#include "Camera.h"

Camera::Camera(glm::vec3 pos, glm::vec3 front, glm::vec3 up) {
	this->cameraPos = pos;
	this->cameraFront = front;
	this->cameraUp = up;
}

void Camera::cameraSetCentre(float X, float Y) {
	lastX = X;
	lastY = Y;
}

void Camera::cameraSetFOV(float fov) {
	this->fov = fov;
}