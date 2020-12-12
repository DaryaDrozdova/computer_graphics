#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
public:
    unsigned int ID;

    Shader(const char* vertexPath, const char* fragmentPath); //receive the shader code from the file
    

    void use();
   

    void setBool(const std::string& name, bool value) const;
    

    void setInt(const std::string& name, int value) const;
   

    void setFloat(const std::string& name, float value) const;
    

private:
    void checkCompileErrors(unsigned int shader, std::string type);
    
};
#endif