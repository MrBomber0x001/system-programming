# cp(copy) && mv(move) commands Implementation
Implementing a cp-like && mv-like commands using c as a practice of system programming. 
## Compiling
First compile the program using [g++](https://www.geeksforgeeks.org/compiling-with-g-plus-plus/)
```bash
g++ my-cp.c -o my-cp
g++ my-mv.c -o my-mv
```
Then run the program, having two pathes (one you want to copy or move from, the other one the path you want to copy or move to), let's say you have a source.txt file and you want to copy or move it into current directory: 
```bash
./my-cp source.txt destination.txt
./my-mv source.txt ~/Desktop/workspace/destination.txt
```

## Contributing
Pull requests are welcomed, for changes please open an issue first to discuss what you would like to change.
