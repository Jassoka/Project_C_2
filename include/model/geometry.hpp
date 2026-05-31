//
// Created by Mathis Pean on 27/05/2026.
//

#ifndef MIRADREAM3D_GEOMETRY_HPP
#define MIRADREAM3D_GEOMETRY_HPP

#include <cstdint>
#include <vector>

struct Vertex
{
    float x, y, z;
    float nx, ny, nz;
    float u, v;
};

struct Edge
{
    uint32_t origin;
    uint32_t end;
};

using Face = std::vector<uint32_t>;

/**
 * @brief Oriented edge
 */
struct HalfEdge {
    uint32_t next;
    uint32_t prev;
    /**
 * @brief Index of oppposite HalfEdge
 */
    uint32_t twin;
    /**
 * @brief Index of origin Vertex
 */
    uint32_t origin;
};

#endif //MIRADREAM3D_GEOMETRY_HPP
