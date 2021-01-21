#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include<fcntl.h>

int main(int argc, char const *argv[])
{	
	if (argc < 3){ 
		printf("%s\n", "put the two pathes");
		return 1;

	}
	int fdSrcFile = open(argv[1], O_RDONLY );
	if(fdSrcFile == -1){
		printf("%s\n", "Put valid path");
		return 2;
	}
	int fsDstFile = open(argv[2], O_CREAT | O_WRONLY , S_IRUSR|  S_IWUSR);
	if(fdSrcFile == -1){
		return 3;
	}
	char buffer[2];
	ssize_t charCount;
	while((charCount = read(fdSrcFile, buffer, sizeof(buffer))) != 0){
		write(fsDstFile, buffer, charCount);
	}
	return 0;

}