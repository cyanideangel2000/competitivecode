	.section	__TEXT,__text,regular,pure_instructions
	.globl	__Z4testILi0EEvv
	.align	4, 0x90
__Z4testILi0EEvv:                       ## @_Z4testILi0EEvv
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
	subq	$32, %rsp
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rdi
	leaq	L_.str(%rip), %rsi
	callq	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	leaq	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_(%rip), %rsi
	movq	%rax, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	*-16(%rbp)
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	addq	$32, %rsp
	popq	%rbp
	ret
	.cfi_endproc

	.section	__TEXT,__textcoal_nt,coalesced,pure_instructions
	.globl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.weak_definition	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.align	4, 0x90
__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc: ## @_ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
Leh_func_begin1:
	.cfi_lsda 16, Lexception1
## BB#0:
	pushq	%rbp
Ltmp39:
	.cfi_def_cfa_offset 16
Ltmp40:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp41:
	.cfi_def_cfa_register %rbp
	subq	$432, %rsp              ## imm = 0x1B0
	movq	%rdi, -216(%rbp)
	movq	%rsi, -224(%rbp)
	movq	-216(%rbp), %rsi
Ltmp5:
	leaq	-240(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_
Ltmp6:
	jmp	LBB1_1
LBB1_1:
	leaq	-240(%rbp), %rax
	movq	%rax, -208(%rbp)
	movq	-208(%rbp), %rax
	movb	(%rax), %cl
	movb	%cl, -281(%rbp)         ## 1-byte Spill
## BB#2:
	movb	-281(%rbp), %al         ## 1-byte Reload
	testb	$1, %al
	jne	LBB1_3
	jmp	LBB1_28
LBB1_3:
	movq	-224(%rbp), %rax
	movq	%rax, -200(%rbp)
Ltmp7:
	movq	%rax, %rdi
	callq	_strlen
Ltmp8:
	movq	%rax, -296(%rbp)        ## 8-byte Spill
	jmp	LBB1_4
LBB1_4:                                 ## %_ZNSt3__111char_traitsIcE6lengthEPKc.exit
	jmp	LBB1_5
LBB1_5:
	leaq	-272(%rbp), %rax
	movq	-296(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -264(%rbp)
	movq	-216(%rbp), %rdx
	movq	%rax, -184(%rbp)
	movq	%rdx, -192(%rbp)
	movq	-184(%rbp), %rax
	movq	-192(%rbp), %rdx
	movq	%rax, -152(%rbp)
	movq	%rdx, -160(%rbp)
	movq	-152(%rbp), %rax
	movq	-160(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	-24(%rsi), %rsi
	addq	%rsi, %rdx
	movq	%rdx, -144(%rbp)
	movq	-144(%rbp), %rdx
	movq	%rdx, -136(%rbp)
	movq	-136(%rbp), %rdx
	movq	40(%rdx), %rdx
	movq	%rdx, (%rax)
	movq	-224(%rbp), %rsi
	movq	-216(%rbp), %rax
	movq	(%rax), %rdx
	movq	-24(%rdx), %rdx
	addq	%rdx, %rax
	movq	%rax, -96(%rbp)
	movq	-96(%rbp), %rax
	movl	8(%rax), %edi
	movq	%rsi, -304(%rbp)        ## 8-byte Spill
	movl	%edi, -308(%rbp)        ## 4-byte Spill
## BB#6:
	movl	-308(%rbp), %eax        ## 4-byte Reload
	andl	$176, %eax
	cmpl	$32, %eax
	jne	LBB1_8
## BB#7:
	movq	-224(%rbp), %rax
	addq	-264(%rbp), %rax
	movq	%rax, -320(%rbp)        ## 8-byte Spill
	jmp	LBB1_9
LBB1_8:
	movq	-224(%rbp), %rax
	movq	%rax, -320(%rbp)        ## 8-byte Spill
LBB1_9:
	movq	-320(%rbp), %rax        ## 8-byte Reload
	movq	-224(%rbp), %rcx
	addq	-264(%rbp), %rcx
	movq	-216(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	-24(%rsi), %rsi
	addq	%rsi, %rdx
	movq	-216(%rbp), %rsi
	movq	(%rsi), %rdi
	movq	-24(%rdi), %rdi
	addq	%rdi, %rsi
	movq	%rsi, -80(%rbp)
	movq	-80(%rbp), %rsi
	movl	144(%rsi), %r8d
	movl	$-1, -4(%rbp)
	movl	%r8d, -8(%rbp)
	movl	-4(%rbp), %r8d
	cmpl	-8(%rbp), %r8d
	movq	%rax, -328(%rbp)        ## 8-byte Spill
	movq	%rcx, -336(%rbp)        ## 8-byte Spill
	movq	%rdx, -344(%rbp)        ## 8-byte Spill
	movq	%rsi, -352(%rbp)        ## 8-byte Spill
	jne	LBB1_18
## BB#10:
	movq	-352(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -40(%rbp)
	movb	$32, -41(%rbp)
	movq	-40(%rbp), %rsi
Ltmp9:
	leaq	-56(%rbp), %rdi
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp10:
	jmp	LBB1_11
LBB1_11:                                ## %.noexc
	leaq	-56(%rbp), %rax
	movq	%rax, -32(%rbp)
Ltmp11:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	movq	%rax, %rdi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp12:
	movq	%rax, -360(%rbp)        ## 8-byte Spill
	jmp	LBB1_12
LBB1_12:                                ## %_ZNSt3__19use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE.exit.i.i
	movb	-41(%rbp), %al
	movq	-360(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -16(%rbp)
	movb	%al, -17(%rbp)
	movq	-16(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	56(%rsi), %rsi
	movsbl	-17(%rbp), %edi
Ltmp13:
	movl	%edi, -364(%rbp)        ## 4-byte Spill
	movq	%rdx, %rdi
	movl	-364(%rbp), %r8d        ## 4-byte Reload
	movq	%rsi, -376(%rbp)        ## 8-byte Spill
	movl	%r8d, %esi
	movq	-376(%rbp), %rdx        ## 8-byte Reload
	callq	*%rdx
Ltmp14:
	movb	%al, -377(%rbp)         ## 1-byte Spill
	jmp	LBB1_16
LBB1_13:
Ltmp15:
	movl	%edx, %ecx
	movq	%rax, -64(%rbp)
	movl	%ecx, -68(%rbp)
Ltmp16:
	leaq	-56(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp17:
	jmp	LBB1_14
LBB1_14:
	movq	-64(%rbp), %rax
	movl	-68(%rbp), %ecx
	movq	%rax, -392(%rbp)        ## 8-byte Spill
	movl	%ecx, -396(%rbp)        ## 4-byte Spill
	jmp	LBB1_26
LBB1_15:
Ltmp18:
	movl	%edx, %ecx
	movq	%rax, %rdi
	movl	%ecx, -400(%rbp)        ## 4-byte Spill
	callq	___clang_call_terminate
LBB1_16:                                ## %_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc.exit.i
Ltmp19:
	leaq	-56(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp20:
	jmp	LBB1_17
LBB1_17:                                ## %.noexc1
	movb	-377(%rbp), %al         ## 1-byte Reload
	movsbl	%al, %ecx
	movq	-352(%rbp), %rdx        ## 8-byte Reload
	movl	%ecx, 144(%rdx)
LBB1_18:                                ## %_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillEv.exit
	movq	-352(%rbp), %rax        ## 8-byte Reload
	movl	144(%rax), %ecx
	movb	%cl, %dl
	movb	%dl, -401(%rbp)         ## 1-byte Spill
## BB#19:
	movq	-272(%rbp), %rdi
Ltmp21:
	movb	-401(%rbp), %al         ## 1-byte Reload
	movsbl	%al, %r9d
	movq	-304(%rbp), %rsi        ## 8-byte Reload
	movq	-328(%rbp), %rdx        ## 8-byte Reload
	movq	-336(%rbp), %rcx        ## 8-byte Reload
	movq	-344(%rbp), %r8         ## 8-byte Reload
	callq	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Ltmp22:
	movq	%rax, -416(%rbp)        ## 8-byte Spill
	jmp	LBB1_20
LBB1_20:
	leaq	-280(%rbp), %rax
	movq	-416(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -280(%rbp)
	movq	%rax, -88(%rbp)
	movq	-88(%rbp), %rax
	cmpq	$0, (%rax)
	jne	LBB1_27
## BB#21:
	movq	-216(%rbp), %rax
	movq	(%rax), %rcx
	movq	-24(%rcx), %rcx
	addq	%rcx, %rax
	movq	%rax, -120(%rbp)
	movl	$5, -124(%rbp)
	movq	-120(%rbp), %rax
	movq	%rax, -104(%rbp)
	movl	$5, -108(%rbp)
	movq	-104(%rbp), %rax
	movl	32(%rax), %edx
	orl	$5, %edx
Ltmp23:
	movq	%rax, %rdi
	movl	%edx, %esi
	callq	__ZNSt3__18ios_base5clearEj
Ltmp24:
	jmp	LBB1_22
LBB1_22:                                ## %_ZNSt3__19basic_iosIcNS_11char_traitsIcEEE8setstateEj.exit
	jmp	LBB1_23
LBB1_23:
	jmp	LBB1_27
LBB1_24:
Ltmp30:
	movl	%edx, %ecx
	movq	%rax, -248(%rbp)
	movl	%ecx, -252(%rbp)
	jmp	LBB1_31
LBB1_25:
Ltmp25:
	movl	%edx, %ecx
	movq	%rax, -392(%rbp)        ## 8-byte Spill
	movl	%ecx, -396(%rbp)        ## 4-byte Spill
LBB1_26:                                ## %.body
	movq	-392(%rbp), %rax        ## 8-byte Reload
	movl	-396(%rbp), %ecx        ## 4-byte Reload
	movq	%rax, -248(%rbp)
	movl	%ecx, -252(%rbp)
Ltmp26:
	leaq	-240(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
Ltmp27:
	jmp	LBB1_30
LBB1_27:
	jmp	LBB1_28
LBB1_28:
Ltmp28:
	leaq	-240(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
Ltmp29:
	jmp	LBB1_29
LBB1_29:
	jmp	LBB1_33
LBB1_30:
	jmp	LBB1_31
LBB1_31:
	movq	-248(%rbp), %rdi
	callq	___cxa_begin_catch
	movq	-216(%rbp), %rdi
	movq	(%rdi), %rcx
	movq	-24(%rcx), %rcx
	addq	%rcx, %rdi
Ltmp31:
	movq	%rax, -424(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv
Ltmp32:
	jmp	LBB1_32
LBB1_32:
	callq	___cxa_end_catch
LBB1_33:
	movq	-216(%rbp), %rax
	addq	$432, %rsp              ## imm = 0x1B0
	popq	%rbp
	ret
LBB1_34:
Ltmp33:
	movl	%edx, %ecx
	movq	%rax, -248(%rbp)
	movl	%ecx, -252(%rbp)
Ltmp34:
	callq	___cxa_end_catch
Ltmp35:
	jmp	LBB1_35
LBB1_35:
	jmp	LBB1_36
LBB1_36:
	movq	-248(%rbp), %rdi
	callq	__Unwind_Resume
LBB1_37:
Ltmp36:
	movl	%edx, %ecx
	movq	%rax, %rdi
	movl	%ecx, -428(%rbp)        ## 4-byte Spill
	callq	___clang_call_terminate
	.cfi_endproc
Leh_func_end1:
	.section	__TEXT,__gcc_except_tab
	.align	2
GCC_except_table1:
Lexception1:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	 "\257\201"             ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.ascii	 "\234\001"             ## Call site table length
Lset0 = Ltmp5-Leh_func_begin1           ## >> Call Site 1 <<
	.long	Lset0
Lset1 = Ltmp6-Ltmp5                     ##   Call between Ltmp5 and Ltmp6
	.long	Lset1
Lset2 = Ltmp30-Leh_func_begin1          ##     jumps to Ltmp30
	.long	Lset2
	.byte	7                       ##   On action: 4
Lset3 = Ltmp7-Leh_func_begin1           ## >> Call Site 2 <<
	.long	Lset3
Lset4 = Ltmp10-Ltmp7                    ##   Call between Ltmp7 and Ltmp10
	.long	Lset4
Lset5 = Ltmp25-Leh_func_begin1          ##     jumps to Ltmp25
	.long	Lset5
	.byte	7                       ##   On action: 4
Lset6 = Ltmp11-Leh_func_begin1          ## >> Call Site 3 <<
	.long	Lset6
Lset7 = Ltmp14-Ltmp11                   ##   Call between Ltmp11 and Ltmp14
	.long	Lset7
Lset8 = Ltmp15-Leh_func_begin1          ##     jumps to Ltmp15
	.long	Lset8
	.byte	5                       ##   On action: 3
Lset9 = Ltmp16-Leh_func_begin1          ## >> Call Site 4 <<
	.long	Lset9
Lset10 = Ltmp17-Ltmp16                  ##   Call between Ltmp16 and Ltmp17
	.long	Lset10
Lset11 = Ltmp18-Leh_func_begin1         ##     jumps to Ltmp18
	.long	Lset11
	.byte	11                      ##   On action: 6
Lset12 = Ltmp19-Leh_func_begin1         ## >> Call Site 5 <<
	.long	Lset12
Lset13 = Ltmp24-Ltmp19                  ##   Call between Ltmp19 and Ltmp24
	.long	Lset13
Lset14 = Ltmp25-Leh_func_begin1         ##     jumps to Ltmp25
	.long	Lset14
	.byte	7                       ##   On action: 4
Lset15 = Ltmp26-Leh_func_begin1         ## >> Call Site 6 <<
	.long	Lset15
Lset16 = Ltmp27-Ltmp26                  ##   Call between Ltmp26 and Ltmp27
	.long	Lset16
Lset17 = Ltmp36-Leh_func_begin1         ##     jumps to Ltmp36
	.long	Lset17
	.byte	7                       ##   On action: 4
Lset18 = Ltmp28-Leh_func_begin1         ## >> Call Site 7 <<
	.long	Lset18
Lset19 = Ltmp29-Ltmp28                  ##   Call between Ltmp28 and Ltmp29
	.long	Lset19
Lset20 = Ltmp30-Leh_func_begin1         ##     jumps to Ltmp30
	.long	Lset20
	.byte	7                       ##   On action: 4
Lset21 = Ltmp29-Leh_func_begin1         ## >> Call Site 8 <<
	.long	Lset21
Lset22 = Ltmp31-Ltmp29                  ##   Call between Ltmp29 and Ltmp31
	.long	Lset22
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset23 = Ltmp31-Leh_func_begin1         ## >> Call Site 9 <<
	.long	Lset23
Lset24 = Ltmp32-Ltmp31                  ##   Call between Ltmp31 and Ltmp32
	.long	Lset24
Lset25 = Ltmp33-Leh_func_begin1         ##     jumps to Ltmp33
	.long	Lset25
	.byte	0                       ##   On action: cleanup
Lset26 = Ltmp32-Leh_func_begin1         ## >> Call Site 10 <<
	.long	Lset26
Lset27 = Ltmp34-Ltmp32                  ##   Call between Ltmp32 and Ltmp34
	.long	Lset27
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset28 = Ltmp34-Leh_func_begin1         ## >> Call Site 11 <<
	.long	Lset28
Lset29 = Ltmp35-Ltmp34                  ##   Call between Ltmp34 and Ltmp35
	.long	Lset29
Lset30 = Ltmp36-Leh_func_begin1         ##     jumps to Ltmp36
	.long	Lset30
	.byte	7                       ##   On action: 4
Lset31 = Ltmp35-Leh_func_begin1         ## >> Call Site 12 <<
	.long	Lset31
Lset32 = Leh_func_end1-Ltmp35           ##   Call between Ltmp35 and Leh_func_end1
	.long	Lset32
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	0                       ## >> Action Record 1 <<
                                        ##   Cleanup
	.byte	0                       ##   No further actions
	.byte	1                       ## >> Action Record 2 <<
                                        ##   Catch TypeInfo 1
	.byte	125                     ##   Continue to action 1
	.byte	1                       ## >> Action Record 3 <<
                                        ##   Catch TypeInfo 1
	.byte	125                     ##   Continue to action 2
	.byte	1                       ## >> Action Record 4 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
	.byte	1                       ## >> Action Record 5 <<
                                        ##   Catch TypeInfo 1
	.byte	125                     ##   Continue to action 4
	.byte	1                       ## >> Action Record 6 <<
                                        ##   Catch TypeInfo 1
	.byte	125                     ##   Continue to action 5
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.align	2

	.section	__TEXT,__textcoal_nt,coalesced,pure_instructions
	.private_extern	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.globl	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.weak_definition	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.align	4, 0x90
__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_: ## @_ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
Leh_func_begin2:
	.cfi_lsda 16, Lexception2
## BB#0:
	pushq	%rbp
Ltmp52:
	.cfi_def_cfa_offset 16
Ltmp53:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp54:
	.cfi_def_cfa_register %rbp
	subq	$144, %rsp
	movq	%rdi, -72(%rbp)
	movq	(%rdi), %rax
	movq	-24(%rax), %rax
	movq	%rdi, %rcx
	addq	%rax, %rcx
	movq	%rcx, -32(%rbp)
	movb	$10, -33(%rbp)
	movq	-32(%rbp), %rsi
	leaq	-48(%rbp), %rax
	movq	%rdi, -80(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	movq	%rax, -88(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__18ios_base6getlocEv
	movq	-88(%rbp), %rax         ## 8-byte Reload
	movq	%rax, -24(%rbp)
	movq	-80(%rbp), %rcx         ## 8-byte Reload
Ltmp42:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	movq	%rax, %rdi
	movq	%rcx, -96(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp43:
	movq	%rax, -104(%rbp)        ## 8-byte Spill
	jmp	LBB2_1
LBB2_1:                                 ## %_ZNSt3__19use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE.exit.i
	movb	-33(%rbp), %al
	movq	-104(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -8(%rbp)
	movb	%al, -9(%rbp)
	movq	-8(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	56(%rsi), %rsi
	movsbl	-9(%rbp), %edi
Ltmp44:
	movl	%edi, -108(%rbp)        ## 4-byte Spill
	movq	%rdx, %rdi
	movl	-108(%rbp), %r8d        ## 4-byte Reload
	movq	%rsi, -120(%rbp)        ## 8-byte Spill
	movl	%r8d, %esi
	movq	-120(%rbp), %rdx        ## 8-byte Reload
	callq	*%rdx
Ltmp45:
	movb	%al, -121(%rbp)         ## 1-byte Spill
	jmp	LBB2_5
LBB2_2:
Ltmp46:
	movl	%edx, %ecx
	movq	%rax, -56(%rbp)
	movl	%ecx, -60(%rbp)
Ltmp47:
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp48:
	jmp	LBB2_3
LBB2_3:
	movq	-56(%rbp), %rdi
	callq	__Unwind_Resume
LBB2_4:
Ltmp49:
	movl	%edx, %ecx
	movq	%rax, %rdi
	movl	%ecx, -128(%rbp)        ## 4-byte Spill
	callq	___clang_call_terminate
LBB2_5:                                 ## %_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc.exit
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
	movq	-96(%rbp), %rdi         ## 8-byte Reload
	movb	-121(%rbp), %al         ## 1-byte Reload
	movsbl	%al, %esi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
	movq	-72(%rbp), %rdi
	movq	%rax, -136(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
	movq	-72(%rbp), %rdi
	movq	%rax, -144(%rbp)        ## 8-byte Spill
	movq	%rdi, %rax
	addq	$144, %rsp
	popq	%rbp
	ret
	.cfi_endproc
Leh_func_end2:
	.section	__TEXT,__gcc_except_tab
	.align	2
GCC_except_table2:
Lexception2:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	 "\274"                 ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	52                      ## Call site table length
Lset33 = Leh_func_begin2-Leh_func_begin2 ## >> Call Site 1 <<
	.long	Lset33
Lset34 = Ltmp42-Leh_func_begin2         ##   Call between Leh_func_begin2 and Ltmp42
	.long	Lset34
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset35 = Ltmp42-Leh_func_begin2         ## >> Call Site 2 <<
	.long	Lset35
Lset36 = Ltmp45-Ltmp42                  ##   Call between Ltmp42 and Ltmp45
	.long	Lset36
Lset37 = Ltmp46-Leh_func_begin2         ##     jumps to Ltmp46
	.long	Lset37
	.byte	0                       ##   On action: cleanup
Lset38 = Ltmp47-Leh_func_begin2         ## >> Call Site 3 <<
	.long	Lset38
Lset39 = Ltmp48-Ltmp47                  ##   Call between Ltmp47 and Ltmp48
	.long	Lset39
Lset40 = Ltmp49-Leh_func_begin2         ##     jumps to Ltmp49
	.long	Lset40
	.byte	1                       ##   On action: 1
Lset41 = Ltmp48-Leh_func_begin2         ## >> Call Site 4 <<
	.long	Lset41
Lset42 = Leh_func_end2-Ltmp48           ##   Call between Ltmp48 and Leh_func_end2
	.long	Lset42
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.align	2

	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp57:
	.cfi_def_cfa_offset 16
Ltmp58:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp59:
	.cfi_def_cfa_register %rbp
	movl	$10, %edi
	callq	__Z5varunIiEvT_
	movl	$100, %edi
	callq	__Z5varunIcEvT_
	callq	__Z4testILi10EEvv
	movl	$0, %eax
	popq	%rbp
	ret
	.cfi_endproc

	.section	__TEXT,__textcoal_nt,coalesced,pure_instructions
	.globl	__Z5varunIiEvT_
	.weak_definition	__Z5varunIiEvT_
	.align	4, 0x90
__Z5varunIiEvT_:                        ## @_Z5varunIiEvT_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp62:
	.cfi_def_cfa_offset 16
Ltmp63:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp64:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rax
	movl	%edi, -20(%rbp)
	movl	-20(%rbp), %esi
	movq	%rax, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
	leaq	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_(%rip), %rdi
	movq	%rax, -8(%rbp)
	movq	%rdi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	*-16(%rbp)
	movq	%rax, -32(%rbp)         ## 8-byte Spill
	addq	$32, %rsp
	popq	%rbp
	ret
	.cfi_endproc

	.globl	__Z5varunIcEvT_
	.weak_definition	__Z5varunIcEvT_
	.align	4, 0x90
__Z5varunIcEvT_:                        ## @_Z5varunIcEvT_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp67:
	.cfi_def_cfa_offset 16
Ltmp68:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp69:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movb	%dil, %al
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rdi
	movb	%al, -17(%rbp)
	movsbl	-17(%rbp), %esi
	callq	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_c
	leaq	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_(%rip), %rdi
	movq	%rax, -8(%rbp)
	movq	%rdi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	*-16(%rbp)
	movq	%rax, -32(%rbp)         ## 8-byte Spill
	addq	$32, %rsp
	popq	%rbp
	ret
	.cfi_endproc

	.globl	__Z4testILi10EEvv
	.weak_definition	__Z4testILi10EEvv
	.align	4, 0x90
__Z4testILi10EEvv:                      ## @_Z4testILi10EEvv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp72:
	.cfi_def_cfa_offset 16
Ltmp73:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp74:
	.cfi_def_cfa_register %rbp
	callq	__Z4testILi9EEvv
	popq	%rbp
	ret
	.cfi_endproc

	.globl	__Z4testILi9EEvv
	.weak_definition	__Z4testILi9EEvv
	.align	4, 0x90
__Z4testILi9EEvv:                       ## @_Z4testILi9EEvv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp77:
	.cfi_def_cfa_offset 16
Ltmp78:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp79:
	.cfi_def_cfa_register %rbp
	callq	__Z4testILi8EEvv
	popq	%rbp
	ret
	.cfi_endproc

	.globl	__Z4testILi8EEvv
	.weak_definition	__Z4testILi8EEvv
	.align	4, 0x90
__Z4testILi8EEvv:                       ## @_Z4testILi8EEvv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp82:
	.cfi_def_cfa_offset 16
Ltmp83:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp84:
	.cfi_def_cfa_register %rbp
	callq	__Z4testILi7EEvv
	popq	%rbp
	ret
	.cfi_endproc

	.globl	__Z4testILi7EEvv
	.weak_definition	__Z4testILi7EEvv
	.align	4, 0x90
__Z4testILi7EEvv:                       ## @_Z4testILi7EEvv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp87:
	.cfi_def_cfa_offset 16
Ltmp88:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp89:
	.cfi_def_cfa_register %rbp
	callq	__Z4testILi6EEvv
	popq	%rbp
	ret
	.cfi_endproc

	.globl	__Z4testILi6EEvv
	.weak_definition	__Z4testILi6EEvv
	.align	4, 0x90
__Z4testILi6EEvv:                       ## @_Z4testILi6EEvv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp92:
	.cfi_def_cfa_offset 16
Ltmp93:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp94:
	.cfi_def_cfa_register %rbp
	callq	__Z4testILi5EEvv
	popq	%rbp
	ret
	.cfi_endproc

	.globl	__Z4testILi5EEvv
	.weak_definition	__Z4testILi5EEvv
	.align	4, 0x90
__Z4testILi5EEvv:                       ## @_Z4testILi5EEvv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp97:
	.cfi_def_cfa_offset 16
Ltmp98:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp99:
	.cfi_def_cfa_register %rbp
	callq	__Z4testILi4EEvv
	popq	%rbp
	ret
	.cfi_endproc

	.globl	__Z4testILi4EEvv
	.weak_definition	__Z4testILi4EEvv
	.align	4, 0x90
__Z4testILi4EEvv:                       ## @_Z4testILi4EEvv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp102:
	.cfi_def_cfa_offset 16
Ltmp103:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp104:
	.cfi_def_cfa_register %rbp
	callq	__Z4testILi3EEvv
	popq	%rbp
	ret
	.cfi_endproc

	.globl	__Z4testILi3EEvv
	.weak_definition	__Z4testILi3EEvv
	.align	4, 0x90
__Z4testILi3EEvv:                       ## @_Z4testILi3EEvv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp107:
	.cfi_def_cfa_offset 16
Ltmp108:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp109:
	.cfi_def_cfa_register %rbp
	callq	__Z4testILi2EEvv
	popq	%rbp
	ret
	.cfi_endproc

	.globl	__Z4testILi2EEvv
	.weak_definition	__Z4testILi2EEvv
	.align	4, 0x90
__Z4testILi2EEvv:                       ## @_Z4testILi2EEvv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp112:
	.cfi_def_cfa_offset 16
Ltmp113:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp114:
	.cfi_def_cfa_register %rbp
	callq	__Z4testILi1EEvv
	popq	%rbp
	ret
	.cfi_endproc

	.globl	__Z4testILi1EEvv
	.weak_definition	__Z4testILi1EEvv
	.align	4, 0x90
__Z4testILi1EEvv:                       ## @_Z4testILi1EEvv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp117:
	.cfi_def_cfa_offset 16
Ltmp118:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp119:
	.cfi_def_cfa_register %rbp
	callq	__Z4testILi0EEvv
	popq	%rbp
	ret
	.cfi_endproc

	.globl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_c
	.weak_definition	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_c
	.align	4, 0x90
__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_c: ## @_ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_c
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
Leh_func_begin16:
	.cfi_lsda 16, Lexception16
## BB#0:
	pushq	%rbp
Ltmp152:
	.cfi_def_cfa_offset 16
Ltmp153:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp154:
	.cfi_def_cfa_register %rbp
	subq	$400, %rsp              ## imm = 0x190
	movb	%sil, %al
	movq	%rdi, -208(%rbp)
	movb	%al, -209(%rbp)
	movq	-208(%rbp), %rsi
Ltmp120:
	leaq	-232(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_
Ltmp121:
	jmp	LBB16_1
LBB16_1:
	leaq	-232(%rbp), %rax
	movq	%rax, -200(%rbp)
	movq	-200(%rbp), %rax
	movb	(%rax), %cl
	movb	%cl, -265(%rbp)         ## 1-byte Spill
## BB#2:
	movb	-265(%rbp), %al         ## 1-byte Reload
	testb	$1, %al
	jne	LBB16_3
	jmp	LBB16_26
LBB16_3:
	leaq	-256(%rbp), %rax
	movq	-208(%rbp), %rcx
	movq	%rax, -184(%rbp)
	movq	%rcx, -192(%rbp)
	movq	-184(%rbp), %rax
	movq	-192(%rbp), %rcx
	movq	%rax, -152(%rbp)
	movq	%rcx, -160(%rbp)
	movq	-152(%rbp), %rax
	movq	-160(%rbp), %rcx
	movq	(%rcx), %rdx
	movq	-24(%rdx), %rdx
	addq	%rdx, %rcx
	movq	%rcx, -144(%rbp)
	movq	-144(%rbp), %rcx
	movq	%rcx, -136(%rbp)
	movq	-136(%rbp), %rcx
	movq	40(%rcx), %rcx
	movq	%rcx, (%rax)
	movq	-208(%rbp), %rax
	movq	(%rax), %rcx
	movq	-24(%rcx), %rcx
	addq	%rcx, %rax
	movq	%rax, -96(%rbp)
	movq	-96(%rbp), %rax
	movl	8(%rax), %esi
	movl	%esi, -272(%rbp)        ## 4-byte Spill
## BB#4:
	movl	-272(%rbp), %eax        ## 4-byte Reload
	andl	$176, %eax
	cmpl	$32, %eax
	jne	LBB16_6
## BB#5:
	leaq	-209(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -280(%rbp)        ## 8-byte Spill
	jmp	LBB16_7
LBB16_6:
	leaq	-209(%rbp), %rax
	movq	%rax, -280(%rbp)        ## 8-byte Spill
	jmp	LBB16_7
LBB16_7:
	movq	-280(%rbp), %rax        ## 8-byte Reload
	leaq	-209(%rbp), %rcx
	addq	$1, %rcx
	movq	-208(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	-24(%rsi), %rsi
	addq	%rsi, %rdx
	movq	-208(%rbp), %rsi
	movq	(%rsi), %rdi
	movq	-24(%rdi), %rdi
	addq	%rdi, %rsi
	movq	%rsi, -80(%rbp)
	movq	-80(%rbp), %rsi
	movl	144(%rsi), %r8d
	movl	$-1, -4(%rbp)
	movl	%r8d, -8(%rbp)
	movl	-4(%rbp), %r8d
	cmpl	-8(%rbp), %r8d
	movq	%rax, -288(%rbp)        ## 8-byte Spill
	movq	%rcx, -296(%rbp)        ## 8-byte Spill
	movq	%rdx, -304(%rbp)        ## 8-byte Spill
	movq	%rsi, -312(%rbp)        ## 8-byte Spill
	jne	LBB16_16
## BB#8:
	movq	-312(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -40(%rbp)
	movb	$32, -41(%rbp)
	movq	-40(%rbp), %rsi
Ltmp122:
	leaq	-56(%rbp), %rdi
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp123:
	jmp	LBB16_9
LBB16_9:                                ## %.noexc
	leaq	-56(%rbp), %rax
	movq	%rax, -32(%rbp)
Ltmp124:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	movq	%rax, %rdi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp125:
	movq	%rax, -320(%rbp)        ## 8-byte Spill
	jmp	LBB16_10
LBB16_10:                               ## %_ZNSt3__19use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE.exit.i.i
	movb	-41(%rbp), %al
	movq	-320(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -16(%rbp)
	movb	%al, -17(%rbp)
	movq	-16(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	56(%rsi), %rsi
	movsbl	-17(%rbp), %edi
Ltmp126:
	movl	%edi, -324(%rbp)        ## 4-byte Spill
	movq	%rdx, %rdi
	movl	-324(%rbp), %r8d        ## 4-byte Reload
	movq	%rsi, -336(%rbp)        ## 8-byte Spill
	movl	%r8d, %esi
	movq	-336(%rbp), %rdx        ## 8-byte Reload
	callq	*%rdx
Ltmp127:
	movb	%al, -337(%rbp)         ## 1-byte Spill
	jmp	LBB16_14
LBB16_11:
Ltmp128:
	movl	%edx, %ecx
	movq	%rax, -64(%rbp)
	movl	%ecx, -68(%rbp)
Ltmp129:
	leaq	-56(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp130:
	jmp	LBB16_12
LBB16_12:
	movq	-64(%rbp), %rax
	movl	-68(%rbp), %ecx
	movq	%rax, -352(%rbp)        ## 8-byte Spill
	movl	%ecx, -356(%rbp)        ## 4-byte Spill
	jmp	LBB16_24
LBB16_13:
Ltmp131:
	movl	%edx, %ecx
	movq	%rax, %rdi
	movl	%ecx, -360(%rbp)        ## 4-byte Spill
	callq	___clang_call_terminate
LBB16_14:                               ## %_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc.exit.i
Ltmp132:
	leaq	-56(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp133:
	jmp	LBB16_15
LBB16_15:                               ## %.noexc1
	movb	-337(%rbp), %al         ## 1-byte Reload
	movsbl	%al, %ecx
	movq	-312(%rbp), %rdx        ## 8-byte Reload
	movl	%ecx, 144(%rdx)
LBB16_16:                               ## %_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillEv.exit
	movq	-312(%rbp), %rax        ## 8-byte Reload
	movl	144(%rax), %ecx
	movb	%cl, %dl
	movb	%dl, -361(%rbp)         ## 1-byte Spill
## BB#17:
	movq	-256(%rbp), %rdi
Ltmp134:
	movb	-361(%rbp), %al         ## 1-byte Reload
	movsbl	%al, %r9d
	leaq	-209(%rbp), %rsi
	movq	-288(%rbp), %rdx        ## 8-byte Reload
	movq	-296(%rbp), %rcx        ## 8-byte Reload
	movq	-304(%rbp), %r8         ## 8-byte Reload
	callq	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Ltmp135:
	movq	%rax, -376(%rbp)        ## 8-byte Spill
	jmp	LBB16_18
LBB16_18:
	leaq	-264(%rbp), %rax
	movq	-376(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -264(%rbp)
	movq	%rax, -88(%rbp)
	movq	-88(%rbp), %rax
	cmpq	$0, (%rax)
	jne	LBB16_25
## BB#19:
	movq	-208(%rbp), %rax
	movq	(%rax), %rcx
	movq	-24(%rcx), %rcx
	addq	%rcx, %rax
	movq	%rax, -120(%rbp)
	movl	$5, -124(%rbp)
	movq	-120(%rbp), %rax
	movq	%rax, -104(%rbp)
	movl	$5, -108(%rbp)
	movq	-104(%rbp), %rax
	movl	32(%rax), %edx
	orl	$5, %edx
Ltmp136:
	movq	%rax, %rdi
	movl	%edx, %esi
	callq	__ZNSt3__18ios_base5clearEj
Ltmp137:
	jmp	LBB16_20
LBB16_20:                               ## %_ZNSt3__19basic_iosIcNS_11char_traitsIcEEE8setstateEj.exit
	jmp	LBB16_21
LBB16_21:
	jmp	LBB16_25
LBB16_22:
Ltmp143:
	movl	%edx, %ecx
	movq	%rax, -240(%rbp)
	movl	%ecx, -244(%rbp)
	jmp	LBB16_29
LBB16_23:
Ltmp138:
	movl	%edx, %ecx
	movq	%rax, -352(%rbp)        ## 8-byte Spill
	movl	%ecx, -356(%rbp)        ## 4-byte Spill
LBB16_24:                               ## %.body
	movq	-352(%rbp), %rax        ## 8-byte Reload
	movl	-356(%rbp), %ecx        ## 4-byte Reload
	movq	%rax, -240(%rbp)
	movl	%ecx, -244(%rbp)
Ltmp139:
	leaq	-232(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
Ltmp140:
	jmp	LBB16_28
LBB16_25:
	jmp	LBB16_26
LBB16_26:
Ltmp141:
	leaq	-232(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
Ltmp142:
	jmp	LBB16_27
LBB16_27:
	jmp	LBB16_31
LBB16_28:
	jmp	LBB16_29
LBB16_29:
	movq	-240(%rbp), %rdi
	callq	___cxa_begin_catch
	movq	-208(%rbp), %rdi
	movq	(%rdi), %rcx
	movq	-24(%rcx), %rcx
	addq	%rcx, %rdi
Ltmp144:
	movq	%rax, -384(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv
Ltmp145:
	jmp	LBB16_30
LBB16_30:
	callq	___cxa_end_catch
LBB16_31:
	movq	-208(%rbp), %rax
	addq	$400, %rsp              ## imm = 0x190
	popq	%rbp
	ret
LBB16_32:
Ltmp146:
	movl	%edx, %ecx
	movq	%rax, -240(%rbp)
	movl	%ecx, -244(%rbp)
Ltmp147:
	callq	___cxa_end_catch
Ltmp148:
	jmp	LBB16_33
LBB16_33:
	jmp	LBB16_34
LBB16_34:
	movq	-240(%rbp), %rdi
	callq	__Unwind_Resume
LBB16_35:
Ltmp149:
	movl	%edx, %ecx
	movq	%rax, %rdi
	movl	%ecx, -388(%rbp)        ## 4-byte Spill
	callq	___clang_call_terminate
	.cfi_endproc
Leh_func_end16:
	.section	__TEXT,__gcc_except_tab
	.align	2
GCC_except_table16:
Lexception16:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	 "\257\201"             ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.ascii	 "\234\001"             ## Call site table length
Lset43 = Ltmp120-Leh_func_begin16       ## >> Call Site 1 <<
	.long	Lset43
Lset44 = Ltmp121-Ltmp120                ##   Call between Ltmp120 and Ltmp121
	.long	Lset44
Lset45 = Ltmp143-Leh_func_begin16       ##     jumps to Ltmp143
	.long	Lset45
	.byte	7                       ##   On action: 4
Lset46 = Ltmp122-Leh_func_begin16       ## >> Call Site 2 <<
	.long	Lset46
Lset47 = Ltmp123-Ltmp122                ##   Call between Ltmp122 and Ltmp123
	.long	Lset47
Lset48 = Ltmp138-Leh_func_begin16       ##     jumps to Ltmp138
	.long	Lset48
	.byte	7                       ##   On action: 4
Lset49 = Ltmp124-Leh_func_begin16       ## >> Call Site 3 <<
	.long	Lset49
Lset50 = Ltmp127-Ltmp124                ##   Call between Ltmp124 and Ltmp127
	.long	Lset50
Lset51 = Ltmp128-Leh_func_begin16       ##     jumps to Ltmp128
	.long	Lset51
	.byte	5                       ##   On action: 3
Lset52 = Ltmp129-Leh_func_begin16       ## >> Call Site 4 <<
	.long	Lset52
Lset53 = Ltmp130-Ltmp129                ##   Call between Ltmp129 and Ltmp130
	.long	Lset53
Lset54 = Ltmp131-Leh_func_begin16       ##     jumps to Ltmp131
	.long	Lset54
	.byte	11                      ##   On action: 6
Lset55 = Ltmp132-Leh_func_begin16       ## >> Call Site 5 <<
	.long	Lset55
Lset56 = Ltmp137-Ltmp132                ##   Call between Ltmp132 and Ltmp137
	.long	Lset56
Lset57 = Ltmp138-Leh_func_begin16       ##     jumps to Ltmp138
	.long	Lset57
	.byte	7                       ##   On action: 4
Lset58 = Ltmp139-Leh_func_begin16       ## >> Call Site 6 <<
	.long	Lset58
Lset59 = Ltmp140-Ltmp139                ##   Call between Ltmp139 and Ltmp140
	.long	Lset59
Lset60 = Ltmp149-Leh_func_begin16       ##     jumps to Ltmp149
	.long	Lset60
	.byte	7                       ##   On action: 4
Lset61 = Ltmp141-Leh_func_begin16       ## >> Call Site 7 <<
	.long	Lset61
Lset62 = Ltmp142-Ltmp141                ##   Call between Ltmp141 and Ltmp142
	.long	Lset62
Lset63 = Ltmp143-Leh_func_begin16       ##     jumps to Ltmp143
	.long	Lset63
	.byte	7                       ##   On action: 4
Lset64 = Ltmp142-Leh_func_begin16       ## >> Call Site 8 <<
	.long	Lset64
Lset65 = Ltmp144-Ltmp142                ##   Call between Ltmp142 and Ltmp144
	.long	Lset65
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset66 = Ltmp144-Leh_func_begin16       ## >> Call Site 9 <<
	.long	Lset66
Lset67 = Ltmp145-Ltmp144                ##   Call between Ltmp144 and Ltmp145
	.long	Lset67
Lset68 = Ltmp146-Leh_func_begin16       ##     jumps to Ltmp146
	.long	Lset68
	.byte	0                       ##   On action: cleanup
Lset69 = Ltmp145-Leh_func_begin16       ## >> Call Site 10 <<
	.long	Lset69
Lset70 = Ltmp147-Ltmp145                ##   Call between Ltmp145 and Ltmp147
	.long	Lset70
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset71 = Ltmp147-Leh_func_begin16       ## >> Call Site 11 <<
	.long	Lset71
Lset72 = Ltmp148-Ltmp147                ##   Call between Ltmp147 and Ltmp148
	.long	Lset72
Lset73 = Ltmp149-Leh_func_begin16       ##     jumps to Ltmp149
	.long	Lset73
	.byte	7                       ##   On action: 4
Lset74 = Ltmp148-Leh_func_begin16       ## >> Call Site 12 <<
	.long	Lset74
Lset75 = Leh_func_end16-Ltmp148         ##   Call between Ltmp148 and Leh_func_end16
	.long	Lset75
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	0                       ## >> Action Record 1 <<
                                        ##   Cleanup
	.byte	0                       ##   No further actions
	.byte	1                       ## >> Action Record 2 <<
                                        ##   Catch TypeInfo 1
	.byte	125                     ##   Continue to action 1
	.byte	1                       ## >> Action Record 3 <<
                                        ##   Catch TypeInfo 1
	.byte	125                     ##   Continue to action 2
	.byte	1                       ## >> Action Record 4 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
	.byte	1                       ## >> Action Record 5 <<
                                        ##   Catch TypeInfo 1
	.byte	125                     ##   Continue to action 4
	.byte	1                       ## >> Action Record 6 <<
                                        ##   Catch TypeInfo 1
	.byte	125                     ##   Continue to action 5
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.align	2

	.section	__TEXT,__textcoal_nt,coalesced,pure_instructions
	.private_extern	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.globl	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.weak_definition	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.align	4, 0x90
__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_: ## @_ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
Leh_func_begin17:
	.cfi_lsda 16, Lexception17
## BB#0:
	pushq	%rbp
Ltmp163:
	.cfi_def_cfa_offset 16
Ltmp164:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp165:
	.cfi_def_cfa_register %rbp
	subq	$704, %rsp              ## imm = 0x2C0
	movb	%r9b, %al
	leaq	-528(%rbp), %r10
	leaq	-464(%rbp), %r11
	movq	%rdi, -480(%rbp)
	movq	%rsi, -488(%rbp)
	movq	%rdx, -496(%rbp)
	movq	%rcx, -504(%rbp)
	movq	%r8, -512(%rbp)
	movb	%al, -513(%rbp)
	movq	-480(%rbp), %rcx
	movq	%r11, -448(%rbp)
	movq	$-1, -456(%rbp)
	movq	-448(%rbp), %rdx
	movq	-456(%rbp), %rsi
	movq	%rdx, -432(%rbp)
	movq	%rsi, -440(%rbp)
	movq	-432(%rbp), %rdx
	movq	$0, (%rdx)
	movq	-464(%rbp), %rdx
	movq	%rdx, -528(%rbp)
	movq	%r10, -424(%rbp)
	cmpq	$0, %rcx
	jne	LBB17_2
## BB#1:
	movq	-480(%rbp), %rax
	movq	%rax, -472(%rbp)
	jmp	LBB17_29
LBB17_2:
	movq	-504(%rbp), %rax
	movq	-488(%rbp), %rcx
	subq	%rcx, %rax
	movq	%rax, -536(%rbp)
	movq	-512(%rbp), %rax
	movq	%rax, -320(%rbp)
	movq	-320(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -544(%rbp)
	movq	-544(%rbp), %rax
	cmpq	-536(%rbp), %rax
	jle	LBB17_4
## BB#3:
	movq	-536(%rbp), %rax
	movq	-544(%rbp), %rcx
	subq	%rax, %rcx
	movq	%rcx, -544(%rbp)
	jmp	LBB17_5
LBB17_4:
	movq	$0, -544(%rbp)
LBB17_5:
	movq	-496(%rbp), %rax
	movq	-488(%rbp), %rcx
	subq	%rcx, %rax
	movq	%rax, -552(%rbp)
	cmpq	$0, -552(%rbp)
	jle	LBB17_9
## BB#6:
	movq	-480(%rbp), %rax
	movq	-488(%rbp), %rcx
	movq	-552(%rbp), %rdx
	movq	%rax, -224(%rbp)
	movq	%rcx, -232(%rbp)
	movq	%rdx, -240(%rbp)
	movq	-224(%rbp), %rax
	movq	(%rax), %rcx
	movq	96(%rcx), %rcx
	movq	-232(%rbp), %rsi
	movq	-240(%rbp), %rdx
	movq	%rax, %rdi
	callq	*%rcx
	cmpq	-552(%rbp), %rax
	je	LBB17_8
## BB#7:
	leaq	-560(%rbp), %rax
	leaq	-216(%rbp), %rcx
	movq	%rcx, -200(%rbp)
	movq	$-1, -208(%rbp)
	movq	-200(%rbp), %rcx
	movq	-208(%rbp), %rdx
	movq	%rcx, -184(%rbp)
	movq	%rdx, -192(%rbp)
	movq	-184(%rbp), %rcx
	movq	$0, (%rcx)
	movq	-216(%rbp), %rcx
	movq	%rcx, -560(%rbp)
	movq	%rax, -8(%rbp)
	movq	$0, -480(%rbp)
	movq	-480(%rbp), %rax
	movq	%rax, -472(%rbp)
	jmp	LBB17_29
LBB17_8:
	jmp	LBB17_9
LBB17_9:
	cmpq	$0, -544(%rbp)
	jle	LBB17_24
## BB#10:
	leaq	-584(%rbp), %rax
	movq	-544(%rbp), %rcx
	movb	-513(%rbp), %dl
	movq	%rax, -72(%rbp)
	movq	%rcx, -80(%rbp)
	movb	%dl, -81(%rbp)
	movq	-72(%rbp), %rax
	movq	-80(%rbp), %rcx
	movb	-81(%rbp), %dl
	movq	%rax, -48(%rbp)
	movq	%rcx, -56(%rbp)
	movb	%dl, -57(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rcx
	movq	%rcx, -32(%rbp)
	movq	-32(%rbp), %rcx
	movq	%rcx, -24(%rbp)
	movq	-24(%rbp), %rcx
	movq	%rcx, -16(%rbp)
	movq	-56(%rbp), %rsi
	movq	%rax, %rdi
	movsbl	-57(%rbp), %edx
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
	leaq	-584(%rbp), %rax
	movq	-480(%rbp), %rcx
	movq	%rax, -176(%rbp)
	movq	-176(%rbp), %rax
	movq	%rax, -168(%rbp)
	movq	-168(%rbp), %rax
	movq	%rax, -160(%rbp)
	movq	-160(%rbp), %rsi
	movq	%rsi, -152(%rbp)
	movq	-152(%rbp), %rsi
	movq	%rsi, -144(%rbp)
	movq	-144(%rbp), %rsi
	movzbl	(%rsi), %edx
	andl	$1, %edx
	cmpl	$0, %edx
	movq	%rcx, -632(%rbp)        ## 8-byte Spill
	movq	%rax, -640(%rbp)        ## 8-byte Spill
	je	LBB17_12
## BB#11:
	movq	-640(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -112(%rbp)
	movq	-112(%rbp), %rcx
	movq	%rcx, -104(%rbp)
	movq	-104(%rbp), %rcx
	movq	%rcx, -96(%rbp)
	movq	-96(%rbp), %rcx
	movq	16(%rcx), %rcx
	movq	%rcx, -648(%rbp)        ## 8-byte Spill
	jmp	LBB17_13
LBB17_12:
	movq	-640(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -136(%rbp)
	movq	-136(%rbp), %rcx
	movq	%rcx, -128(%rbp)
	movq	-128(%rbp), %rcx
	movq	%rcx, -120(%rbp)
	movq	-120(%rbp), %rcx
	addq	$1, %rcx
	movq	%rcx, -648(%rbp)        ## 8-byte Spill
LBB17_13:                               ## %_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv.exit
	movq	-648(%rbp), %rax        ## 8-byte Reload
	movq	-544(%rbp), %rcx
	movq	-632(%rbp), %rdx        ## 8-byte Reload
	movq	%rdx, -248(%rbp)
	movq	%rax, -256(%rbp)
	movq	%rcx, -264(%rbp)
	movq	-248(%rbp), %rax
	movq	(%rax), %rsi
	movq	96(%rsi), %rsi
	movq	-256(%rbp), %rdi
Ltmp155:
	movq	%rdi, -656(%rbp)        ## 8-byte Spill
	movq	%rax, %rdi
	movq	-656(%rbp), %rax        ## 8-byte Reload
	movq	%rsi, -664(%rbp)        ## 8-byte Spill
	movq	%rax, %rsi
	movq	%rcx, %rdx
	movq	-664(%rbp), %rcx        ## 8-byte Reload
	callq	*%rcx
Ltmp156:
	movq	%rax, -672(%rbp)        ## 8-byte Spill
	jmp	LBB17_14
LBB17_14:                               ## %_ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl.exit
	jmp	LBB17_15
LBB17_15:
	movq	-672(%rbp), %rax        ## 8-byte Reload
	cmpq	-544(%rbp), %rax
	je	LBB17_20
## BB#16:
	leaq	-304(%rbp), %rax
	movq	%rax, -288(%rbp)
	movq	$-1, -296(%rbp)
	movq	-288(%rbp), %rax
	movq	-296(%rbp), %rcx
	movq	%rax, -272(%rbp)
	movq	%rcx, -280(%rbp)
	movq	-272(%rbp), %rax
	movq	$0, (%rax)
	movq	-304(%rbp), %rax
	movq	%rax, -680(%rbp)        ## 8-byte Spill
## BB#17:
	leaq	-608(%rbp), %rax
	movq	-680(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -608(%rbp)
	movq	%rax, -312(%rbp)
## BB#18:
	movq	$0, -480(%rbp)
	movq	-480(%rbp), %rax
	movq	%rax, -472(%rbp)
	movl	$1, -612(%rbp)
	jmp	LBB17_21
LBB17_19:
Ltmp157:
	movl	%edx, %ecx
	movq	%rax, -592(%rbp)
	movl	%ecx, -596(%rbp)
Ltmp158:
	leaq	-584(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
Ltmp159:
	jmp	LBB17_23
LBB17_20:
	movl	$0, -612(%rbp)
LBB17_21:
	leaq	-584(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	movl	-612(%rbp), %eax
	movl	%eax, %ecx
	subl	$1, %ecx
	movl	%eax, -684(%rbp)        ## 4-byte Spill
	movl	%ecx, -688(%rbp)        ## 4-byte Spill
	je	LBB17_29
	jmp	LBB17_33
LBB17_33:
	movl	-684(%rbp), %eax        ## 4-byte Reload
	testl	%eax, %eax
	jne	LBB17_32
	jmp	LBB17_22
LBB17_22:
	jmp	LBB17_24
LBB17_23:
	jmp	LBB17_30
LBB17_24:
	movq	-504(%rbp), %rax
	movq	-496(%rbp), %rcx
	subq	%rcx, %rax
	movq	%rax, -552(%rbp)
	cmpq	$0, -552(%rbp)
	jle	LBB17_28
## BB#25:
	movq	-480(%rbp), %rax
	movq	-496(%rbp), %rcx
	movq	-552(%rbp), %rdx
	movq	%rax, -328(%rbp)
	movq	%rcx, -336(%rbp)
	movq	%rdx, -344(%rbp)
	movq	-328(%rbp), %rax
	movq	(%rax), %rcx
	movq	96(%rcx), %rcx
	movq	-336(%rbp), %rsi
	movq	-344(%rbp), %rdx
	movq	%rax, %rdi
	callq	*%rcx
	cmpq	-552(%rbp), %rax
	je	LBB17_27
## BB#26:
	leaq	-624(%rbp), %rax
	leaq	-384(%rbp), %rcx
	movq	%rcx, -368(%rbp)
	movq	$-1, -376(%rbp)
	movq	-368(%rbp), %rcx
	movq	-376(%rbp), %rdx
	movq	%rcx, -352(%rbp)
	movq	%rdx, -360(%rbp)
	movq	-352(%rbp), %rcx
	movq	$0, (%rcx)
	movq	-384(%rbp), %rcx
	movq	%rcx, -624(%rbp)
	movq	%rax, -392(%rbp)
	movq	$0, -480(%rbp)
	movq	-480(%rbp), %rax
	movq	%rax, -472(%rbp)
	jmp	LBB17_29
LBB17_27:
	jmp	LBB17_28
LBB17_28:
	movq	-512(%rbp), %rax
	movq	%rax, -400(%rbp)
	movq	$0, -408(%rbp)
	movq	-400(%rbp), %rax
	movq	24(%rax), %rcx
	movq	%rcx, -416(%rbp)
	movq	-408(%rbp), %rcx
	movq	%rcx, 24(%rax)
	movq	-480(%rbp), %rax
	movq	%rax, -472(%rbp)
LBB17_29:
	movq	-472(%rbp), %rax
	addq	$704, %rsp              ## imm = 0x2C0
	popq	%rbp
	ret
LBB17_30:
	movq	-592(%rbp), %rdi
	callq	__Unwind_Resume
LBB17_31:
Ltmp160:
	movl	%edx, %ecx
	movq	%rax, %rdi
	movl	%ecx, -692(%rbp)        ## 4-byte Spill
	callq	___clang_call_terminate
LBB17_32:
	.cfi_endproc
Leh_func_end17:
	.section	__TEXT,__gcc_except_tab
	.align	2
GCC_except_table17:
Lexception17:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	 "\274"                 ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	52                      ## Call site table length
Lset76 = Leh_func_begin17-Leh_func_begin17 ## >> Call Site 1 <<
	.long	Lset76
Lset77 = Ltmp155-Leh_func_begin17       ##   Call between Leh_func_begin17 and Ltmp155
	.long	Lset77
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset78 = Ltmp155-Leh_func_begin17       ## >> Call Site 2 <<
	.long	Lset78
Lset79 = Ltmp156-Ltmp155                ##   Call between Ltmp155 and Ltmp156
	.long	Lset79
Lset80 = Ltmp157-Leh_func_begin17       ##     jumps to Ltmp157
	.long	Lset80
	.byte	0                       ##   On action: cleanup
Lset81 = Ltmp158-Leh_func_begin17       ## >> Call Site 3 <<
	.long	Lset81
Lset82 = Ltmp159-Ltmp158                ##   Call between Ltmp158 and Ltmp159
	.long	Lset82
Lset83 = Ltmp160-Leh_func_begin17       ##     jumps to Ltmp160
	.long	Lset83
	.byte	1                       ##   On action: 1
Lset84 = Ltmp159-Leh_func_begin17       ## >> Call Site 4 <<
	.long	Lset84
Lset85 = Leh_func_end17-Ltmp159         ##   Call between Ltmp159 and Leh_func_end17
	.long	Lset85
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.align	2

	.section	__TEXT,__textcoal_nt,coalesced,pure_instructions
	.private_extern	___clang_call_terminate
	.globl	___clang_call_terminate
	.weak_definition	___clang_call_terminate
	.align	4, 0x90
___clang_call_terminate:                ## @__clang_call_terminate
## BB#0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	callq	___cxa_begin_catch
	movq	%rax, -8(%rbp)          ## 8-byte Spill
	callq	__ZSt9terminatev

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	 "done"

	.section	__TEXT,__eh_frame,coalesced,no_toc+strip_static_syms+live_support

.subsections_via_symbols
