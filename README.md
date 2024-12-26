# std::vector<bool> Optimization Issues

This repository demonstrates a potential issue with the `std::vector<bool>` specialization in C++.  Due to optimizations that treat `std::vector<bool>` as a bitfield instead of a vector of booleans, accessing its elements might not behave as expected.  This can lead to unexpected bugs and difficult-to-debug issues.

## The Problem
The standard `std::vector<bool>` is optimized to reduce memory usage by storing booleans as bits within a larger memory block. However, this optimization can change the way elements are accessed, potentially resulting in unexpected behavior compared to other `std::vector` types.

## How to Reproduce
The `bug.cpp` file contains code demonstrating this issue.  Running this code might show behavior different from what one would expect with a regular `std::vector`. 

## Solution
The `bugSolution.cpp` file offers a solution by avoiding `std::vector<bool>` and using a more standard approach like `std::vector<char>` where each char represents a boolean value.