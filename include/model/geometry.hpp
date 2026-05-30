//
// Created by Mathis Pean on 27/05/2026.
//

#ifndef MIRADREAM3D_GEOMETRY_HPP
#define MIRADREAM3D_GEOMETRY_HPP


/**
 * @brief oriented edge
 */

struct HalfEdge {
    int next;
    int prev;
    /**
 * @brief Index of oppposite HalfEdge
 */
    int twin;
    /**
 * @brief Index of origin Vertex
 */
    int origin;
};



#endif //MIRADREAM3D_GEOMETRY_HPP
