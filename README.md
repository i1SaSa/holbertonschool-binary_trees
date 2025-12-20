# Binary Trees 🌳

A comprehensive implementation of Binary Tree data structures in C - Holberton School Project

## Description 📝

This project contains a complete implementation of binary tree data structures and algorithms in C. It includes a wide range of functions for creating, manipulating, and analyzing binary trees, from basic operations to advanced tree traversal and analysis techniques.

## Environment 🖥️

- **OS**: Ubuntu 20.04 LTS
- **Compiler**: gcc
- **Compilation flags**: `-Wall -Werror -Wextra -pedantic -std=gnu89`

## Data Structure 🏗️

```c
/**
 * struct binary_tree_s - Binary tree node
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

## Files and Functions 📂

### Basic Operations

| File | Function | Description |
|------|----------|-------------|
| `0-binary_tree_node.c` | `binary_tree_node` | Creates a binary tree node |
| `1-binary_tree_insert_left.c` | `binary_tree_insert_left` | Inserts a node as the left-child of another node |
| `2-binary_tree_insert_right.c` | `binary_tree_insert_right` | Inserts a node as the right-child of another node |
| `3-binary_tree_delete.c` | `binary_tree_delete` | Deletes an entire binary tree |
| `4-binary_tree_is_leaf.c` | `binary_tree_is_leaf` | Checks if a node is a leaf |
| `5-binary_tree_is_root.c` | `binary_tree_is_root` | Checks if a given node is a root |

### Tree Traversal

| File | Function | Description |
|------|----------|-------------|
| `6-binary_tree_preorder.c` | `binary_tree_preorder` | Pre-order traversal |
| `7-binary_tree_inorder.c` | `binary_tree_inorder` | In-order traversal |
| `8-binary_tree_postorder.c` | `binary_tree_postorder` | Post-order traversal |

### Tree Measurements

| File | Function | Description |
|------|----------|-------------|
| `9-binary_tree_height.c` | `binary_tree_height` | Measures the height of a binary tree |
| `10-binary_tree_depth.c` | `binary_tree_depth` | Measures the depth of a node |
| `11-binary_tree_size.c` | `binary_tree_size` | Measures the size of a binary tree |
| `12-binary_tree_leaves.c` | `binary_tree_leaves` | Counts the leaves in a binary tree |
| `13-binary_tree_nodes.c` | `binary_tree_nodes` | Counts the nodes with at least 1 child |

### Tree Properties

| File | Function | Description |
|------|----------|-------------|
| `14-binary_tree_balance.c` | `binary_tree_balance` | Measures the balance factor of a binary tree |
| `15-binary_tree_is_full.c` | `binary_tree_is_full` | Checks if a binary tree is full |
| `16-binary_tree_is_perfect.c` | `binary_tree_is_perfect` | Checks if a binary tree is perfect |

### Tree Relationships

| File | Function | Description |
|------|----------|-------------|
| `17-binary_tree_sibling.c` | `binary_tree_sibling` | Finds the sibling of a node |
| `18-binary_tree_uncle.c` | `binary_tree_uncle` | Finds the uncle of a node |

## Compilation 🔨

All files are compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_trees
```

## Usage Example 💻

```c
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    
    binary_tree_print(root);
    
    return (0);
}
```

## Testing 🧪

Each task comes with its own main file for testing:
- `0-main.c` through `18-main.c`

Compile and run any test file:

```bash
gcc -Wall -Werror -Wextra -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
./0-node
```

## Helper Functions 🛠️

- `binary_tree_print.c` - Function to print binary trees in a pretty format

## Header File 📋

- `binary_trees.h` - Contains all function prototypes and structure definitions

## Authors 👥

- **[Mustafa Alalami](https://github.com/i1SaSa)**
- **[Rabea Thabit](https://github.com/rabea14180-max)**

## Project Structure 📊

```
holbertonschool-binary_trees/
├── 0-binary_tree_node.c
├── 1-binary_tree_insert_left.c
├── 2-binary_tree_insert_right.c
├── 3-binary_tree_delete.c
├── 4-binary_tree_is_leaf.c
├── 5-binary_tree_is_root.c
├── 6-binary_tree_preorder.c
├── 7-binary_tree_inorder.c
├── 8-binary_tree_postorder.c
├── 9-binary_tree_height.c
├── 10-binary_tree_depth.c
├── 11-binary_tree_size.c
├── 12-binary_tree_leaves.c
├── 13-binary_tree_nodes.c
├── 14-binary_tree_balance.c
├── 15-binary_tree_is_full.c
├── 16-binary_tree_is_perfect.c
├── 17-binary_tree_sibling.c
├── 18-binary_tree_uncle.c
├── binary_tree_print.c
├── binary_trees.h
└── README.md
```

## Resources 📚

- [Binary tree (Wikipedia)](https://en.wikipedia.org/wiki/Binary_tree)
- [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
- [Tree Traversal](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/)
- [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)

## License 📄

This project is part of the Holberton School curriculum.

---

**Holberton School - Binary Trees Project** 🎓
