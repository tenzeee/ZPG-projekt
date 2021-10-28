#include "ObjectFactory.h"

Object* ObjectFactory::initSphere(Model* model, Shader* shader)
{
    Object* object = new SphereObject(shader, model);
    return object;
}

Object* ObjectFactory::initTree(Model* model, Shader* shader)
{
    Object* object = new TreeObject(shader, model);
    return object;
}

Object* ObjectFactory::initSuziFlat(Model* model, Shader* shader)
{
    Object* object = new SuziFlatObject(shader, model);
    return object;
}

Object* ObjectFactory::initSuziSmooth(Model* model, Shader* shader)
{
    Object* object = new TreeObject(shader, model);
    return object;
}

Object* ObjectFactory::initGround(Model* model, Shader* shader)
{
    Object* object = new GroundObject(shader, model);
    return object;
}