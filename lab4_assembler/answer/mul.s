	.text
	.globl	mymul
	.type	mymul,@function
mymul:
	addi	sp,sp,-32
	sd	s0,24(sp)
	add	a2,x0,x0
	li	a4,32
	beqz	a0,return
	beqz	a1,return
loop1:	andi	a3,a1,1
	beqz	a3,loop2
	add	a2,a2,a0
loop2:	slli	a0,a0,0x1
	addi	a4,a4,-1
	beqz	a4,return
	srai	a1,a1,0x1
	j	loop1
return:	addw	a0,a2,x0
	ld	s0,24(sp)
	addi	sp,sp,32
	ret

