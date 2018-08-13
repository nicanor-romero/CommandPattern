# Command Pattern

###### Command pattern example using Qt+VTK and a QUndoStack for stacking 3D transformation commands.
___

With this sample application you will be able to open multiple STL/OBJ files and view them in a 3D canvas.
This 3D canvas is rendered using VTK but is immersed into a QML window, where you can overlay any QtQuickControls2 component.

We have added two buttons on top of the canvas to undo and redo. They include a simple animation and they respond to the status of the QUndoStack.

The code was tested using Qt 5.9.4 and VTK 8.1.1 in both Linux and Windows.


##### How to build in Linux

1. Clone the repository
    ```sh
    git clone https://github.com/nicanor-romero/CommandPattern.git
    ```

2. Set the environmental variables
    ```sh
    $ export QTDIR=/path/to/Qt/5.9.4/gcc_64
    $ export VTK_DIR=/path/to/VTK-8.1.1/build_dir
    ```

3. Run CMake
    ```sh
    $ cd /path/to/QtVtk
    $ mkdir build && cd build
    $ cmake -DCMAKE_BUILD_TYPE=Release ..
    ```

4. Compile the code
    ```sh
    $ make
    ```

5. Run the application
    ```sh
    $ cd build/
    $ ./QtVtk
    ```

