#include "CommandModelDelete.h"
#include "Model.h"
#include "ProcessingEngine.h"
#include "QVTKFramebufferObjectRenderer.h"


CommandModelDelete::CommandModelDelete(QVTKFramebufferObjectRenderer *vtkFboRenderer, std::shared_ptr<ProcessingEngine> processingEngine, std::shared_ptr<Model> model)
	: m_processingEngine{processingEngine}
	, m_model{model}
{
	m_vtkFboRenderer = vtkFboRenderer;
}


void CommandModelDelete::undo()
{
}

void CommandModelDelete::redo()
{
}

