#include "CommandModelRedo.h"
#include "QVTKFramebufferObjectRenderer.h"


CommandModelRedo::CommandModelRedo(QVTKFramebufferObjectRenderer *vtkFboRenderer)	
{
	m_vtkFboRenderer = vtkFboRenderer;
}


bool CommandModelRedo::addToStack()
{
	return false;
}

void CommandModelRedo::execute()
{
	m_vtkFboRenderer->redo();
}

