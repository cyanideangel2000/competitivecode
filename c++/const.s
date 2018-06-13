	.section	__TEXT,__text,regular,pure_instructions
	.section	__TEXT,__StaticInit,regular,pure_instructions
	.align	4, 0x90
___cxx_global_var_init:                 ## @__cxx_global_var_init
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp2:
	.cfi_def_cfa_offset 16
Ltmp3:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp4:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	__ZStL8__ioinit(%rip), %rdi
	callq	__ZNSt8ios_base4InitC1Ev
	movq	__ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rdi
	leaq	__ZStL8__ioinit(%rip), %rsi
	movq	___dso_handle@GOTPCREL(%rip), %rdx
	callq	___cxa_atexit
	movl	%eax, -4(%rbp)          ## 4-byte Spill
	addq	$16, %rsp
	popq	%rbp
	ret
	.cfi_endproc

	.section	__TEXT,__text,regular,pure_instructions
	.globl	__Z4try1v
	.align	4, 0x90
__Z4try1v:                              ## @_Z4try1v
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp7:
	.cfi_def_cfa_offset 16
Ltmp8:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp9:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	-8(%rbp), %rdi
	movl	$10, %esi
	callq	__ZN5varunC1Ei
	leaq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	ret
	.cfi_endproc

	.section	__TEXT,__textcoal_nt,coalesced,pure_instructions
	.globl	__ZN5varunC1Ei
	.weak_definition	__ZN5varunC1Ei
	.align	4, 0x90
__ZN5varunC1Ei:                         ## @_ZN5varunC1Ei
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp12:
	.cfi_def_cfa_offset 16
Ltmp13:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp14:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rdi
	movl	-12(%rbp), %esi
	callq	__ZN5varunC2Ei
	addq	$16, %rsp
	popq	%rbp
	ret
	.cfi_endproc

	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp17:
	.cfi_def_cfa_offset 16
Ltmp18:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp19:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	callq	__Z4try1v
	movq	__ZSt4cout@GOTPCREL(%rip), %rdi
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %esi
	callq	__ZNSolsEi
	movq	__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rsi
	movq	%rax, %rdi
	callq	__ZNSolsEPFRSoS_E
	movl	$0, %ecx
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	movl	%ecx, %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.cfi_endproc

	.section	__TEXT,__textcoal_nt,coalesced,pure_instructions
	.globl	__ZN5varunC2Ei
	.weak_definition	__ZN5varunC2Ei
	.align	4, 0x90
__ZN5varunC2Ei:                         ## @_ZN5varunC2Ei
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp22:
	.cfi_def_cfa_offset 16
Ltmp23:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp24:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rdi
	movl	-12(%rbp), %esi
	movl	%esi, (%rdi)
	popq	%rbp
	ret
	.cfi_endproc

	.section	__TEXT,__StaticInit,regular,pure_instructions
	.align	4, 0x90
__GLOBAL__I_a:                          ## @_GLOBAL__I_a
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp27:
	.cfi_def_cfa_offset 16
Ltmp28:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp29:
	.cfi_def_cfa_register %rbp
	callq	___cxx_global_var_init
	popq	%rbp
	ret
	.cfi_endproc

.zerofill __DATA,__bss,__ZStL8__ioinit,1,0 ## @_ZStL8__ioinit
	.section	__DATA,__mod_init_func,mod_init_funcs
	.align	3
	.quad	__GLOBAL__I_a

.subsections_via_symbols
