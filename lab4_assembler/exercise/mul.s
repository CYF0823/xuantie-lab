	.text
	.globl	mymul
	.type	mymul,@function
mymul:
	addi	sp,sp,-32
	sd	ra,24(sp)
	sd	s0,16(sp)
	addi	s0,sp,32

	#Your code here	
	
	ld	ra,24(sp)
	ld	s0,16(sp)
	addi	sp,sp,32
	ret

