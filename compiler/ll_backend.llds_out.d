

ll_backend.llds_out.optdate ll_backend.llds_out.trans_opt_date llds_out.err ll_backend.llds_out.c_date ll_backend.llds_out.s_date ll_backend.llds_out.pic_s_date ll_backend.llds_out.il_date ll_backend.llds_out.java_date : llds_out.m ll_backend.llds_out.int0 \
	ll_backend.int0 \
	backend_libs.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
	libs.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	list.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
ll_backend.llds_out.mh ll_backend.llds_out.mih : ll_backend.llds_out.s
else
ll_backend.llds_out.mh ll_backend.llds_out.mih : ll_backend.llds_out.c
endif

ifeq ($(TARGET_ASM),yes)
ll_backend.llds_out.module_dep : ll_backend.llds_out.s
else
 ifeq ($(findstring il,$(GRADE)),il)
ll_backend.llds_out.module_dep : ll_backend.llds_out.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
ll_backend.llds_out.module_dep : jmercury/ll_backend__llds_out.java
  else
ll_backend.llds_out.module_dep : ll_backend.llds_out.c
  endif
 endif
endif

ll_backend.llds_out.date ll_backend.llds_out.date0 \
	ll_backend.date : llds_out.m \
	ll_backend.int0 \
	backend_libs.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

ll_backend.llds_out.date0 \
	ll_backend.date0 : llds_out.m \
	backend_libs.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



ll_backend.llds_out.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



ll_backend.llds_out.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


ll_backend.llds_out.int0 : ll_backend.llds_out.date0
	@:
ll_backend.llds_out.int : ll_backend.llds_out.date
	@:
ll_backend.llds_out.int2 : ll_backend.llds_out.date
	@:
ll_backend.llds_out.int3 : ll_backend.llds_out.date3
	@:
ll_backend.llds_out.opt : ll_backend.llds_out.optdate
	@:
ll_backend.llds_out.trans_opt : ll_backend.llds_out.trans_opt_date
	@:

ll_backend.llds_out.date0 : llds_out.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ll_backend.llds_out
ll_backend.llds_out.date : llds_out.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ll_backend.llds_out
ll_backend.llds_out.date3 : llds_out.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ll_backend.llds_out
ll_backend.llds_out.optdate : llds_out.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ll_backend.llds_out
ll_backend.llds_out.trans_opt_date : llds_out.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ll_backend.llds_out
ll_backend.llds_out.c_date : llds_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ll_backend.llds_out $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
ll_backend.llds_out.s_date : llds_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only ll_backend.llds_out $(ERR_REDIRECT)
ll_backend.llds_out.pic_s_date : llds_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" ll_backend.llds_out $(ERR_REDIRECT)
endif # TARGET_ASM
ll_backend.llds_out.il_date : llds_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ll_backend.llds_out $(ERR_REDIRECT)
ll_backend.llds_out.java_date : llds_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ll_backend.llds_out $(ERR_REDIRECT)
