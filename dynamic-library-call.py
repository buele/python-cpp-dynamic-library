from ctypes import *
cdll.LoadLibrary("mylib.so")
libc = CDLL("mylib.so")
print(libc.sum(3,3))
