# Práctica: Hola Mundo en C++

## Introducción
Este es el clásico programa de **"Hola Mundo"**, que normalmente se hace como primer paso al aprender un lenguaje de programación. Aunque parece algo muy simple, en realidad sirve para **probar que todo está funcionando bien**: el compilador, la consola y la forma en que se escribe el código en C++.

## Descripción
El programa lo único que hace es **imprimir en pantalla la frase "Hola mundo"**. Además, en este caso se agregó una **secuencia de escape ANSI `\a`**, que genera un pequeño sonido de alerta en la consola (como un "beep"). Esto lo hace un poco más interesante que el típico Hola Mundo plano.

## Explicación del Código
- Se incluye la librería **`<iostream>`**, que es la que permite usar `std::cout` para mostrar texto en la consola.  
- Dentro de la función principal `main`, se usa:
  ```cpp
  std::cout << "\nHola mundo\n\a" << std::endl;

