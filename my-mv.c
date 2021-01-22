#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>


int main(int argc, char const *argv[])
{	
	if (argc < 3){ 
		printf("%s\n", "put the two pathes");
		return 1;

	}
	int fdSrcFile = open(argv[1], O_RDONLY);
	if(fdSrcFile == -1){
		printf("%s\n", "Put valid path of source");
		return 2;
	}
	int fdDstFile = open(argv[2], O_CREAT | O_WRONLY , S_IRUSR |  S_IWUSR);
	if(fdDstFile == -1){
		printf("%s\n", "put valid path to destination");
		return 3;
	}
	char buffer[2];
	ssize_t charCount;
	while((charCount = read(fdSrcFile, buffer, sizeof(buffer))) != 0){
		write(fdDstFile, buffer, charCount);
	}
	remove(argv[1]);
	return 0;

}