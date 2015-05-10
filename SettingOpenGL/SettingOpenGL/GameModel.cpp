#include "GameModel.h"


namespace Models
{
    struct Model {
        unsigned int vao;
        std::vector<unsigned int> vbos;
        Model() {}
    };

    GameModel::GameModel()
    {
    }


    GameModel::~GameModel()
    {
    }

}