# SortProfiler
## 📚 Table of Contents
- [SortProfiler](#sortprofiler)
  - [📚 Table of Contents](#-table-of-contents)
  - [💡 Objective](#-objective)
  - [🗺️ Roadmap](#️-roadmap)
    - [CLI](#cli)
      - [🧭 CLI Navigation Flow Example](#-cli-navigation-flow-example)
    - [GUI](#gui)
  - [🧠 Notes for Future Me](#-notes-for-future-me)
    - [GUI Options](#gui-options)
    - [Log Format](#log-format)
    - [Performance Analyzer Goals](#performance-analyzer-goals)
    - [Code Organization Ideas](#code-organization-ideas)
    - [Stretch Goals](#stretch-goals)
    - [Reminders](#reminders)

## 💡 Objective
This project (SortProfiler) has two main components to it:

1. Commonly studied sorting algorithms
2. Application performance analysis 

The sorting algorithms themselves are largely irrelevant, but they play a substitute role in what may make an app "slow" or "fast." As a proxy, they provide a controlled environment to simulate performance bottlenecks. To determine where slowness may come from, the second part of this project aims to build a stack trace with analytics (e.g. time metrics and function hierarchies) attached to it for interpretation. These statistics aim to highlight areas of an app that are underperforming and should be remedied to improve the user experience.

## 🗺️ Roadmap
At a glance, there are two stages to SortProfiler:

1. Command Line Interface (CLI) implementation
2. GUI Implementation

### CLI
This stage is largely focused on the functionality of the project with some level of interactability.

- [X] Implement sorting algorithms
  -  Keep it simple with several algorithms: [1] Bubble sort [2] Insertion sort [3] Merge sort [4] Quick [5] Radix sort [6] Selection sort [7] STL sort().
- [X] Welcome the user to the **main menu**
  - [X] Provide three options: [1] Enter the sorting algorithm benchmark [2] Enter the performance analyzer [E] Exit the program.
- [ ] Sorting algorithm benchmark
  - [ ] Option 1: Run the currently selected sorting algorithm and display (print) time metrics after completion. Return to the benchmark menu (i.e. prompt the user again).
  - [ ] Option 2: Allow the user to change the benchmark's settings. [1] Change the sorting algorithm [2] Change the number of items to sort [3] Turn on/off the creation of performance logs.
  - [ ] Option 3: Return to the main menu.
  - [ ] Option 4: Exit the program.
- [ ] Performance analyzer (TO-WRITE)

#### 🧭 CLI Navigation Flow Example
```mermaid
graph TD;
  A[Program Start] ---> B[Main menu prompt];

  B -- [1] --> C[Sorting algorithm benchmark];
  B -- [2] --> D[Performance analyzer];
  B -- [E] --> E[Program Exit];

  C -- [1] --> C1[Run selected algorithm];
  C -- [2] --> C2[Change benchmark settings];
  C -- [R] --> B;
  C -- [E] --> E;

  D -- [E] --> E;
```

### GUI
Once the CLI implementation is complete, a GUI hopes to resemble a real-world application with a clean, interactable interface.

Potential goals (to expand on later):
- [ ] Create a basic windowed layout with main menu navigation
- [ ] Display benchmarking results using simple charts (bar or line)
- [ ] Allow log file selection and analysis

## 🧠 Notes for Future Me

### GUI Options
Remember to start small. Get things working first with a basic layout before focusing on the aesthestics. Here are some considerations:
  - Qt: Full-featured, good for polished apps.
  - ImGui: Fast prototyping, great for dev tools.

### Log Format
  - Begin with JSON.
  - Consider moving to SQLite if project interest is still there in the future...
  
### Performance Analyzer Goals
1. Parse logs (start with JSON).
2. Show function hierarchy + time metrics.
3. Visualize with charts or tables.


### Code Organization Ideas
My `.cpp` files are likely to get crowded later. Here are some considerations for future refactoring:
  - `cli_utils.cpp/.h` – menu functions
  - `sorting.cpp/.h` – algorithms
  - `benchmark.cpp/.h` – timers + logs
  - `analyzer.cpp/.h` – log parsing

### Stretch Goals
  - Load + analyze saved logs
  - Multi-run stats (avg/worst)
  - Algorithm suggestions based on data
  - Add unit tests for major components

### Reminders
  - Build first, refactor later.
  - One small step at a time!
