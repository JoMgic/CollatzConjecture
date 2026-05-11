# Collatz Conjecture in C++

A simple C++ program that explores the Collatz conjecture (3n + 1 problem). The generated `CSV` file can be imported into LibreOffice or Julia for better visualisation.
---

## About

The program calculates the number of steps required for a number to reach `1` using the Collatz sequence:

- if `n` is even → `n / 2`
- if `n` is odd → `3n + 1`

The results are written into a CSV file:

```csv
origin,moves
1,1
2,2
3,8
...
```

This makes it easy to generate graphs and analyze the behavior of the sequence.

---

---

## Requirements

- C++17 compatible compiler
- Linux / macOS / Windows

Tested on:
- Arch Linux
- GCC
- libreoffice-fresh
- julia

---

## Build

Compile with:

```bash
g++ -O2 Main.cpp -o app
```

---

## Run

```bash
./app
julia plot.jl
julia plot-log.jl
```

After execution, a file named:

```text
collatz.csv
```

will be created in the current directory.

---

## Example Output

```csv
origin,moves
1,1
2,2
3,8
4,3
5,6
...
```
## Visualisation
Julia visualisize this csv-file and returns two png-files.
```text
collatz-julia.png
collatz-julia-logarithmic.png
```
I personal do not recommend to use LibreOffice for visualisation, as it produces less precise graphical results.
---


## Project Structure

```text
.
├── Main.cpp
├── collatz.csv
└── README.md
```

---

## Future Ideas

- Parallel computation
- GPU acceleration
- Big integer support

---

## The Collatz Conjecture

The Collatz conjecture is one of the most famous unsolved problems in mathematics.

Starting with any positive integer:

- divide by 2 if even
- multiply by 3 and add 1 if odd

The conjecture states that every starting number eventually reaches `1`.
