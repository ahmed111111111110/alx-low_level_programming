#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: number of arguments.
 * @argv: An array of pointers to arguments.
 *
 * Return: 0 on success.
 *
 */

int main(int argc, char *argv[])
{
int fd;
struct elf_header elf_header;
if (argc != 2)
{
fprintf(stderr, "Usage: elf_header elf_filename\n");
exit(98);
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(98);
}
lseek(fd, 0, SEEK_SET);


read(fd, &elf_header, sizeof(elf_header));
if (elf_header.e_ident[0] != 0x7F || elf_header.e_ident[1] != 'E' ||
elf_header.e_ident[2] != 'L' || elf_header.e_ident[3] != 'F')
{
fprintf(stderr, "Error: Not an ELF file\n");
exit(98);
}

printf("Magic: 0x%08x\n", elf_header.e_ident[4] |
(elf_header.e_ident[5] << 8) | (elf_header.e_ident[6] << 16) |
(elf_header.e_ident[7] << 24));
printf("Class: %d\n", elf_header.e_class);
printf("Data: %d\n", elf_header.e_data);
printf("Version: %d\n", elf_header.e_version);
printf("OS/ABI: %d\n", elf_header.e_osabi);
printf("ABI Version: %d\n", elf_header.e_abiversion);
printf("Type: %d\n", elf_header.e_type);
printf("Entry point address: 0x%08x\n", elf_header.e_entry);

close(fd);

return (0);
}
