#include "main.h"
#include <elf.h>

/**
 * print_elf_header - displays info contained in the ELF header at the start of an ELF file
 * @header: a pointer to the header file
 * Return: displayed infornation
*/
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("Class: %d\n", header->e_ident[EI_CLASS]);
	printf("Data: %d\n", header->e_ident[EI_DATA]);
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: %lx\n", header->e_entry);
}

/**
 * main - prints the required information
 * @argc: the number of arguments
 * @argv: an array of elements
 * Return: 98 if not an ELF file or on error, 0 for success
*/

int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error reading ELFheader");
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Not an ELF file\n");
		exit(98);
	}
	print_elf_header(&header);
	close(fd);
	return (0);
}
