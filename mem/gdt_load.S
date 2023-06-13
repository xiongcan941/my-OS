[GLOBAL load_gdt]


load_gdt:
	mov eax,[esp +4]
	lgdt [eax]

	mov ax,0x10;内核数据段相对位置
	mov dx,ax
	mov es,ax
	mov fs,ax
	mov ss,ax

	mov ax,0x18;video段相对位置
	mov gs,ax

	jmp 0x08:.flush;内核代码段
.flush:
	ret


