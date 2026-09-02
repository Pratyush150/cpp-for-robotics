# cpp-for-robotics

Short, self-contained C++ programs working through language fundamentals using robotics
examples. Command parsing, sensor fault handling, pointer semantics on robot state,
fixed-precision telemetry output, and a basic Eigen vector example.

**Scope: this is a learning repository.** One concept per file, each compiling on its
own with a single `g++` command. It is public because the examples are clear, not
because it is a library. Nothing here is meant to be linked into a project.

---

## Why robotics examples instead of `Animal` classes

The standard C++ tutorial examples teach syntax attached to nothing. These use the
situations the syntax is actually for in robotics code:

- Parsing a command string off a serial line, which is `std::getline` plus
  `std::stringstream`, not a regex library.
- Handling a sensor that returns garbage, which is where exception handling stops being
  an abstract exercise.
- Passing robot state around without copying it, which is what references and pointers
  are for.
- Printing telemetry at a fixed number of decimals, because `std::cout` defaults produce
  unreadable logs.

Same language features. Context you will meet again.

---

## What is in it

| File | Concept |
|---|---|
| `simple_eigen_example.cpp` | Eigen vector construction and printing — entry point to linear algebra in control code |
| `getline_robot_command.cpp` | Reading a full command line including spaces with `std::getline` |
| `stringstream_robotics.cpp` | Tokenising a command string into fields with `std::stringstream` |
| `robot_exceptionHandling.cpp` | `try` / `catch` applied to a sensor fault path |
| `robot_pointer.cpp` | Pointers and references against robot state |
| `robot_control.cpp` | Control flow driving a simple robot behaviour |
| `robot_condition.cpp` | Conditionals and branching on sensor state |
| `sensor_status.cpp` | Sensor status handling and enumerated state |
| `float_precision.cpp` | `std::setprecision` and `std::fixed` for readable telemetry |
| `type_casting.cpp` | Implicit and explicit conversion, and where it bites |
| `constants_example.cpp` | `const` correctness |
| `auto_keyword_ex.cpp` | Type deduction with `auto` |
| `destructor_ex.cpp` | Destructors and object lifetime |
| `simple_robot.cpp` | A small class holding robot state |
| `variable_example.cpp` | Types, scope, initialisation |
| `robot_output.cpp` | Stream output formatting |
| `robot_printf_formatting.cpp` | C-style formatted output for comparison |
| `robot_commenting.cpp` | Comment styles and documentation habits |
| `main_example.cpp` | `main` signature and command-line arguments |
| `hello_world.cpp` | The starting point |

Several filenames were misspelled in earlier commits (`constans_ex`, `float_precission`,
`sensors_staatus`, `robot_commentinng`). They have been corrected.

---

## Build and run

Any single file:

```bash
g++ -std=c++17 -Wall -Wextra -o robot_pointer robot_pointer.cpp
./robot_pointer
```

The Eigen example needs the Eigen headers:

```bash
sudo apt install libeigen3-dev
g++ -std=c++17 -I/usr/include/eigen3 -o simple_eigen_example simple_eigen_example.cpp
./simple_eigen_example
```

Eigen is header-only — there is nothing to link, only an include path. On many systems
`#include <eigen3/Eigen/Dense>` works without the `-I` flag; if it does not, the flag is
the fix.

Build everything with CMake:

```bash
make            # wraps: cmake -S . -B build && cmake --build build -j
ls build/bin    # one executable per example
```

Or drive CMake directly:

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake --build build -j"$(nproc)"
```

Every top-level `.cpp` becomes its own executable in `build/bin/`, compiled with
`-Wall -Wextra -Wpedantic`. Eigen is located with `find_package(Eigen3 QUIET)`; if it is
absent, only the Eigen example is skipped and the rest still build. A GitHub Actions
workflow runs this build on every push.

---

## What this is and is not

**It is** fundamentals practice, kept public and organised. If you are learning C++ for
robotics, the parsing, exception and Eigen files are the ones worth reading.

**It is not** a library, a framework, or production code. There is a CMake build so the
examples actually compile, but there is no API and no test suite. Do not depend on it.

For C++ written to be used rather than read, see the ROS 2 hardware interface in
[ros2-inspection-robot-hw](https://github.com/Pratyush150/ros2-inspection-robot-hw).

---

## Related work

Actively developed engineering tools:

| Repo | What it does |
|---|---|
| [px4-mavlink-companion](https://github.com/Pratyush150/px4-mavlink-companion) | MAVLink bridge, stale-telemetry watchdog, offboard control, serial auto-discovery |
| [flight-log-analyzer](https://github.com/Pratyush150/flight-log-analyzer) | PX4 ULog / ArduPilot log analysis producing a ranked findings report |
| [jetson-realtime-detection](https://github.com/Pratyush150/jetson-realtime-detection) | Real-time detection and tracking with per-stage latency profiling |
| [lidar-slam-toolkit](https://github.com/Pratyush150/lidar-slam-toolkit) | LiDAR SLAM configs plus extrinsics, time-sync and drift diagnostics |
| [drone-control-toolkit](https://github.com/Pratyush150/drone-control-toolkit) | PID with anti-windup, cascaded loops, LQR, EKF and complementary estimators |
| [ros2-drone-bringup](https://github.com/Pratyush150/ros2-drone-bringup) | ROS 2 bringup for a PX4 aircraft: geodesy, missions, geofence, SITL |

---

## License

MIT. Copyright (c) 2026 Pratyush Vatsa
