#include <iostream>
#include <string>
#include <map>

/*
============================ Creador: Mendozainc ============================

⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣤⡄⠀⠀⠀⠀⠀⣀⣤⣶⣤⣤⣤⣀⣀⣀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣾⣿⣿⣯⣻⣧⠀⠀⣶⣽⣿⣿⣿⣿⣿⣿⣿⣿⠅⠀⠀⠀⠀⠀⣴⢟⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⠋⠹⠿⢿⣿⣿⣿⣿⣿⣿⡧⠀⠀⠀⠀⠀⢹⣿⣿⣿⣿⣿⣿⣿⣿⣶⡄⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡀⠀⠀⠀⢠⣾⣿⣿⣿⣿⣿⣿⣿⠆⠀⠀⠀⣠⣞⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀
⠀⠀⠀⠀⢾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡍⠁⠀⠀⠀
⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀
⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀
⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⠀⠀
⠀⢠⣾⡿⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡌⠛⠧⠀
⠀⠉⠁⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀
⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⡟⠛⢻⡿⣿⣿⡿⠻⠋⠀⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⡿⢻⡿⣿⠻⠋⠃⢿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀
⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⣿⣿⣿⣿⢻⣿⣿⣿⣿⣿⣿⣷⣤⡀⠀⠀⠀⠀⠈⠻⢻⣿⣿⣿⣿⣿⣿⣿⡆⠀
⠀⢠⣿⠟⣹⣿⣿⣿⣿⡟⠁⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣠⣾⡿⠛⢿⠋⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡀⠀⠀⠀⠀⠈⢿⣿⣿⣿⣿⣎⠛⠿⠄
⠀⠉⠁⢰⣿⣿⡿⠹⠋⠀⠀⠀⠀⠀⠀⡀⢠⣼⣿⣿⣿⣿⣿⣿⣿⣷⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣄⡀⠀⠀⠀⠙⠇⢻⣿⣿⣆⠀⠀
⠀⠀⢠⣿⡿⠟⠀⠀⠀⠀⠀⠀⠀⢠⣾⣟⣦⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠹⢿⣿⣄⠀
⠀⠐⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠻⠿⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠀
⠀⠀⠀⠀⠀⠀⠀⢠⣄⠀⠀⠀⠀⠻⠿⠟⣯⣿⣿⣿⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣿⣿⣿⡿⡟⠙⠛⠃⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠘⣿⣷⣄⣶⡇⠀⠀⠀⢾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣿⣿⣿⣿⣿⡇⠀⠀⠀⢸⣿⣆⣴⣿⠇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⣭⣿⣿⣟⣡⣤⡆⠀⢸⣿⣿⣿⣿⣿⣿⣽⣿⣻⣿⣿⣿⣯⣿⣿⣿⣿⣿⣿⡇⠀⢠⣦⣌⢻⣿⣿⣭⡀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠉⢛⣫⣭⣷⣿⡿⠃⠀⢸⣿⣿⡿⣿⣿⣿⣿⣿⣿⣽⣿⣯⣿⣿⣿⣿⣿⣿⣿⡇⠀⠘⢿⣿⣿⣯⣝⠛⠛⠁⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣴⣾⡿⣿⣿⣿⣿⣇⣠⣴⣾⣾⣿⣿⣟⣯⣿⣿⣿⣾⢿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣄⣰⣿⢿⣿⣿⣷⣶⣄⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠉⠉⠙⠿⡿⢟⣉⣹⣿⣿⠟⢿⣿⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⢻⣿⣿⣯⣉⡛⢿⡿⠋⠉⠉⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠴⠿⢿⣫⣿⣿⣿⣿⡿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢋⣶⣿⣿⣋⣙⠿⠿⡷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠘⢷⣶⣿⣿⠿⢿⣿⣾⣿⣳⣤⣭⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⡥⣤⣴⣿⣽⣿⡿⣿⣿⣾⣶⡶⠃⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠈⠀⠀⠀⠙⠻⠿⠶⠿⠽⠛⠉⠀⠈⠻⣿⠏⠁⠀⠉⠛⠿⠿⡿⠿⠿⠋⠀⠀⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⣤⣤⡀⠀⠀⣠⣄⡀⢀⣀⣀⣀⣠⣄⢀⣠⣤⡄⠀⢀⣤⣄⣀⣠⣤⣄⣤⣄⡀⠀⠀⠀⣀⣤⣤⣀⡀⠀⢀⣀⣀⣀⣀⡀⠀⠀⢀⣀⡄⠀⠀⠀
⠀⢸⣿⣿⡀⢰⣿⣿⡇⠀⣿⣿⠈⢉⠛⠂⢸⣿⣿⣦⡀⢹⡿⠀⢸⣿⡇⠉⠻⣿⣦⢠⣾⡿⠁⠈⢻⣿⣆⠿⠋⢠⣾⡿⠁⠀⠀⣸⣿⣿⡄⠀⠀
⠀⣿⡿⣿⣷⣿⢻⣿⡇⠀⢹⣿⠓⢿⠀⠀⢸⡏⠙⢿⣷⣼⡇⠀⢸⣿⡇⠀⢨⣿⣿⢸⣿⡇⠀⠀⠈⣿⣿⠀⢠⣿⡿⠁⠀⠀⢰⣿⣭⣿⣷⡀⠀
⢀⣿⣇⠹⣿⡇⣸⣿⣇⠀⣸⣿⣧⣀⣴⠂⣸⣷⠀⠀⠻⣿⣧⠀⣸⣿⣧⣀⣼⣿⠋⠘⢿⣿⣀⣀⣼⡿⠃⣰⣿⣟⣁⣠⣾⢀⣿⡇⠀⢹⣿⣇⠀
⠈⠉⠉⠀⠉⠀⠉⠉⠉⠈⠉⠉⠉⠉⠉⠀⠉⠉⠁⠀⠀⠈⠉⠀⠉⠉⠉⠉⠁⠀⠀⠀⠀⠈⠉⠉⠁⠀⠀⠉⠉⠉⠉⠉⠉⠉⠉⠁⠀⠉⠉⠉⠁

La justificacion del porque hice este programa es para testear diferentes cosas que no habia probado como varias estructuras de datos que me daban lata entender en este lenguaje como lo eran los diccionarios pero ahora despues de hacer esta practica me queda mas claro de como funcionan en este lenguajes ya que los habia visto y usado en java en la clase del joto de charly pero tenia mis dudas a la hoar de usarlo en cpp por que en otros lenguajes mas simplistas como python se declaran mas facilmente pero aqui se lleva un poco mas de control de lo que hay en el programa, ademas de eso queria usar un poco mas de POO para que despues que haga el cambio a RUST en el cual no usa poo quedarme con unas bases mas claras del lenguaje y sus paradigmas.

de igual manera si la persona que esta leyendo esto le explico un poco para que no se pierdan con mi chingadera de codigo

pa rapido se usan 3 librerias iostream que es para la lectura de datos en consola se usa cout y cin osea out y in pero se agrega la c al inicio por el lenguaje
luejo string para usar palabras char en cadena
y por ultimo map que es para poder crear los diccionarios osea guardar en clave: valor como un fokin json
ademas de eso no se uso una libreria que se llama unordered map que es similar pero es para las tablas hash xd queria probarlo pero me valio madre

ahora pa empezar si no sabes leer codigo que wey estas pero nimodo no te voy a dar lectura de todo, problema tuyo papi

primero se crea la clase contrasenasManager que es para guardar varios metodos, no encapsule nada asi que rompe una de las bases de poo pero x podemos meter el map ahi y no hay pedo
despues creamos la primera funcion void que es para agregar usuario como vemos de parametro usamos map osea dos parametros clave y valor pero aqui solo usamos los tipos de dato
que guarda que en este caso son dos de tipo string y despues la variable manager para hacer uso de ellos

luego solo se definen se le dan valores con iostream y por utlimo solo se usan los parametros osea en manager quedan dos partes que es nombre y contrasena se define con un = por que
es el valor que tiene esa variable por asi decirlo osea la clave si se usa de manera estatica ponemos otro manager y dentro de [] ponemos entre comillas la informacion pero eso depende
del tipo de dato por que por ejemplo si en map usamos int no ponemos comillas usa la logica we
y pues ya solo eso ya despues se imprimen las variables que se metieron y X despues se crea el objeto en main y se le da el parametro manager pero despues de pelearme con la puta documentacion
se tiene que volver a usar map dentron de una nueva funcion osea que quede volando en el main a lo pendejo para que se pueda usar y lea parametros xd

ya despues se pueden usar metodos de map como erase que lo que hace es borrar un estado osea una clave con su valor
de igual manera para llamarlo solo se usa par.firs y par.second y ya firs pues es la clave wey y el valor es second si nomas usamos firs pues solo nos muestra su clave y ya we igual hay mas 
metodos como clear, insert y mas madres pero si me da tiempo las uso si no ni pedo 

gracias por usar el codigo del mas cabron para programar ouyea

*/

