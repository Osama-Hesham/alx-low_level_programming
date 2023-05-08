#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error(char *msg) {
    fprintf(stderr, "Error: %s\n", msg);
    exit(98);
}

void print_elf_header(Elf64_Ehdr *header) {
    char *magic_str = malloc(EI_NIDENT * 3 + 1);
    char *type_str = "<unknown>";
    char *osabi_str = "<unknown>";

    sprintf(magic_str, "%02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x",
            header->e_ident[0], header->e_ident[1], header->e_ident[2], header->e_ident[3],
            header->e_ident[4], header->e_ident[5], header->e_ident[6], header->e_ident[7],
            header->e_ident[8], header->e_ident[9], header->e_ident[10], header->e_ident[11],
            header->e_ident[12], header->e_ident[13], header->e_ident[14], header->e_ident[15]);
    printf("  Magic:   %s\n", magic_str);
    free(magic_str);

    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d%s\n", header->e_ident[EI_VERSION], header->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");

    if (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) {
        osabi_str = "UNIX - System V";
    } else if (header->e_ident[EI_OSABI] == ELFOSABI_HPUX) {
        osabi_str = "UNIX - HP-UX";
    } else if (header->e_ident[EI_OSABI] == ELFOSABI_NETBSD) {
        osabi_str = "UNIX - NetBSD";
    } else if (header->e_ident[EI_OSABI] == ELFOSABI_LINUX) {
        osabi_str = "UNIX - Linux";
    } else if (header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS) {
        osabi_str = "UNIX - Solaris";
    } else if (header->e_ident[EI_OSABI] == ELFOSABI_IRIX) {
        osabi_str = "UNIX - IRIX";
    } else if (header->e_ident[EI_OSABI] == ELFOSABI_FREEBSD) {
        osabi_str = "UNIX - FreeBSD";
    } else if (header->e_ident[EI_OSABI] == ELFOSABI_TRU64) {
        osabi_str = "UNIX - TRU64";
    } else if (header->e_ident[EI_OSABI] == ELFOSABI_ARM) {
        osabi_str = "ARM";
    } else if (header->e_ident[EI_OSABI] == ELFOSABI_STANDALONE) {
        osabi_str = "Standalone App";
    }
    printf("  OS/ABI:                            %s\n", osabi_str);
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    if (header->e_type == ET_NONE) {
        type_str = "NONE (No file type)";
    } else if (header->e_type == ET_REL) {
        type_str = "REL (Relocatable file)";
    } else if (header->e_type == ET_EXEC) {
        type_str = "EXEC (Executable file)";
    } else if (header->e_type == ET_DYN) {
        type_str = "DYN (Shared object file)";
    }
    else if (header->e_type == ET_CORE)
    {
        type_str = "CORE (Core file)";
    }
    printf("  Type:                              %s\n", type_str);
    printf("  Entry point address:               %lx\n", header->e_entry);
}

int main(int argc, char **argv) {
    
    int myfile = open(argv[1], O_RDONLY);
    Elf64_Ehdr header;
    ssize_t readfile = read(myfile, &header, sizeof(header));

    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }
    if (myfile == -1) {
        print_error("Cannot open file");
    }
    if (readfile != sizeof(header))
    {
        print_error("Cannot read ELF header");
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
    {
        print_error("Not an ELF file");
    }

    print_elf_header(&header);

    if (close(myfile) == -1)
    {
        print_error("Cannot close file");
    }
    return (0);
}
