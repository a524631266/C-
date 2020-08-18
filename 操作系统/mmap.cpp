// #include <linux/sched.h>
// #include <linux/kernel.h>

// #include <cstdio>
// #include <cstring>
#include <fcntl.h>
#include <sys/mman.h>
#include <memory.h>
#include <unistd.h>
#include <sys/stat.h>
int main(int argc, char const *argv[])
{
    int fdin, fdout;
    void *src, *dst;
    struct stat statbuf;
    // open hello
    fdin = open("Hello.txt", O_RDONLY);
    fdout = open("World.txt", O_RDWR | O_CREAT | O_TRUNC, S_IRWXU );

    fstat(fdin, &statbuf);

    // 调整
    lseek(fdout, statbuf.st_size - 1, SEEK_SET);
    write(fdout, "",1);

    // 内存映射
    src = mmap(0, statbuf.st_size, PROT_READ, MAP_SHARED, fdin, 0);
    dst = mmap(0, statbuf.st_size , PROT_READ | PROT_WRITE, MAP_SHARED, fdout, 0);
    memcpy(dst, src, statbuf.st_size);

    return 0;
}
