#include <cwf/cppwebapplication.h>
#include "controllers/bmicontroller.h"


int main(int argc, char *argv[]){
    CWF::CppWebApplication server(argc, argv, "/home/elvis/personal/projects/cpp-projects/MyFirstWebApp/server");
    server.addController<BmiController>("/bmi");
    return server.start();
}
