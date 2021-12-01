#include "GuisFirstScene.h"
#include "geometria.h"

Model* somethingIDK = nullptr;
void GuisFirstScene::Init()
{
    SceneManager::MainScene().MainDrawCall()->sort = DrawCall::Sorting::Update;
    SceneManager::MainScene().MainDrawCall()->type = DrawCall::Type::Dynamic;
    //thx nacho

    somethingIDK = new Model(Model::Square(), Vector3(0,1,0), Vector3(0), Vector3(10, 1, 1));
    RendererCore::AddModel(*somethingIDK);
}