#include "CommandModelUndo.h"
#include "QVTKFramebufferObjectRenderer.h"


CommandModelUndo::CommandModelUndo(QVTKFramebufferObjectRenderer *vtkFboRenderer)	
{
	m_vtkFboRenderer = vtkFboRenderer;
}


bool CommandModelUndo::addToStack()
{
	return false;
}

void CommandModelUndo::execute()
{
	m_vtkFboRenderer->undo();
}
