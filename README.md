# Build test

```
make test
```

# Run the test

#### All test cases

```
build/app_test
```

#### Only [square_root]

```
build/app_test "[square_root]"
```

#### All test cases except [square_root]

```
build/app_test ~"[square_root]";
```

# References

- [Catch - Command line options](https://github.com/philsquared/Catch/blob/master/docs/command-line.md)
- [Getting Catch](https://github.com/philsquared/Catch/blob/master/docs/tutorial.md)
- [Simple C++ Testing With Catch in Xcode](http://hiltmon.com/blog/2014/10/26/simple-c-plus-plus-testing-with-catch-in-xcode/)
