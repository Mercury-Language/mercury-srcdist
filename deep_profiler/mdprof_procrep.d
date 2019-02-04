mdprof_procrep.trans_opt_date : \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	mdbcomp.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	mdbcomp.prim_data.trans_opt \
	mdbcomp.program_representation.trans_opt \
	mdbcomp.rtti_access.trans_opt

mdprof_procrep.optdate mdprof_procrep.trans_opt_date mdprof_procrep.err mdprof_procrep.c_date mdprof_procrep.s_date mdprof_procrep.pic_s_date mdprof_procrep.il_date mdprof_procrep.java_date : mdprof_procrep.m \
	bool.int \
	builtin.int \
	char.int \
	int.int \
	io.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	require.int \
	string.int \
	mdbcomp.prim_data.int \
	mdbcomp.program_representation.int \
	mdbcomp.rtti_access.int \
	exception.int2 \
	lexer.int2 \
	library.int2 \
	map.int2 \
	set.int2 \
	svmap.int2 \
	term_io.int2 \
	type_desc.int2 \
	univ.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mdprof_procrep.mh mdprof_procrep.mih : mdprof_procrep.s
else
mdprof_procrep.mh mdprof_procrep.mih : mdprof_procrep.c
endif

ifeq ($(TARGET_ASM),yes)
mdprof_procrep.module_dep : mdprof_procrep.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdprof_procrep.module_dep : mdprof_procrep.il
  ifeq ($(findstring java,$(GRADE)),java)
mdprof_procrep.module_dep : mdprof_procrep.java
  else
mdprof_procrep.module_dep : mdprof_procrep.c
  endif
 endif
endif

mdprof_procrep.date mdprof_procrep.date0 : mdprof_procrep.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	exception.int3 \
	lexer.int3 \
	library.int3 \
	map.int3 \
	set.int3 \
	svmap.int3 \
	term_io.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.trace_counts.int3

mdprof_procrep.date0 : mdprof_procrep.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	exception.int3 \
	lexer.int3 \
	library.int3 \
	map.int3 \
	set.int3 \
	svmap.int3 \
	term_io.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.trace_counts.int3



mdprof_procrep.$O :  \
	univ.mh \
	term_io.mh \
	lexer.mh \
	svmap.mh \
	set.mh \
	map.mh \
	mdbcomp.trace_counts.mh \
	exception.mh \
	type_desc.mh \
	library.mh \
	string.mh \
	require.mh \
	maybe.mh \
	list.mh \
	int.mh \
	char.mh \
	bool.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.prim_data.mh \
	io.mh \
	private_builtin.mh \
	builtin.mh \
	mdbcomp.mh



mdprof_procrep.pic_o :  \
	univ.mh \
	term_io.mh \
	lexer.mh \
	svmap.mh \
	set.mh \
	map.mh \
	mdbcomp.trace_counts.mh \
	exception.mh \
	type_desc.mh \
	library.mh \
	string.mh \
	require.mh \
	maybe.mh \
	list.mh \
	int.mh \
	char.mh \
	bool.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.prim_data.mh \
	io.mh \
	private_builtin.mh \
	builtin.mh \
	mdbcomp.mh


mdprof_procrep.int0 : mdprof_procrep.date0
	@:
mdprof_procrep.int : mdprof_procrep.date
	@:
mdprof_procrep.int2 : mdprof_procrep.date
	@:
mdprof_procrep.int3 : mdprof_procrep.date3
	@:
mdprof_procrep.opt : mdprof_procrep.optdate
	@:
mdprof_procrep.trans_opt : mdprof_procrep.trans_opt_date
	@:
