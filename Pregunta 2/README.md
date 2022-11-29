# Pregunta 2

### Desarmar funcion clave0 y fun. Describir su funcionamiento.
###### Que hace la funcion clave0:
1) Encuentra la primera ocurrencia del caracter `\n`
2) Reemplaza el caracter `\n` por `\0`
3) Comprueba si el largo del string es mayor a 8, de lo contrario retorna 0
4) Inicializa un array de 256 enteros con valor 0
5) Por cada caracter en el string, reemplaza el elemento del array en la posicion del caracter correspondiente por 1
6) Se suman todos los elementos del array. Si la suma es mayor a 2, llamar a la funcion fun, de lo contrario retorna 0
7) Si la llamada a la funcion fun retorna 1, retorna 1, de lo contrario retorna 0.

###### Que hace la funcion fun:
1) Verifica que el largo del string sea mayor a 1. De lo contrario, retorna 1
2) Compara el primer caracter del string con el ultimo. Si son iguales, llama a la funcion fun con el string sin el primer y ultimo caracter. De lo contrario, retorna 0


\
En resumen, el programa busca un string que cumpla con las siguientes condiciones:  
* Ser un palindromo
* Tener un largo mayor a 8
* Consistir de al menos 3 caracteres distintos

---
### Implementacion del programa en C
Se incluye el codigo fuente del programa en el archivo `clave0.c`
###### Compilacion y ejecucion
```bash
$ gcc clave00.c -o clave00.exe
$ ./clave00.exe
```
