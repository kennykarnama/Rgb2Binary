# Rgb2Binary

Convert RGB Image to Binary Using Otsu Method

Otsu implementation could be read in this [journal](http://www.ipol.im/pub/art/2016/158/)

# Contribute

1. Fork it
2. Create pull request

# Prerequisite

- Visual Studio 2017 (didn't try another version of VS)
- CMake 3.13.3
- Opencv 3.4.5

# Preparation

Before use this project, there are several preparation steps should be done :

1. Build opencv 3.4.5 using CMake 3.13.3 and integrate with visual studio 2017. You could take Look at this [tutorial](https://stackoverflow.com/questions/43786856/how-can-i-install-configure-opencv3-2-0-with-c-visual-studio-2017) 
2. Make sure on VS2017, the solution has already included opencv header and been linked with the appropriate libs of opencv. You could look at [this](https://stackoverflow.com/questions/18360540/error-lnk2019-unresolved-external-symbol-opencv)
3. Just run it in VS2017. Remember, set the command line argument before run it in debug mode. 

# Run the application

After build the solution, you could run it by issuing command in CMD or your any favorite terminals. 

`./rgb2binary [path to your image]`

![Alt Text](https://media.giphy.com/media/41x8FUoapSS8noBn5c/giphy.gif)
