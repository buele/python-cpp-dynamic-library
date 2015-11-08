Call Dynamic Library Methods By Python
=============================


###Introduction

How to create a dynamic library in C++ and call a method by python.

###Compile C++ library

```
$ g++ -dynamiclib -flat_namespace *.cc -o mylib.so
```

### Run dynamic library method by python
```
$ python3 dynamic-library-call.py
```
