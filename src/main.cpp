#include <QtWidgets>
#include <iostream>

int main(int ac, char **av)
{
    // open a window
    QApplication app(ac, av);
    QWidget window;
    window.resize((ac > 1) ? atoi(av[1]) : 200, (ac > 2) ? atoi(av[2]) : 200);
    window.show();

    return app.exec();
}
