# 2026-II-SM-IntProg

## Compilar con Make (Windows)

Este proyecto usa `g++` y GNU Make. En Windows, instala Make desde la terminal
**MSYS2 UCRT64**:

```sh
pacman -S --needed make
```

Si `g++` todavía no está instalado, instala también el compilador:

```sh
pacman -S --needed mingw-w64-ucrt-x86_64-gcc
```

Abre la carpeta del proyecto desde esa terminal y ejecuta:

```sh
make
make run
make clean
```

Para que Makefile Tools encuentre `make`, abre VS Code desde esa terminal con
`code .`. Si VS Code ya estaba abierto, ciérralo antes; iniciarlo desde una
terminal que no tiene MSYS2 en `PATH` no hace que `make` esté disponible.