class contrasenasManager{
private:

	/*
	Aqui se encapsulan los dos datos nombre y contrasena para que se pueda usar de manera global en varios metodos
	*/

	std::map<std::string, std::string> manager;
	std::string nombre;
    std::string contrasena;
public:	
	//Esta es la funcion que hice para agregar usuarios ouyea

	void agregarUsuarioContrasena(std::map<std::string, std::string>& manager) {

    std::cout << "\nModulo para agregar un usuario" << std::endl;
    std::cout << "Ingrese el nombre del nuevo usuario\n";
    std::cin >> nombre;

    std::cout << "Ingrese la nueva contrasena\n";
    std::cin >> contrasena;

    manager[nombre] = contrasena;

    std::cout << "\nUsario se agrego correctamente con el nombre de\t\"" << nombre << "\" y la contrasena es\t\"" << contrasena << "\"" << std::endl;
	};

	/*
	Metodo creado para mostrar las contrasenas igual como dije arriva se usa par seguido de first o second para mostrar datos
	*/
	void mostrarUsuarioContrasena(std::map<std::string, std::string>& manager){
	for (const auto& par : manager) {
        std::cout << "Usuario\t\"" << par.first << "\" Contrasena\t\"" << par.second << "\"" << std::endl;
		}
	};

	//Estas es la funcion para eliminar un usuario con contrasena 
	//se usa erase como dije en la parte de arriba

