# C++ and DSA Practice

This repository contains my C++ and data-structures-and-algorithms practice programs. The source code is kept exactly as I wrote it while learning; only the folder structure and repository setup have been improved.

## Folder structure

```text
arrays/
  LinearSearch.cpp
  ReverArray.cpp
  hello.cpp
sorting/
  README.md
```

### Arrays

| File | What it does |
| --- | --- |
| `LinearSearch.cpp` | Finds the first index of a value in an array, or returns `-1`. |
| `ReverArray.cpp` | Reverses and prints a fixed array. |
| `hello.cpp` | Existing reverse-array practice file, kept unchanged. |

### Sorting

Add future sorting questions in this folder, such as Bubble Sort, Selection Sort, and Insertion Sort.

## Build and run

Requirements: a C++17 compiler and `make`.

```bash
make
./build/linear_search
./build/reverse_array
./build/hello
```

Check that the existing programs still give their expected output:

```bash
make check
```

Remove locally generated programs:

```bash
make clean
```

## For future practice

When you learn a new topic, add a new `.cpp` file in its correct topic folder without changing or deleting your older solutions. For example, put `BubbleSort.cpp` in `sorting/`.
