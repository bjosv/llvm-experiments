# misc-const-correctness

../clang-tools-extra/clang-tidy/misc/ConstCorrectnessCheck.cpp

From clang-tidy 15 via
https://reviews.llvm.org/D54943

```
cd examples/misc-const-correctness
mkdir build && cd build
cmake ..

# Check
run-clang-tidy.py -clang-tidy-binary /usr/bin/clang-tidy-15 -checks="-*,misc-const-correctness"

# Fix
run-clang-tidy.py -clang-tidy-binary /usr/bin/clang-tidy-15 -clang-apply-replacements-binary /usr/bin/clang-apply-replacements-15 -checks="-*,misc-const-correctness" -fix
```

### Changes
adjust treating of array-of-pointers when 'AnalyzePointers' is deactivated
https://reviews.llvm.org/D130793

 improve documentation for misc-const-correctness
 https://reviews.llvm.org/D132244


[clang-tidy] Added `ConstAlignment` option to `misc-const-correctness`
https://reviews.llvm.org/D131386


[clang-tidy] Adds QualifierAlignment to misc-const-correctness.
https://reviews.llvm.org/D131859
<Abandoned>

### Other

https://reviews.llvm.org/D69764

https://reviews.llvm.org/D54395

