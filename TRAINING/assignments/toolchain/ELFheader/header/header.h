#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

#define EI_IDENT 16
/*sturcture for ELF header*/
typedef struct {
	unsigned char magic_number[EI_IDENT];
	unsigned short int obj_file_type;
	unsigned short int file_arch;
	unsigned int file_version;
	unsigned int virtual_address;
	unsigned int prog_header_offset;
	unsigned int section_header_offset;
	unsigned int file_processor_flags;
	unsigned short int ELF_header_size;
	unsigned short int prog_header_size;
	unsigned short int header_entries;
	unsigned short int sec_header_size;
	unsigned short int section_entries;
	unsigned short int section_header_index;
}my_Eheader;

/*
#define EI_MAG0 0
#define ELFMAG0 0X7F
#define EI_MAG1 1
#define ELFMAG1 'E'
#define EI_MAG2 2
#define ELFMAG2 'L'
#define EI_MAG3 3
#define ELFMAG3 'F'

#define EI_CLASS 4
#define ELFCLASSNONE 0                           
#define ELFCLASS32 1                                     
#define ELFCLASS64 2

#define EI_DATA 5
#define ELFDATANONE 0
#define ELFDATA2LSB 1
#define ELFDATA2MSB 2

#define EI_VERSION 6
#define EV_NONE 0
#define EV_CURRENT 1

#define EI_OSABI    7                            
#define ELFOSABI_NONE       0                           
#define ELFOSABI_SYSV       0           
#define ELFOSABI_LINUX      1         
#define ELFOSABI_SOLARIS    2                     
#define ELFOSABI_ARM        3                                   
#define ELFOSABI_STANDALONE 4      
                                                                                
#define EI_ABIVERSION   8                                 
                                                                                
#define  ET_NONE 0
#define  ET_REL  1
#define  ET_EXEc 2
#define  ET_DYN  3
#define  ET_CORE 4

#define EM_NONE  0
#define EM_M32   1
#define EM_SPARC 2
#define EM_386   3
#define EM_68k   4
#define EM_88k   5
#define EM_860   6
#define EM_ARM   7

#define EV_NONE 0
#define EV_CURRENT 1
*/

typedef struct                                                                  
{                                                                               
unsigned int sec_header_name;        /* Section name */           
unsigned int sec_header_type;        /* Section type */                              
unsigned int sec_header_flags;       /* Section flags */                             
unsigned int sec_header_addr;        /* Section virtual addr at execution */         
unsigned int sec_header_offset;      /* Section file offset */                           
unsigned int sec_header_size;        /* Section size in bytes */                     
unsigned int sec_header_link;        /* Link to another section */                   
unsigned int sec_header_info;        /* Additional section information */            
unsigned int sec_header_addralign;       /* Section alignment */                     
unsigned int sec_header_entsize;     /* Entry size if section holds table */         
} my_Sec_header;

/*
#define SHT_NULL 0
#define SHT_PROGBITS 1
#define SHT_SYMTAB 2
#define SHT_STRTAB 3
#define SHT_RELA 4
#define SHT_HASH 5
#define SHT_DYNAMIC 6
#define SHT_NOTE 7
#define SHT_NOBITS 8
#define SHT_REL 9
#define SHT_SHLIB 10
#define SHT_DYNSYM 11
#define SHT_INIT_ARRAY 14
#define SHT_FINI_ARRAY 15
#define SHT_GNU_HASH 0x6ffffff6
#define SHT_GNU_verneed 0x6fffffff
#define SHT_GNU_versym 0x6ffffffe
#define SHT_LOPROC 0X70000000
#define SHT_HIPROC 0X7FFFFFFF
#define SHT_LOUSER 0X80000000
#define SHT_HIUSER 0X8FFFFFFF

#define SHF_WRITE 0
#define SHF_ALLOC 1
#define SHF_EXECINSTR 2
#define SHF_MASKPROC 3
*/
