# Pregunta 1

## Pregunta A

### Qué realiza la funcion `m1`

La función `m1` busca el valor máximo en el array entregado, esto lo logra realizando el siguiente algoritmo:

1) Se llama a la función m1, entregandole un puntero a un array y el tamaño de este
2) Si el tamaño del array es 1, retorna el valor del elemento
3) Se calcula la mitad del array
4) Se llama a m1 con la primera mitad del array y su largo
5) Se llama a m1 con la segunda mitad del array y su largo
6) Retorna el valor maximo entre las dos llamadas
7) Se repite de forma recursiva hasta que el largo del array sea 1
8) La función retorna el valor del unico elemento del array

### Posible implementacion de `m1` en C

La implementacion completa de la funcion `m1` se puede observar en el archivo `misterio1.c`

``` 
int m1(int* a, int n) {
    if (n == 1) {
        return a[0];
    }
    int m = n / 2;
    int v1 = m1(a, m);
    int v2 = m1(a + m, n - m);
    if (v1 > v2) {
        return v1;
    } else {
        return v2;
    }
}
```
#### Compilación y ejecución

```bash
$ gcc misterio1.c -o misterio1.exe
$ ./misterio1.exe
```
***

## Pregunta B

### Contenido de la pila

```
+------------------------+
|   El valor retornado   |
+------------------------+
| El segundo argumento   |
+------------------------+
|    Primer argumento    |
+------------------------+
|  Direccion de retorno  |
+------------------------+
|         %rbp           |
+------------------------+
|         %rbx           |
+------------------------+
|         %r12           |
+------------------------+
```
***

## Pregunta C

### Secuencia de instrucciones en gdb

Para averiguar que hace `misterio1` se utilizó `gdb` para ver la secuencia de instrucciones que realizan las funciones del programa. Para esto se utilizaron los siguientes comandos:

```bash
(gdb) disassemble main
(gdb) disassemble m1
```

***

## Pregunta D

### ¿Podría m1 dar resultados incorrectos?

* La funcion `m1` no daría resultados incorrectos, pero la función `main` usa *rand()* de manera incorrecta, por lo que siempre inicializa el array con los mismos números.

### Código corregido:

Código incorrecto original en archivo `misterio1.c`
```
int main() {
  int a[16];
  for (int i = 0; i < 16; i++) {
      a[i] = rand() % 23;
  }
  int m = m1(a, 16);
  printf("m %d\n", m);
  return 0;
}
```
Código correcto en archivo `misterio1_solucion.c`

```
int main() {
    //fix de seed random
    srand(time(0));
    int a[16];
    for (int i = 0; i < 16; i++) {
        a[i] = rand() % 23;
    }
    int m = m1(a, 16);
    printf("m %d\n", m);
    return 0;
}
```
### Compilación y ejecución

```bash
$ gcc misterio1_solucion.c -o misterio1_solucion.exe
$ ./misterio1_solucion.exe
```