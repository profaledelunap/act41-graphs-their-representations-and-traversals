# Act 4.1 - Grafos: Sus representaciones y sus recorridos

## <span style="color: rgb(26, 99, 169);">¿Qué tengo que hacer?</span>

En este repositorio encontrarás el archivo "activity.h" que deberás modificar para el desarrollo de esta actividad. Deberás colocar en la parte superior, en comentarios, tus datos. Por ejemplo:

```
// =========================================================
// File: activity.h
// Author: Edward Elric - A00123456
// Date: 01/01/2021
// =========================================================
```

Diseña e implementa en <ins>forma individual</ins> una aplicación que guarde la información de un grafo en una lista de vértices. Para esto, puedes realizar una de las dos siguientes implementaciones:

- Lista de vertices y lista de listas de arcos: En un vector guarda los vertices del grafo y en un vector de vectores de arcos guarda los arcos correspondientes a cada vértice. </br>
  Ejemplo: vertices = [ "Monterrey", "Saltillo", "Durango", "Torreon", "Tijuana" ] </br>
  arcos = [ [ "Saltillo" ], [ "Torreon" ], [ ], [ "Tijuana" ], [ ]] </br>
- Lista unificada: En un vector de vectores guarda en la primer posición de cada vector el vértice y posteriormente los arcos. </br>
  Ejemplo: lista = [ [ "Monterrey", "Saltillo" ], [ "Saltillo", "Torreon" ], [ "Durango" ], [ "Torreon", "Tijuana" ], [ "Tijuana" ]]

Para probar tu implementación, ejecuta el comando:

```
make
```

Este comando compilará tu código y generará una serie de archivos de pruebas llamados "runTest#", donde # será un número de prueba. Para ejecutar prueba, solo deberás ejecutar el archivos correcto. Por ejemplo, si quiere revisar si mi código cumple con la prueba número 3, deberías ejecutar:

```
./test
```

## <span style="color: rgb(26, 99, 169);">**¿Bajo qué criterios se evalúa mi evidencia?**</span>

- **70%** - Para cada una de las funcionalidades se evaluará:

  - **Excelente (70%)** - pasa correctamente todos los casos de prueba.
  - **Muy Bien (55%)** - pasa correctamente el 75% de los casos de prueba.
  - **Bien (40%)** - pasa correctamente el 50% de los casos de prueba.
  - **Insuficiente (25%)** - pasa correctamente menos del 50% de los casos de prueba.

- **10%** - Especifican en cada uno de las funcionalidades la complejidad computacional como parte de su documentación.
- **10%** - El código deberá seguir los lineamientos estipulados en el estándar de codificación: <span class="instructure_file_holder link_holder">[liga_estándar_codificación](estandar.pdf)</span>
- **10%** - Se respetan los nombres de las funciones en la aplicación.

## <span style="color: rgb(26, 99, 169);">**¿Dónde la entrego?**</span>

Cuando hayas pasado todas las pruebas, recuerda publicar el código en tu repositorio (_git push_).
