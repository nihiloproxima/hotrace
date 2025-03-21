# HotRace

A high-performance key-value store implementation that simulates a search engine's basic functionality. This project focuses on optimizing search operations for maximum speed.

## About

This is a school project from 42 School, to be completed within a 2-day time limit. The challenge focuses on implementing efficient data structures and algorithms to create a high-performance key-value store system.

The strict time constraint of 48 hours requires careful planning and optimization to deliver a working solution that meets the performance requirements.


## Overview

HotRace is a program that implements a fast key-value store with the following operations:
- Store key-value pairs
- Retrieve values by key
- Delete key-value pairs
- Handle various input formats including spaces in keys and values

## Usage

### Compilation

1. Clone the repository:
```bash
git clone [repository-url]
cd hotrace
```

2. Compile the program using make:
```bash
make
```

This will generate the `hotrace` executable.

3. To recompile:
```bash
make re
```

4. To clean object files:
```bash
make clean
```

5. To remove all generated files:
```bash
make fclean
```

### Running the Program

```bash
./hotrace
```

The program reads from standard input and processes commands in two phases:

### Phase 1: Data Input
Enter key-value pairs in the format:
```
key=value
```
- Each pair must be on a new line
- Keys and values can contain spaces
- If a key already exists, the new entry is ignored
- To delete a key-value pair, prefix the key with '!': `!key`
- An empty line signals the end of the data input phase

### Phase 2: Search Queries
After the empty line, enter keys to search:
```
key1
key2
```
- One key per line
- For each query, the program outputs either:
  - The corresponding value if found
  - "key: Not found" if the key doesn't exist

## Examples

Input:
```
hello=world
bonjour=salut
hello=newworld
space key=space value
!bonjour
empty key=
key=with=equals

hello
bonjour
space key
notfound
empty key
key
```

Output:
```
world
Not found
space value
Not found
empty key
with=equals
```

## Features

- Fast key-value lookups optimized for performance
- Support for ASCII printable characters
- Handles spaces in both keys and values
- Supports multiple equals signs in values
- Memory efficient storage

## Technical Details

- Written in C
- No external dependencies
- Handles EOF and SIGINT for program termination
- Optimized for speed in search operations

## Project Goals

This project is part of a performance challenge where correctly functioning implementations are ranked based on their execution speed. The main objective is to create the fastest possible implementation while maintaining correct functionality.
