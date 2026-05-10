# Collatz Conjecture Explorer

A simple C++ program that explores the Collatz conjecture (3n + 1 problem) and exports the results into a CSV file for visualization in Excel, LibreOffice Calc, Python, or other data analysis tools.

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

---

## Visualization

You can import the CSV file into:

- :contentReference[oaicite:0]{index=0}
- :contentReference[oaicite:1]{index=1}
- Python (matplotlib / pandas)
- R
- MATLAB

Recommended chart types:
- Scatter plot
- Line chart
- Logarithmic visualization

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

- Export maximum intermediate values
- Parallel computation
- Performance benchmarking
- Visualization scripts
- Big integer support
- GPU acceleration

---

## The Collatz Conjecture

The Collatz conjecture is one of the most famous unsolved problems in mathematics.

Starting with any positive integer:

- divide by 2 if even
- multiply by 3 and add 1 if odd

The conjecture states that every starting number eventually reaches `1`.
