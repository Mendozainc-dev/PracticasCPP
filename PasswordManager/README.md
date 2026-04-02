# Práctica: PasswordManager (Diccionarios en C++)

## Introducción
**Antes de iniciar tengo que decir que PasswordManager es lo mismo que "contraseñas"**, solo que lo nombré así porque buscaba que el código tuviera un estilo más **formal y estandarizado**. La idea es que se entienda mejor y se vea más profesional, aunque en esencia sigue siendo lo mismo: manejar claves de usuarios.

## Descripción
**PasswordManager** es una aplicación sencilla en la que podemos **almacenar de forma temporal una clave asociada a un usuario**, de manera que ambos queden registrados mutuamente. No es nada complejo ni pretende ser un sistema de seguridad avanzado, sino más bien una práctica para entender cómo funciona el almacenamiento de datos en pares clave-valor dentro de C++.

## Justificación
La razón principal por la que hice esta práctica fue para **aprender el uso de diccionarios en C++**. Muchas veces tenía la duda de cómo se guardaban datos emparejados, ya que en la universidad normalmente veo ejemplos en otros lenguajes como **Python** o **JavaScript**, donde los diccionarios son muy fáciles de usar: simplemente guardas datos en una variable o constante con formato clave-valor y listo.  

En cambio, en **C++** el proceso es distinto. No existe una forma tan simplista y directa, sino que en teoría tienes que usar una librería llamada **`<map>`**, la cual te permite trabajar con pares de datos en ese formato. Con esta práctica me propuse entender cómo funciona esa librería y cómo se pueden implementar estructuras similares a los diccionarios de otros lenguajes, pero dentro del ecosistema de C++.  

En pocas palabras, lo que buscaba era **quitarme la duda y reforzar mi conocimiento** sobre cómo se manejan estas estructuras en un lenguaje que, aunque más complejo, también es más poderoso y flexible.

## Explicación del Código

El código que hice para **PasswordManager** está pensado para que sea lo más práctico y entendible posible. Básicamente lo que hace es crear un **menú interactivo** donde el usuario puede elegir entre varias opciones: insertar, editar, borrar, mostrar contraseñas o salir del programa.  

### Clase `PasswordsManager`
Dentro de la clase se encuentra un **mapa (`std::map`)** que es el corazón del programa, ya que ahí se guardan los pares de datos: **nombre de usuario** y **contraseña**. Cada método de la clase está diseñado para trabajar con ese mapa:

- **`insertPassword`**: Aquí se pide al usuario que ingrese un nombre y una contraseña. Luego se guarda en el mapa con el formato clave-valor. Si todo sale bien, se muestra un mensaje de confirmación; si no, se lanza un error.
  
- **`showPasswords`**: Este módulo sirve para **mostrar todas las contraseñas guardadas**. Si el mapa está vacío, se avisa que no hay nada registrado. En caso contrario, se recorre el mapa y se imprimen los pares de usuario-contraseña.

- **`editPassword`**: Permite **editar una contraseña existente**. Primero se pide el nombre, se busca en el mapa y, si existe, se reemplaza la contraseña por la nueva. Si no se encuentra, se muestra un mensaje de error.

- **`deletePassword`**: Aquí se solicita el nombre de usuario y, si existe en el mapa, se elimina junto con su contraseña. Si no existe, se avisa al usuario que no se encontró nada.

### Función `main`
En la función principal (`main`) se crea un objeto de la clase y un mapa vacío. Luego se muestra un **menú con opciones numeradas** (1 a 5). El programa corre en un bucle infinito (`while(true)`), lo que significa que seguirá ejecutándose hasta que el usuario elija la opción de salir.  

Cada opción del menú llama al método correspondiente de la clase:
- Opción **1** → Insertar contraseña  
- Opción **2** → Editar contraseña  
- Opción **3** → Borrar contraseña  
- Opción **4** → Mostrar contraseñas  
- Opción **5** → Salir del programa  

Si el usuario ingresa una opción inválida, se muestra un mensaje de error.

---

En resumen, el código funciona como un **gestor básico de contraseñas**, donde todo se maneja con un mapa en C++. No es un sistema seguro ni avanzado, pero cumple perfectamente con el objetivo de **aprender cómo usar diccionarios en C++** y entender cómo se guardan y manipulan datos en pares clave-valor.


## Aprendizaje sobre Secuencias de Escape ANSI

Algo que también descubrí mientras hacía este proyecto fue el **uso de secuencias de escape ANSI**. Estas secuencias son como pequeños códigos que se escriben directamente en la consola y sirven para **darle color y estilo al texto**.  

Por ejemplo, cuando ves que aparece un texto en **azul, rojo o verde**, o incluso con un fondo diferente, eso no es magia, sino que se logra gracias a estas secuencias. En mi código las usé para que los mensajes fueran más claros y llamativos:  
- **Azul** para los títulos de los módulos (insertar, editar, borrar, ver).  
- **Rojo** para mostrar errores o advertencias.  
- **Verde** para confirmar que una acción se realizó correctamente.  
- También probé con **fondos de color** para resaltar la bienvenida y las opciones del menú.  

Lo interesante es que estas secuencias no son exclusivas de C++; en realidad son parte de cómo funciona la terminal, y se pueden usar en muchos lenguajes. Pero al aplicarlas aquí, me di cuenta de que hacen que el programa se vea más **profesional y amigable**, en lugar de mostrar solo texto plano.  

En pocas palabras, además de aprender sobre **diccionarios en C++**, también me llevé el aprendizaje de cómo **darle estilo visual a la consola** usando estas secuencias, lo cual hace que el programa sea más atractivo y fácil de usar.

