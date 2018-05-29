#ifndef COMMANDMODEL_H
#define COMMANDMODEL_H

#include <QUndoCommand>


class QVTKFramebufferObjectRenderer;

class CommandModel : public QUndoCommand
{
public:
	CommandModel(){}
	virtual ~CommandModel(){}

	virtual bool isReady();
	virtual void execute();

	virtual bool addToStack() = 0;
	virtual void undo() = 0;
	virtual void redo() = 0;

protected:
	QVTKFramebufferObjectRenderer *m_vtkFboRenderer;
};

#endif // COMMANDMODEL_H
