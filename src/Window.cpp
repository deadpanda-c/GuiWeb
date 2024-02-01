#include "Window.hpp"

Window::Window()
{
}

void Window::show(int ac, char **av)
{
    QApplication app(ac, av);
    QWidget widget;
    widget.resize((ac > 1) ? atoi(av[1]) : 200, (ac > 2) ? atoi(av[2]) : 200);
    widget.show();
    app.exec();
}

Window::~Window()
{
}
