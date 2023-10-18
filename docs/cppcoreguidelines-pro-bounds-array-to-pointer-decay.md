# cppcoreguidelines-pro-bounds-array-to-pointer-decay

## Run with compile_commands.json
~/bin/run-clang-tidy.py -checks='-*,cppcoreguidelines-pro-bounds-array-to-pointer-decay'

## Run using different versions
~/bin/run-clang-tidy.py -checks='-*,cppcoreguidelines-pro-bounds-array-to-pointer-decay' -clang-tidy-binary clang-tidy-11
~/bin/run-clang-tidy.py -checks='-*,cppcoreguidelines-pro-bounds-array-to-pointer-decay' -clang-tidy-binary clang-tidy-12
~/bin/run-clang-tidy.py -checks='-*,cppcoreguidelines-pro-bounds-array-to-pointer-decay' -clang-tidy-binary clang-tidy-13
~/bin/run-clang-tidy.py -checks='-*,cppcoreguidelines-pro-bounds-array-to-pointer-decay' -clang-tidy-binary clang-tidy-14
~/bin/run-clang-tidy.py -checks='-*,cppcoreguidelines-pro-bounds-array-to-pointer-decay' -clang-tidy-binary clang-tidy-15
~/bin/run-clang-tidy.py -checks='-*,cppcoreguidelines-pro-bounds-array-to-pointer-decay' -clang-tidy-binary clang-tidy-17
~/bin/run-clang-tidy.py -checks='-*,cppcoreguidelines-pro-bounds-array-to-pointer-decay' -clang-tidy-binary ~/git/llvm-project/build/bin/clang-tidy

## Fixed issues

### Ignore predefined expression
https://reviews.llvm.org/D158244

clang-tidy: cppcoreguidelines-pro-bounds-array-to-pointer-decay complains about any assert() with glibc 2.34
https://github.com/llvm/llvm-project/issues/53174

### Disable clang-tidy warnings from system macros
https://reviews.llvm.org/D116378
https://github.com/llvm/llvm-project/issues/31587
Fixed by (Jan 6, 2022)
https://github.com/llvm/llvm-project/commit/670de10f9deaa83f4d1db6e793c74cbfd18c65c1

### cppcoreguidelines-pro-bounds-array-to-pointer-decay handling __PRETTY_FUNCTION__
https://github.com/llvm/llvm-project/issues/28854
Closed by: https://reviews.llvm.org/D158244
