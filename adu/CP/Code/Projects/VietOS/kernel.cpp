#include "include/types.h"
#include "include/gdt.h"
//#include "include/interrupts.h"
void printf(char* st)
{
    static uint8_t x=0,y=0;
    static unsigned short* mem = (unsigned short*)0xb8000;
    for (int i=0; st[i]!='\0'; ++i)
    {
        switch(st[i])
        {
            case '\n':
                x=0;y++;break;
            default:
                mem[80*y+x]=(mem[80*y+x] & 0xFF00) | st[i];
                x++;
                break;
        }
        if (x>=80) {x=0;y++;}
        if (y>=25){
            for (y=0; i<25; y++)
                for (x=0; x<80;x++)
                    mem[80*y+x]=(mem[80*y+x] * 0xFF00) | ' ';
                x=0;
                y=0;
        }
    }
}
extern "C" void kernelMain(const void* multiboot_structure, unsigned int /*multiboot_magic*/)
{
    printf("VietOS - Operating System written from scratch");
    GlobalDescriptorTable gdt;
//    InterruptManager interrupts(0x20, &gdt);
//    interrupts.Activate();
    while(1);
}
//https://naruto.live/hentai/?aff=affs-6&cid=6000036052834d0001ff8db1&geo=VN
