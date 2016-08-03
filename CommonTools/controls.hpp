#ifndef CONTROLS_HPP
#define CONTROLS_HPP

//通过鼠标和键盘来移动相

void computeMatricesFromInputs();//读键盘和鼠标操作，然后计算投影视图矩阵
glm::mat4 getViewMatrix();
glm::mat4 getProjectionMatrix();

#endif