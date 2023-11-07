# cppcoreguidelines-avoid-const-or-ref-data-members

## ISO C++ rule:
https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rc-constref

### Rule changes (Jan 19 2023):
https://github.com/isocpp/CppCoreGuidelines/commit/06fabdc9af386c75ae308a004fde75b0e09f5cfd

## Improvements
### Add config option:
  Only warn on 'non-const ref' warnings (more serious than 'const non ref' and 'const ref')
Warn: "non-const ref"
Skip: "const non ref"  "const ref"

## Code
clang-tools-extra/clang-tidy/cppcoreguidelines/AvoidConstOrRefDataMembersCheck.cpp
clang-tools-extra/test/clang-tidy/checkers/cppcoreguidelines/avoid-const-or-ref-data-members.cpp


## Previous changes:

### Jul 18 2023, 10:18 AM.
[clang-tidy] Warn only for copyable/movable classes in cppcoreguidelines-avoid-const-or-ref-members
Fix: https://reviews.llvm.org/D155625
Issue: https://github.com/llvm/llvm-project/issues/63733

## Proposed changes
Split cppcoreguidelines-avoid-const-or-ref-data-members or make it configurable
https://github.com/llvm/llvm-project/issues/68303


## Other info
https://stackoverflow.com/questions/71754782/questions-about-c-core-guideline-c-12-don-t-make-data-members-const-or-refere

## Run
https://godbolt.org/z/hj7re9scK
