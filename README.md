# Mari

Mari is a C++ math library made because I didn't like the ones that existed, and knew enough to make one myself.

## Using

1. Add the `mari.hpp` file to yuor project
2. Add this option whenever you compile your project that has Mari in it:
`<wherever libmari.a is>/libmari.a  -L<wherever libmari.a is> -lmari`

You can also use Mari as a header-only library by adding the files and folders from `no-compile` to your project and including them.