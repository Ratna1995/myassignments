#include"header.h"

int main(int argc, char *argv[])
{
	int i;
	FILE *fp;
	FILE *fp1;
	my_Eheader Eheader;
	my_Sec_header *Sec_header;
	char *section_name = NULL;

	if(NULL == (fp = fopen(argv[1],"r"))){
		perror("file open failed\n");
		exit(0);
	}

	if(NULL == (fp1 = fopen(argv[1],"r"))){
		perror("file open failed");
		exit(0);
	}

	if((fread(&Eheader, 52, 1, fp))<0){
		printf("can't read from a file\n");
		exit(0);
	}
	printf("MY ELF HEADER:\n");
	printf("magic:\t");
	for(i = 0; i< EI_IDENT; i++)
		printf("%4x", Eheader.magic_number[i]);
	printf("\n");

	printf("Class:\t\t\t\t\t");
	switch(Eheader.magic_number[4]){
		case 0:
			printf("%s\n","Invalid Class");
			break;
		case 1: 
			printf("%s\n","ELF32");
			break;
		case 2: 
			printf("%s\n","ELF64");
	}

	printf("Data:\t\t\t\t\t");
	switch(Eheader.magic_number[5]){
		case 0:
			printf("none\n");
			break;
		case 1: 
			printf("2's Complement, Little Endian\n");
			break;
		case 2: 
			printf("2's complement, Big Endian\n");
			break;
	}

	printf("Version:\t\t\t\t");
	switch(Eheader.magic_number[6]){
		case 0:
			printf("%s\n", "none");
			break;
		case 1:
			printf("%s\n", "1 (current)");
			break;
	}

	printf("OS/ABI:\t\t\t\t\t");
	switch(Eheader.magic_number[7]){
		case 0: 
			printf("%s\n", "UNIX - SYSTEM V");
			break;
		case 1:
			printf("%s\n", "LINUX ABI");
			break;
		case 2:
			printf("%s\n", "SOLARIS ABI");
			break;
		case 3:
			printf("%s\n", "ARM architecture ABI");
			break;
		case 4:
			printf("%s\n", "Stand - alone ABI");
			break;
	}

	printf("ABI VERSION:\t\t\t\t");
	printf("%d\n", Eheader.magic_number[8]);

	printf("Type:\t\t\t\t\t");
	switch(Eheader.obj_file_type){
		case 0:
			printf("%s\n", "Unknown file");
			break;
		case 1:
			printf("%s\n", "REL (relocatble file)");
			break;
		case 2: 
			printf("%s\n", "EXEC (executable file)");
			break;
		case 3:
			printf("%s\n", "shared object file");
			break;
		case 4: 
			printf("%s\n", "core file");
			break;
	}

	printf("Machine:\t\t\t\t");
	switch(Eheader.file_arch){
		case 0: 
			printf("Unknown machine\n");
			break;
		case 1: 
			printf("AT&T WE 32100\n");
			break;
		case 2:
			printf("Sun Microsystems SPARC\n");
			break;
		case 3:
			printf("Intel 30386\n");
			break;
		case 4: 
			printf("Motorola 68000\n");
			break;
		case 5:
			printf("Motorola 88000\n");
			break;
		case 6:
			printf("Intel 80860\n");
			break;
		case 7:
			printf("Advanced RISC architecture\n");
			break;
	}

	printf("Version:\t\t\t\t");
	switch(Eheader.file_version){
		case 0:
			printf("NONE");
			break;
		case 1:
			printf("0x%X\n", 1);
			break;
	}

	printf("Entry point Address:\t\t\t");
	printf("0x%X\n", Eheader.virtual_address);

	printf("Start of program headers:\t\t");
	printf("%d (bytes into file)\n", Eheader.prog_header_offset);

	printf("Start of section headers:\t\t");
	printf("%d (bytes into file)\n", Eheader.section_header_offset);

	printf("FLAGS:\t\t\t\t\t");
	printf("0x%x\n", Eheader.file_processor_flags);

	printf("Size of this header:\t\t\t");
	printf("%d (bytes)\n", Eheader.ELF_header_size);

	printf("Size of program headers:\t\t");
	printf("%d (bytes)\n", Eheader.prog_header_size);

	printf("Number of program headers:\t\t");
	printf("%d\n", Eheader.header_entries);

	printf("size of section headers:\t\t");
	printf("%d (bytes)\n", Eheader.sec_header_size);

	printf("number of section headers:\t\t");
	printf("%d\n", Eheader.section_entries);

	printf("Section header string table index:\t");
	printf("%d\n", Eheader.section_header_index);

	printf("\n");

	if(NULL == (Sec_header = (my_Sec_header *) malloc(sizeof(my_Sec_header)))){
		printf("malloc failed\n");
		exit(0);
	}

	fseek(fp, Eheader.section_header_offset, SEEK_SET);

	fseek(fp1, Eheader.section_header_offset+(Eheader.sec_header_size * Eheader.section_header_index), SEEK_SET);
	fread(Sec_header,Eheader.sec_header_size, 1, fp1);
	
	if(NULL == (section_name = (char *) malloc(500*sizeof(char)))){
		printf("malloc failed");
		exit(0);
	}

	fseek(fp1, Sec_header->sec_header_offset, SEEK_SET);
	fread(section_name, Sec_header->sec_header_size, 1, fp1);

	printf("Section Header:\n");
	printf("[Nr]  Name\t\t\t\tType\t\tAddr\t\tOff\tSize\tES\t"
			"Flag\tLk\tInf\tAl\n");

	for(i = 0; i < Eheader.section_entries; i++){
		fread(Sec_header, sizeof(*Sec_header), 1, fp);
		printf("[%d]", i);
		printf("%-14s\t\t\t", (section_name + Sec_header->sec_header_name));

		switch(Sec_header->sec_header_type){
			case 0:
				printf("NULL\t\t");
				break;
			case 1:
				printf("PROGBITS\t");
				break;
			case 2:
				printf("SYMTAB\t\t");
				break;
			case 3:
				printf("STRTAB\t\t");
				break;
			case 4:
				printf("RELA\t\t");
				break;
			case 5:
				printf("HASH\t\t");
				break;
			case 6:
				printf("DYNAMIC\t\t");
				break;
			case 7:
				printf("NOTE\t\t");
				break;
			case 8:
				printf("NOBITS\t\t");
				break;
			case 9:
				printf("REL\t\t");
				break;
			case 10:
				printf("SHLIB\t\t");
				break;
			case 11:
				printf("DYNSYM\t\t");
				break;
			case 14:
				printf("INIT_ARRAY\t");
				break;
			case 15: 
				printf("FINI_ARRAY\t");
				break;
			case 0x6ffffff6:
				printf("GNU_HASH\t");
				break;
			case 0x6fffffff:
				printf("VERSYM\t\t");
				break;
			case 0x6ffffffe:
				printf("VERNEED\t\t");
				break;
			case 0x70000000:
				printf("LOPROC\t\t");
				break;
			case 0x7FFFFFFF:
				printf("HIPROC\t\t");
				break;
			case 0X80000000:
				printf("LOUSER\t\t");
				break;
			case 0x8FFFFFFF:
				printf("HIUSER\t\t");
				break;
		}
		
		printf("%08x\t", Sec_header->sec_header_addr);
		printf("%06x\t", Sec_header->sec_header_offset);
		printf("%06x\t", Sec_header->sec_header_size);
		printf("%02x\t", Sec_header->sec_header_entsize);

		switch(Sec_header->sec_header_flags){
			case 0x2:
				printf("A\t");
				break;
			case 0x6:
				printf("AX\t");
				break;
			case 0x3:
				printf("WA\t");
				break;
			case 0x30:
				printf("MS\t");
				break;
			default:
				printf("\t");
				break;
		}

		printf("%d\t", Sec_header->sec_header_link);
		printf("%d\t", Sec_header->sec_header_info);
		printf("%d\n", Sec_header->sec_header_addralign);

	}
	return 0;
}
	
