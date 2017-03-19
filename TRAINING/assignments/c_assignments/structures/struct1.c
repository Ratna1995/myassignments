#include<stdio.h>                                                               
                                                                                
#pragma pack(1)          
/* structure for format1 of size 5bytes*/                                                       
struct format1                                                                  
{                                                                               
    char HEC : 8;                                                               
    char  CLP : 1;                                                              
    char PTI : 3;                                                               
    short int VCI : 16;                                                         
    char VPI : 8;                                                               
    char GFC : 4;                                                               
};                                                                              
                                       
/* structure for format 2 of size 28bytes*/                                         
struct format2                                                                  
{                                                                               
    short int source_port;                                                      
    short int dest_port;                                                        
    int source_number;                                                          
    int destination_number;                                                     
    int header_length : 4;                                                      
    int reserved : 6;                                                           
    int code_bits : 6;                                                          
    short int window;                                                           
    short int chechsum;                                                         
    short int urgent;                                                           
    int options;                                                                
    int data;                                                                   
};                                                                              
                                         
/* structure for format 3 of size 24bytes*/                                       
struct format3                                                                  
{                                                                               
    char version : 4;                                                           
    int header_length : 4;                                                      
    char service_type;                                                          
    short int identification;                                                   
    short int total_length;                                                     
    char flags : 4;                                                             
    int fragment_offset : 12;                                                   
    char ttl;                                                                   
    char protocol;      
    short int header_checksum;                                                  
    int source_ip_addr;                                                         
    int dest_ip_sddr;                                                           
    int options : 20;                                                           
    short int : 12;                                                           
};                                                                              
                                                                                
int main()                                                                      
{                                                                               
                                                                                
    printf("sizeof(struct format1) : %d\n", sizeof(struct format1));            
    printf("sizeof(struct format2) : %d\n", sizeof(struct format2));            
    printf("sizeof(struct format3) : %d\n", sizeof(struct format3));            
    return 0;                                                                   
}  
