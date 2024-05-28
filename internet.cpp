#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <windows.h>

int main() {
    while (true) {
        system("ping -n 1 www.bing.com > nul 2>&1");
        if (!system("echo %errorlevel%")) {
            std::ofstream file("log.txt", std::ios_base::app);
            if (file.is_open()) {
                std::time_t now = std::time(0);
                char* dt = ctime(&now);
                file << "Conectado a Internet: " << dt;
                file.close();
            }
        }
        Sleep(10000); // Espera 60 segundos antes de verificar de nuevo
    }
    return 0;
}

