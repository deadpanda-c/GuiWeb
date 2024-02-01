#pragma once

#include <QtWidgets>

#include <iostream>
#include <string>
#include <memory>
#include <vector>

class Window {
    public:
        Window();
        ~Window();

        void show(int ac, char **av);

};
