#ifndef COMMANDMODELDELETE_H
#define COMMANDMODELDELETE_H

#include <memory>

#include <QUndoCommand>

#include "CommandModel.h"


class Model;
class ProcessingEngine;
class QVTKFramebufferObjectRenderer;

class CommandModelDelete : public CommandModel
{
public:
	CommandModelDelete(QVTKFramebufferObjectRenderer *vtkFboRenderer, std::shared_ptr<ProcessingEngine> processingEngine, std::shared_ptr<Model> model);

	bool addToStack() override;
	void undo() override;
	void redo() override;

private:
	std::shared_ptr<ProcessingEngine> m_processingEngine;
	std::shared_ptr<Model> m_model = nullptr;
};

#endif // COMMANDMODELDELETE_H
