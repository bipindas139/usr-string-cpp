# usr_string

A custom string class implemented in C++ to understand how dynamic memory, pointers, constructors/destructors, and operator overloading work internally. The class manages its own `char*` buffer instead of using `std::string`.

## Features

- Default, parameterized, and copy constructors
- Destructor with manual memory cleanup
- `set()` / `get()` for basic input and output
- Overloaded operators: `=`, `+`, `[]`, `<<`, `>>`, and full comparisons (`<`, `>`, `<=`, `>=`, `==`, `!=`)
- Friend functions implementing common C string operations directly on `usr_string` objects

## Custom String Functions

- `usr_strcpy()`
- `usr_strncpy()`
- `usr_strcmp()`
- `usr_strncmp()`
- `usr_strcat()`
- `usr_strncat()`
- `usr_strrev()`
- `usr_strupper()`
- `usr_strlower()`
- `usr_strchr()`
- `usr_strrchr()`
- `usr_strstr()`
- `usr_strlen()`

## Files

- `usr_string.h` — class and friend function declarations
- `usr_string.cpp` — implementation
- `main.cpp` — runs through each feature to verify it works

## Build

```bash
g++ main.cpp usr_string.cpp -o usr_string
./usr_string
```

## Notes

This was built as a learning exercise to get hands-on practice with pointers,
heap allocation, object lifetime, and operator overloading — not as a
drop-in replacement for `std::string`.
