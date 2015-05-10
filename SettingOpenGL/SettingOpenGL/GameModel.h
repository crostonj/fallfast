#pragma once

#include "GL\glew.h"
#include "GL\freeglut.h"
#include "VertexFormat.h"
#include <vector>
#include <map>

namespace Models
{
    struct Model {
        unsigned int vao;
        std::vector<unsigned int> vbos;
        Model() {}
    };

    class GameModel
    {
    public:
        GameModel();
        ~GameModel();
        void CreateTriangleModel(const std::string& gameModelName);
        void DeleteModel(const std::string& gameModelName);
        unsigned int GetModel(const std::string& gameModelName);
    private:
        std::map<std::string, Model> GameModelList;//keep our models    
    };
}
