#pragma once

#include "Transform.h"

class Mesh;

class GraphNode {
public:
    GraphNode(Mesh* mesh)
        : mesh(mesh), localTr(Transform::Origin()), dirty(true) {}

    void AddChildNode(GraphNode* newChild);

    void Render(Transform parentWorldTr, bool currentDirty);
    void RenderMesh(Mesh* mesh, Transform worldTr);

    void SetTransform(Transform newLocal);


private:
    Transform localTr;
    Transform worldTr;
    bool dirty;
    Mesh* mesh;

    static const int MAX_CHILDREN = 10;
    GraphNode* children[MAX_CHILDREN];
    int numChildren;
};