
 # ****************************Begin Copyright 1D**********************************
 # Unpublished work (c) MIPS Technologies, Inc.  All rights reserved.
 # Unpublished rights reserved under the copyright laws of the United States
 # of America and other countries.
 # 
 # This code is confidential and proprietary to MIPS Technologies, Inc. ("MIPS
 # Technologies") and  may be disclosed only as permitted in writing by MIPS
 # Technologies or an authorized third party.  Any copying, reproducing,
 # modifying, use or disclosure of this code (in whole or in part) that is not
 # expressly permitted in writing by MIPS Technologies or an authorized third
 # party is strictly prohibited.  At a minimum, this code is protected under
 # trade secret, unfair competition, and copyright laws.  Violations thereof
 # may result in criminal penalties and fines.
 # 
 # MIPS Technologies reserves the right to change this code to improve function,
 # design or otherwise.  MIPS Technologies does not assume any liability arising
 # out of the application or use of this code, or of any error or omission in
 # such code.  Any warranties, whether express, statutory, implied or otherwise,
 # including but not limited to the implied warranties of merchantability or 
 # fitness for a particular purpose, are excluded.  Except as expressly provided
 # in any written license agreement from MIPS Technologies or an authorized third
 # party, the furnishing of this code does not give recipient any license to any
 # intellectual property rights, including any patent rights, that cover this code.
 # 
 # This code shall not be exported or transferred for the purpose of reexporting
 # in violation of any U.S. or non-U.S. regulation, treaty, Executive Order, law,
 # statute, amendment or supplement thereto.
 # 
 # This code may only be disclosed to the United States government ("Government"),
 # or to Government users, with prior written consent from MIPS Technologies or an
 # authorized third party.  This code constitutes one or more of the following:
 # commercial computer software, commercial computer software documentation or
 # other commercial items.  If the user of this code, or any related documentation
 # of any kind, including related technical data or manuals, is an agency,
 # department, or other entity of the Government, the use, duplication,
 # reproduction, release, modification, disclosure, or transfer of this code, or
 # any related documentation of any kind, is restricted in accordance with Federal
 # Acquisition Regulation 12.212 for civilian agencies and Defense Federal
 # Acquisition Regulation Supplement 227.7202 for military agencies.  The use of
 # this code by the Government is further restricted in accordance with the terms
 # of the license agreement(s) and/or applicable contract terms and conditions
 # covering this code from MIPS Technologies or an authorized third party.
 # *******************************End Copyright************************************


	.text
	.set		noreorder
	.set		nomacro

	.global		dspr2_mips_vec_abs32
	.ent		dspr2_mips_vec_abs32

dspr2_mips_vec_abs32:

# void dspr2_mips_vec_abs32(int32 *outdata, int32 *indata, int N)
# $a0 - outdata
# $a1 - indata
# $a2 - N = 4*n >= 4

	andi		$a2, $a2, 0xFFFC	# make sure N is multiple of 4
	sll		$a2, $a2, 2		# N * sizeof(int32)
	addu		$a2, $a0, $a2		# final address in outdata

	subu		$t4, $a1, $a0		# pointer offsets for LWX
	addiu		$t5, $t4, 4
	addiu		$t6, $t4, 8
	addiu		$t7, $t4, 12
	
	lwx		$t0, $t4($a0)
	lwx		$t1, $t5($a0)
	lwx		$t2, $t6($a0)
	lwx		$t3, $t7($a0)

	.align		4

loop:
	addiu		$a0, $a0, 16		# 4 * sizeof(int32)

	absq_s.w	$v0, $t0
	absq_s.w	$v1, $t1
	absq_s.w	$t8, $t2
	absq_s.w	$t9, $t3

	lwx		$t0, $t4($a0)
	lwx		$t1, $t5($a0)
	lwx		$t2, $t6($a0)
	lwx		$t3, $t7($a0)

	sw		$v0, -16($a0)
	sw		$v1, -12($a0)
	sw		$t8, -8($a0)

	bne		$a0, $a2, loop
	sw		$t9, -4($a0)

	# 4 stall cycles - mispredicted branch

	jr		$ra
	ssnop

	.end		dspr2_mips_vec_abs32
