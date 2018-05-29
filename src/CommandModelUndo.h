#ifndef COMMANDMODELUNDO_H
#define COMMANDMODELUNDO_H

#include "CommandModel.h"


class QVTKFramebufferObjectRenderer;

class CommandModelUndo : public CommandModel
{
public:
	CommandModelUndo(QVTKFramebufferObjectRenderer *vtkFboRenderer);

	bool addToStack() override;
	void execute() override;
};

#endif // COMMANDMODELUNDO_H
