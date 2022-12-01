# Pregunta 2

## Desarmar función clave0 y fun. Describir su funcionamiento.
### Que hace la función clave0:
1) Encuentra la primera ocurrencia del carácter `\n`
2) Reemplaza el carácter `\n` por `\0`
3) Comprueba si el largo del string es mayor a 8, de lo contrario retorna 0
4) Inicializa un array de 256 enteros con valor 0
5) Por cada carácter en el string, reemplaza el elemento del array en la posición del carácter correspondiente por 1
6) Se suman todos los elementos del array. Si la suma es mayor a 2, llamar a la función fun, de lo contrario retorna 0
7) Si la llamada a la función fun retorna 1, retorna 1, de lo contrario retorna 0.

### Que hace la función fun:
1) Verifica que el largo del string sea mayor a 1. De lo contrario, retorna 1
2) Compara el primer carácter del string con el ultimo. Si son iguales, llama a la función fun con el string sin el primer y ultimo carácter. De lo contrario, retorna 0


\
En resumen, el programa busca un string que cumpla con las siguientes condiciones:  
* Ser un palíndromo
* Tener un largo mayor a 8
* Consistir de al menos 3 caracteres distintos

---
### Implementación del programa en C
* Se incluye el código fuente del programa en el archivo `clave0.c`
#### Compilación y ejecución
```bash
$ gcc clave00.c -o clave00.exe
$ ./clave00.exe
```
