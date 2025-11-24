#include "GraphNode.h"
#include <iostream>


void GraphNode::AddChildNode(GraphNode* newChild)
{
    children[numChildren++] = newChild;
}

void GraphNode::Render(Transform parentWorldTr, bool currentDirty) {
    currentDirty |= dirty;
    if (currentDirty)
    {
        worldTr = localTr.Combine(parentWorldTr);
        dirty = false;

        std::cout << "Actualised Transform" << std::endl;
    }

    if (mesh) RenderMesh(mesh, worldTr);

    for (int i = 0; i < numChildren; i++)
    {
        children[i]->Render(worldTr, currentDirty);
    }
}

void GraphNode::SetTransform(Transform newLocal)
{
    localTr = newLocal;
    dirty = true;
}


void GraphNode::RenderMesh(Mesh* mesh, Transform worldTr)
{
    
}
