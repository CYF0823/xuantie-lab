	.text
	.globl	myfac
	.type	myfac,@function	
myfac:
	addi	sp,sp,-32
	sd	ra,24(sp)
	sd	s0,16(sp)
	addi	s0,sp,32
	mv	a5,a0
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	beqz	a5,jump0
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,jump1
jump0:	li	a5,1
	j	jump2
jump1:	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	mv	a0,a5
	jal	ra,myfac
	mv	a5,a0
	mv	a4,a5
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	jal	ra,mymul
	mv	a5,a0
jump2:	mv	a0,a5
	ld	ra,24(sp)
	ld	s0,16(sp)
	addi	sp,sp,32
	ret






