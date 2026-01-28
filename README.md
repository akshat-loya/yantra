# yantra

yantra is a custom 2D (and maybe 3D) game engine and editor written in C++.

## Project Overview

This project provides a modular 2D (and 3D) engine with a built-in editor. It's organized into separate components:

- **Engine**: Core engine library with math utilities and engine systems
- **Editor**: Interactive editor application for development
- **Math Library**: Header-only 3D math utilities (Vector3D, Line3D, Plane3D)

## Project Structure

```
yantra/
├── Engine/
│   ├── include/
│   │   ├── core/          Engine core headers
│   │   └── math/          Math library headers (header-only)
│   ├── src/
│   │   ├── core/          Engine implementation
│   │   └── math/          Math implementations
│   └── CMakeLists.txt
├── Editor/
│   ├── include/           Editor headers
│   ├── src/
│   │   └── main.cpp       Editor entry point
│   └── CMakeLists.txt
├── External/              Third-party libraries
├── Shaders/               GLSL shader files
├── Assets/                Game assets
└── CMakeLists.txt         Root build configuration
```

## Build Instructions

### Prerequisites
- CMake 3.22 or higher
- C++17 compatible compiler
- macOS, Linux, or Windows

### Building

```bash
cd yantra
cmake -B build
cmake --build build
./build/bin/Editor
```

## Features

### Math Library (Header-Only)
- **Vector3D**: 3D vector operations
  - Addition, subtraction, scalar multiplication
  - Dot and cross products
  - Magnitude and unit vector normalization
  - Floating-point comparison with epsilon tolerance
  - Copy and move semantics

- **Line3D**: 3D line representation
  - Point and direction representation
  - Automatic direction normalization
  - Graceful handling of zero-magnitude directions

- **Plane3D**: 3D plane representation
  - Point and normal vector representation
  - Automatic normal normalization
  - Graceful handling of zero-magnitude normals

### Engine Core
- Modular architecture
- Organized include directories per subsystem
- CMake configuration for easy scaling

### Editor
- Test application for all engine features
- Comprehensive test suite

## Development

### Adding New Modules
1. Create subdirectory in Engine/include/ and Engine/src/
2. Add headers in the include subdirectory
3. Add implementation in the src subdirectory
4. CMakeLists.txt automatically picks up all includes

## Testing

TBD

## License

TBD

## Author

akshat-loya
