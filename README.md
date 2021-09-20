# TC-1031--Integral.A

Ordenador de capítulos de La casa de Papel


Se basa en la serie de La Casa de Papel, una serie que consta de una variedad de capítulos donde cada una tiene un ranking diferente de IMDB

Para implementarlo se espera tener un directorio de capítulos para ordenarlos por IMDB y número de capitulo


El programa recupera los nombres y costos de las cartas desde un archivo csv y los acomoda por costo y nombre.

SICT0302B: Toma decisiones Selecciona y usa una estructura lineal adecuada al problema.

Considerando que el mazo consta de 66 cartas podemos decidir que se trata de un arreglo pequeño, por lo que el tiempo de ejecución no será una gran diferencia entre un algoritmo y otro. Por esta razón opté por implementar algo que no ocupe mucha memoria y sea fácil de implementar. Un insertion sort. En la línea 73 y 78 se muestra un swap auxiliar y el sort respectivamente.
Considerando en este caso un total de 36 capitulos es un arreglo pequeño, por lo que tiene un tiempo de ejecución corto. 

SICT0301B: Evalúa los componentes Presenta Casos de Prueba correctos y completos para todas las funciones y procedimientos del programa, los casos de pruebas para todas las funciones se encuentran pruebas.cpp donde se prueban las funciones de:

En este caso, ya hablamos que usaremos un insertion sort con O(n^2) como es conocido. Debidoa a que el orden en el que se llenó el archivo es aleatorio no nos encontraremos con el peor caso. Por otra parte, en el main se muestra la ejecución de el ordenamiento por costo y alfabeto.

En este caso, usaremos un insertion sort con 0(n^2) como se conoce. Debido a que el archivo se ordeno de manera aleatoria no nos encontramos con el peor caso. 
En el main se muestra la ejecucion de el ordenamiento por nombre y ranking

SICT0303B: Implementa acciones científicas

Implementa mecanismos de lectura de archivos correctos y útiles dentro de un programa. En este caso los datos se recuperan directamente desde un archivo csv.
