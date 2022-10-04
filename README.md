# llvm experiments


## Build clang-tidy
```
git clone https://github.com/llvm/llvm-project.git
cd llvm-project
mkdir build && cd build
cmake -G Ninja -DCMAKE_BUILD_TYPE=Release -DLLVM_ENABLE_PROJECTS="clang;clang-tools-extra" ../llvm
ninja

# Make
cmake -DCMAKE_BUILD_TYPE=Release -DLLVM_ENABLE_PROJECTS="clang;clang-tools-extra" ../llvm
make -j16 install-clang-tidy
```


## clang-tidy checker: readability-make-member-function-const
https://reviews.llvm.org/D68074
https://reviews.llvm.org/D122075

### Code:
..llvm-project/clang-tools-extra/clang-tidy/readability/MakeMemberFunctionConstCheck.cpp


## Run clang-tidy online
https://godbolt.org/z/sMKKfPaqq


## Other
https://llvm.org/docs/Contributing.html
https://llvm.org/docs/GettingStarted.html
