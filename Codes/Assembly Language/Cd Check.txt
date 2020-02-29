.model small		; It's a flaw of mine ... I really like this model
			; I know I should do a .com with the tiny model.. 
			; but I just love the small :>
.stack 100h		; Plenty stack ;>
.386

.data         
info db 30 dup (0)
right db 'Right CD$'
wrong db 'Wrong CD$'
nomscdex db 'MSCDEX not installed$'
.code
mov ax, @data            ; Make DS&ES point to the DATA
mov ds,ax
mov es,ax

lea edx, nomscdex
xor ebx,ebx
mov eax, 1500h		; MSCDEX installed?
int 2fh
test ebx,ebx
jz exit			


mov edi,10h
nextloop:
mov ecx,edi
mov ax, 150bh		; is drive ECX supported by MSCDEX (is it a cdrom?)
int 2fh
test ax,ax		; ax!=0 if drive is CDrom
jz continiue

mov ax, 440dh
mov dx, offset info
mov bl,5
mov ch,8
mov cl,66h
int 21h			; Fetch volume serial number (same as when you do dir)

mov eax, dword ptr [info+2]
cmp eax, 0ffb7f724h; 	;<<<<calibrate this to fit your own "right" CD
jnz continiue

lea edx, right
jmp exit

continiue:
dec edi			; next drive
jnz nextloop
lea edx, wrong		; not in any drive!
exit:
mov ah, 9h
int 21h

mov ax,4c00h           		; terminate!
int 21h

end