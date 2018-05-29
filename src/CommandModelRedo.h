#ifndef COMMANDMODELREDO_H
#define COMMANDMODELREDO_H

#include "CommandModel.h"


class QVTKFramebufferObjectRenderer;

class CommandModelRedo : public CommandModel
{
public:
	CommandModelRedo(QVTKFramebufferObjectRenderer *vtkFboRenderer);

	bool addToStack() override;
	void execute() override;
};

#endif // COMMANDMODELREDO_H
