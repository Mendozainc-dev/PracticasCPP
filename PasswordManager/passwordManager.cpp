#include <iostream>
#include <string>
#include <map>

class PasswordsManager{
private:
    std::map<std::string, std::string> manager;
    std::string name;
    std::string password;
    std::string newPsw;

public:
    
    void insertPassword(std::map<std::string, std::string>& manager){
        std::cout << "\n\033[44m=-=-=-=-=-= Modulo para insertar contrasenas =-=-=-=-=-=\033[0m" << std::endl;

        std::cout << "\nIngrese un nombre para la contrasena" << std::endl;
        std::cin >> name;

        std::cout << "\nIngrese una nueva contrasena para el nombre\t" << name << std::endl;
        std::cin >> password;

        manager[name] = password;

        if (name != name | password != password)
        {
            std::cerr << "\n\33[31mError al registrar el nombre o la contrasena\033[0m" << std::endl;
        }
        else{
            std::cout << "\033[32m\nContrasena registrada correctamente para\t" << name << "\33[0m" << std::endl;
        }
        }

    void showPasswords(std::map<std::string, std::string>& manager){
        std::cout << "\n\033[44m=-=-=-=-=-= Modulo para ver contrasenas =-=-=-=-=-=\033[0m" << std::endl;

        if (manager.empty()){
            std::cerr << "\n\33[31mNo hay contrasenas guardadas\33[0m" << std::endl;
        }
        else{
            for(const auto& pair : manager){
                std::cout << "\nNombre\t\33[36m" << pair.first << "\33[0m Contrasena\t\33[36m" << pair.second  << "\33[0m" << std::endl;
            }
        }
    }

    void editPassword(std::map<std::string, std::string>& manager) {

        std::cout << "\033[44m\n=-=-=-=-=-= Modulo para editar contrasenas =-=-=-=-=-=\033[0m" << std::endl;

        std::cout << "\nIngrese el nombre de la contraseña que desea editar:";
        std::cin >> name;

        if (manager.find(name) != manager.end()) {
            std::cout << "Ingrese la nueva contraseña para\t" << name << ": ";
            std::cin >> newPsw;
            manager[name] = newPsw;
            std::cout << "Contrasena actualizada para\t" << name << std::endl;
        }   
        else {
        std::cerr << "No se encontro o no existe la contrasena" << std::endl;
        }
    };

    void deletePassword(std::map < std::string, std::string >& manager){
        std::cout << "\n\33[44m=-=-=-=-=-= Modulo para borrar contrasenas =-=-=-=-=-=\33[0m" << std::endl;

        std::cout << "seleccione un usuario para borrar su contrasena" << std::endl;
        std::cin >> name;

        if(manager.find(name) != manager.end()){
            manager.erase(name);
            std::cout << "\n\33[32mContrasena borrada\33[0m" << std::endl;
        }
        else{
            std::cout << "\n\33[31mNo se encontro una contrasena con el paramaetro\33[0m\t" << name << std::endl;
        }
    };
};

int main (){
    PasswordsManager ManagerApp;
    std::map<std::string, std::string> manager;

    std::cout << "\n\033[47;30;1m=-=-=-=-=-= Bienvenido al programa de gestion de contrasenas =-=-=-=-=-=\033[0m" << std::endl;

    while (true){
        std::cout << "\n=-=-=-=-=-= OPCIONES (1,2,3,4,5,6) =-=-=-=-=-=" << std::endl;
        std::cout << "\n(1) Para \33[33m\"INGRESAR\"\33[0m una nueva contrasena" << std::endl;
        std::cout << "(2) Para \33[34m\"EDITAR\"\33\[0m una contrasena" << std::endl;
        std::cout << "(3) Para \33[35m\"BORRAR\"\33[0m una contrasena" << std::endl;
        std::cout << "(4) Para \33[36m\"VER\"\33[0m las contrasenas guardadas" << std::endl;
        std::cout << "(5) Para \33[31m\"SALIR\"\33[0m del programa" << std::endl;

        char option;

        std::cout << "\n=-=-=-=-=-= Seleccione una opcion =-=-=-=-=-=\n" << std::endl;
        std::cin >> option;
        
        switch (option)
        {
        case '1':
            ManagerApp.insertPassword(manager);
            break;
        case '2':
            ManagerApp.editPassword(manager);
            break;
        case '3':
            ManagerApp.deletePassword(manager);
            break;
        case '4':
            ManagerApp.showPasswords(manager);
            break;
        case '5':
            std::cout << "\n\33[33mADIOS (Proyecto creado por MENDOZAINC-DEV)\033[0m" << std::endl;
            return 0;
        default:
            std::cerr << "\n\33[31m////////////// OPCION INVALIDA //////////////\033[0m" << std::endl;
            break;
        }
    }

    return 0;
}    
