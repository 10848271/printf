# 0x11. C - printf

A protoype for the c printf standard library function.

## How to repo locally
### For a contributor
- Create a printf directory: `mkdir printf`
- Move into the created directory: `cd printf`
- Initialize the directory as a git repo: `git init`
- Create main branch: `git branch -M main`
- Connect remote repo to local repo: `git remote add origin main https://github.com/10848271/printf.git`
- Pull remote resources locally: `git pull`

### For other users
- Create a printf directory: `mkdir printf`
- Move into the created directory: `cd printf`
- Clone the repo: `git clone  https://github.com/10848271/printf.git`
## File Structure Explained
1. [main.h](./main.h): this is where structs definitions and function prototypes are listed.
2. [flag.c](./flag.c): this is where functions handling flag modifiers are implemented.
3. [field_widths.c](./field_widths.c): this is where functions handling field width modifiers are implemented.
4. [precisions.c](./precisions.c): this is where functions handling precisions modifiers are implemented.
5. [length_modifiers.c](./length_modifiers.c): this is where functions handling length modifiers are implemented.
6. [conversion_specifiers.c](./conversion_specifiers): this is where functions handling conversion specifiers are implemented.
   - [conversion_helpers.c](./conversion_helpers.c): will contain implementations of functions that will be used to perform a successful conversion

