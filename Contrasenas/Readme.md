# Práctica: Gestor de Contraseñas (Primera version)

## Introducción
Este código es una **versión inicial del PasswordManager**, hecha cuando todavía no tenía muy claro cómo aplicar buenas prácticas de programación ni cómo mantener el código limpio. Aun así, me sirvió para **experimentar con estructuras de datos** en C++ y empezar a usar **POO (Programación Orientada a Objetos)**, aunque de manera bastante básica.

## Justificación
La razón de hacer este programa fue **testear diferentes cosas que no había probado antes**, como el uso de **diccionarios en C++** (que en realidad se implementan con la librería `<map>`). Ya los había visto en otros lenguajes como **Java** o **Python**, donde son más fáciles de declarar, pero en C++ requieren más control y estructura.  

Además, quise practicar un poco de **POO**, aunque aquí no encapsulé bien los datos ni seguí todas las bases de este paradigma. La idea era tener una base para después migrar a otros lenguajes como **Rust**, que no usan POO de la misma forma.

## Librerías utilizadas
En este programa se usan tres librerías principales:
- **`<iostream>`** → Para entrada y salida en consola (`cin` y `cout`).  
- **`<string>`** → Para manejar cadenas de texto en lugar de trabajar solo con `char`.  
- **`<map>`** → Para crear diccionarios en formato **clave:valor**, parecido a un JSON.  

No se usó **`unordered_map`**, que también sirve para tablas hash, porque en esta práctica solo quería probar lo básico.

## Explicación del Código

### Clase `contrasenasManager`
La clase contiene un **mapa** (`std::map<std::string, std::string> manager`) donde se guardan los pares de datos: **usuario** y **contraseña**. También tiene variables privadas (`nombre` y `contrasena`) que se usan en los métodos.

Los métodos principales son:

- **`agregarUsuarioContrasena`**  
  Pide al usuario un nombre y una contraseña, y los guarda en el mapa con el formato clave-valor. Luego imprime un mensaje confirmando que se agregó correctamente.

- **`mostrarUsuarioContrasena`**  
  Recorre el mapa y muestra todos los pares guardados usando `par.first` (clave) y `par.second` (valor).

- **`eliminarUsuarioContresena`**  
  Permite borrar un usuario junto con su contraseña usando el método `erase`. Antes de eliminar, llama a `utilidadVerContrasenas` para mostrar lo que hay guardado.

- **`editarUsuarioContrasena`**  
  Sirve para cambiar la contraseña de un usuario. Pide el nombre, muestra la contraseña actual y luego permite reemplazarla por una nueva. La lógica aquí no está muy limpia y puede dar errores si el usuario no existe.

- **`utilidadVerContrasenas`**  
  Es un método auxiliar que pregunta si el usuario quiere ver las contraseñas guardadas antes de realizar otra acción. Usa un pequeño `switch` para decidir si mostrar o no los datos.

### Función `main`
En `main` se crea un objeto de la clase y un mapa vacío. Luego se muestra un **menú interactivo** con opciones:
- (1) Agregar una nueva contraseña  
- (2) Ver las contraseñas  
- (3) Editar una contraseña o usuario  
- (4) Borrar una contraseña con usuario  
- (5) Salir del programa  

El programa corre en un bucle infinito (`while(true)`) y usa un `switch` para ejecutar la opción elegida. Si el usuario ingresa algo inválido, se imprime un mensaje de error.

## Observaciones
- El código **no está muy limpio**: hay redundancias, poca encapsulación y algunos métodos podrían estar mejor organizados.  
- Se mezclan mensajes en consola con lógica, lo que hace que el código sea menos modular.  
- Aun así, cumple con el objetivo de **aprender cómo usar `map` en C++** y cómo manejar pares clave-valor.  
- También muestra un primer intento de aplicar **POO**, aunque sin seguir todas las buenas prácticas.

## Conclusión
Este programa es una **versión temprana** de mi gestor de contraseñas. Aunque tiene errores y no sigue un estilo formal, me ayudó a entender cómo funcionan los **diccionarios en C++**, cómo usar métodos como `erase`, y cómo recorrer un mapa con `first` y `second`.  

En resumen, fue un buen primer paso para aprender, aunque después tuve que mejorar la estructura y la limpieza del código en versiones posteriores.

