#include "main.h"
#include <elf.h>

#define BUFSIZE 1024

/**
 * main - displays the information contained in the ELF header of an ELF file
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char **argv)
{
        int fd, bytes_read, i;
        Elf64_Ehdr header;

        /* validate the command line arguments */
        if (argc != 2)
        {
                dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
                exit(98);
        }

        /* open the ELF file */
        fd = open(argv[1], O_RDONLY);
        if (fd == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
                exit(98);
        }

        /* read the ELF header */
        bytes_read = read(fd, &header, sizeof(header));
        if (bytes_read != sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
        {
                dprintf(STDERR_FILENO, "%s: Error: Not an ELF file\n", argv[1]);
                exit(98);
        }

        /* print the ELF header information */
        printf("ELF Header:\n");
        printf("  Magic:   ");
        for (i = 0; i < EI_NIDENT; i++)
                printf("%02x ", header.e_ident[i]);
        printf("\n");
        printf("  Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "unknown");
        printf("  Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "unknown");
        printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
        printf("  OS/ABI:                            %s\n", header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "unknown");
        printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
        printf("  Type:                              %s\n", header.e_type == ET_REL ? "REL (Relocatable file)" :
                                                                header.e_type == ET_EXEC ? "EXEC (Executable file)" :
                                                                header.e_type == ET_DYN ? "DYN (Shared object file)" :
                                                                header.e_type == ET_CORE ? "CORE (Core file)" : "unknown");
        printf("  Entry point address:               0x%lx\n", header.e_entry);
        printf("\n");

        /* close the ELF file */
        close(fd);

        return (0);
}

