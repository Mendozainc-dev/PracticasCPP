# Práctica: FizzBuzz en C++

## Introducción
**FizzBuzz** es uno de esos programas clásicos que siempre aparecen cuando uno está aprendiendo a programar. La idea es muy sencilla: imprimir los números del 1 al 100, pero con ciertas reglas que hacen que no todo sea tan lineal. Aunque parece un ejercicio básico, en realidad sirve para **entender mejor las estructuras de control** y cómo aplicar condiciones en un bucle.

## Descripción
El programa recorre los números del **1 al 100** y aplica las siguientes reglas:
- Si el número es múltiplo de **3**, se imprime la palabra **"Fizz"**.  
- Si el número es múltiplo de **5**, se imprime la palabra **"Buzz"**.  
- Si el número es múltiplo de **3 y 5 al mismo tiempo**, se imprime la palabra **"FizzBuzz"**.  
- En los demás casos, simplemente se imprime el número.  

En mi versión, además de imprimir la palabra, también muestro el número que cumple la condición, para que quede más claro qué valores están siendo sustituidos.

## Justificación
La razón de hacer esta práctica es que **FizzBuzz es un ejercicio muy usado para entrevistas técnicas y para aprender lógica básica de programación**. Aunque ya lo había visto en otros lenguajes, quise implementarlo en **C++** para reforzar cómo funcionan los bucles `for` y las condiciones `if` en este lenguaje.  

Además, me permitió practicar el uso de **operadores lógicos y aritméticos** como `%` (módulo), que es el que nos dice si un número es divisible por otro. Es un ejercicio pequeño, pero muy útil para afianzar conceptos.

## Explicación del Código
El programa comienza mostrando un mensaje de bienvenida en la consola. Luego entra en un **bucle `for`** que va desde el número 1 hasta el 100.  

Dentro del bucle se evalúan las condiciones:
- Primero se revisa si el número es divisible por **3 y 5 al mismo tiempo** (`i % 3 == 0 && i % 5 == 0`). Si es así, se imprime **FizzBuzz** junto con el número.  
- Si no cumple esa condición, se revisa si es divisible solo por **3**. En ese caso se imprime **Fizz**.  
- Si tampoco, se revisa si es divisible solo por **5**, y se imprime **Buzz**.  
- Los números que no cumplen ninguna condición simplemente se muestran como están.  

De esta manera, el programa recorre todos los números y aplica las reglas de sustitución.
## Conclusión
Con esta práctica aprendí que incluso un ejercicio tan sencillo como **FizzBuzz** puede ser una buena forma de reforzar conceptos básicos de programación en C++. Me permitió trabajar con **bucles, condiciones, operadores lógicos y aritméticos**, y además me recordó que siempre se puede mejorar la presentación de un programa usando **secuencias de escape ANSI** para hacerlo más atractivo.  
En definitiva, aunque es un ejercicio pequeño, aporta mucho en el camino de aprender a programar de manera más sólida.

