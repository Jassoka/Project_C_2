//
// Created by jassoka on 5/30/26.
//

#ifndef MIRADREAM3D_MESH_H
#define MIRADREAM3D_MESH_H
#include "geometry.hpp"
#include "texture_types.hpp"


class Mesh
{
private:
    Material mMaterial = {};
    std::vector<Vertex> mVertices;
    std::vector<Edge> mEdges;
    std::vector<HalfEdge> mHalfEdges;
    std::vector<Face> mFaces;
};
#endif //MIRADREAM3D_MESH_H
