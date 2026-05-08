# C Practice Notes

Keep each note short and practical.

## Template

### Topic

### What I Learned

### Example

### Common Mistake

### Fix / Rule

---

## 2026-04-26 — Binary Search Return Value

### Topic
Binary search: what to return when not found.

### What I Learned
In search functions, `0` is a valid index (first element), so it cannot mean "not found".

### Example
- If target is at first position, function returns `0`.
- If target does not exist, function returns `-1`.

### Common Mistake
Using `return 0;` for not found, which conflicts with "found at index 0".

### Fix / Rule
- Return index (`0` to `size-1`) when found.
- Return `-1` when not found.
 



# C++

## Class

 1. In structure we cannot define functions but in class we can define functions.
 2. Every class contains access modifiers -> Public, private and protected.
 3. When member is present in C++ it is inside class or structure



=> Converting into binary (compiling). --> Taking it to CPU  (execution).

1. namespace -> bunch of classes, variables and objects.
2. std :: cout -> there is an object 'cout' inside standard 'class'.


# make tic tac toe game in C++ 