	void eliminarUsuarioContresena(std::map <std::string,std::string>& manager) {

		std::cout << "\nModulo para Eliminar" << std::endl;

		utilidadVerContrasenas(manager);

		std::cout << "\nIngrese al usuario que desea borrar" << std::endl;
		std::cin >> nombre;
		manager.erase(nombre);

		mostrarUsuarioContrasena(manager);
	};

	/*
	Metodo para editar un usuario o una contrasena, lo unico que se hace es tomar de referencia un dato y cambiarlo
	*/

	void editarUsuarioContrasena(std::map <std::string,std::string>& manager){
		std::cout << "\nModulo para editar un usuario o una contrasena" << std::endl;
		
		std::cout << "\nPara cambiar la contrasena elija el usuario al que le quiera cambiar la contrasena\n" << std::endl;
		utilidadVerContrasenas(manager);
		std::cout << "\nusuario a elegir" << std::endl;
		std::cin >> nombre;

		std::cout << "\nUsted eligio al usuario\t\"" <<  nombre << "\"" << " con la contrasena\t\"" << manager[nombre] << "\" " <<  std::endl;

		if (manager[nombre] == nombre){
			std::cout << "\nAgregue el nuevo nombre" << std::endl;
			std::cin >> nombre;
		
		}
		else{
			std::cerr << "\nEl usuario Elejido no existe" << std::endl;
			return editarUsuarioContrasena(manager);
		}

		std::cout << "\nagregue la nueva contrasena" << std::endl;
		std::cin >> contrasena;

		manager[nombre] = contrasena;
	};

	/*
	Este metodo es una utlidad que hice para ver las contrasenas osea un pequeno switch parar consultar lo que hay 
	pareciera redundante por que el metodo de mostrarUsuarioContrasena ya muestra los datos de una, pero este es mas que nada un
	pequeno filtro por asi decirlo solo para que el usuario confirme si quiere mostrar los datos que ya hay guardados y no se pierda
	de vista la informacion a cambiar
	*/
	void utilidadVerContrasenas(std::map <std::string,std::string>& manager){
		char opcionConsular;

		std::cout << "\nDesea ver las contrasenas que hay guardadas (1 = SI, 2 = SALIR, ! = NO)" << std::endl;
		std::cin >> opcionConsular;

		switch (opcionConsular)
		{
		case '1':
			mostrarUsuarioContrasena(manager);
		case '2':
			break;
		default:
			break;
		}
	};
};

int main(){

	contrasenasManager contrasenasManager;
	std::map<std::string, std::string> manager;

	std::cout << "\nBienvenido al gestor de Contrasenas" << std::endl;

	char opcionSwitch;
	while(true){
	std::cout << "\nElija una opcion entre (1,2,3,4,5)" << std::endl;
	std::cout << "\nPara opciones Varias use la letra V" << std::endl;
	std::cout << "\n(1) Para ingresar una nueva contrasena" << std::endl;
	std::cout << "(2) Para ver las contrasenas" << std::endl;
	std::cout << "(3) Para editar una contrasena o un usuario" << std::endl;
	std::cout << "(4) Para borrar una contrasena con usuario" << std::endl;
	std::cout << "(5) Para Salir del Programa\n" << std::endl;

	std::cin >> opcionSwitch;

	switch (opcionSwitch){
	case '1':
		contrasenasManager.agregarUsuarioContrasena(manager);
		break;
	case '2':{
		contrasenasManager.mostrarUsuarioContrasena(manager);
		break;
	}
	case '3':{
		contrasenasManager.editarUsuarioContrasena(manager);
		break;
	}
	case '4':{
		contrasenasManager.eliminarUsuarioContresena(manager);
		break;
	}
		break;
	case '5':
		std::cout << "\nAdios POPO" << std::endl;
		return 0;
	case 'v':{

		break;
	}
	default:
		std::cout << "Pendejo" << std::endl;
		break;
		}
	}
	return 0;
}   
