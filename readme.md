# libgraph

## Overview

The `libgraph` project is a C++ library that implements two key components in graph theory: an adjacency matrix for graph representation and a greedy coloring algorithm. Below is an overview of these components.

### Greedy Coloring Algorithm

The `libgraph::greedy_coloring` function implements a greedy coloring algorithm. Given an input graph represented by an adjacency matrix, this algorithm assigns colors to vertices in such a way that no two adjacent vertices have the same color. The function returns a mapping of vertices to colors.

```cpp
std::unordered_map<uint32_t, uint32_t> greedy_coloring(const libgraph::adjacency_matrix& graph);
```

## Usage

To use this algorithm, include the necessary header files in your code and link against the compiled object files.
This algorithm uses 'libgraph::adjacency_matrix' as graph representation (please look for it in my repositories).

### Make options

- **make all** - makes everything (libraries and tests).
- **make tests** - makes tests.
- **make libgraph** - makes libgraph only.
- **make libgcoloring** - makes libgcoloring (graph coloring library) only.
- **make clean** - removes redundant files/directories.

## Author

Abraham Gabrielyan, software engineer at AMD.

## Contacts
gabrielyanabraham@gmail.com
