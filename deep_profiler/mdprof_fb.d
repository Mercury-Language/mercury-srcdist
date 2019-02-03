

mdprof_fb.optdate mdprof_fb.trans_opt_date mdprof_fb.err mdprof_fb.c_date mdprof_fb.s_date mdprof_fb.pic_s_date mdprof_fb.il_date mdprof_fb.java_date : mdprof_fb.m mdprof_fb.int0 \
	builtin.int \
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
mdprof_fb.mh mdprof_fb.mih : mdprof_fb.s
else
mdprof_fb.mh mdprof_fb.mih : mdprof_fb.c
endif

ifeq ($(TARGET_ASM),yes)
mdprof_fb.module_dep : mdprof_fb.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdprof_fb.module_dep : mdprof_fb.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mdprof_fb.module_dep : jmercury/mdprof_fb.java
  else
mdprof_fb.module_dep : mdprof_fb.c
  endif
 endif
endif

mdprof_fb.date mdprof_fb.date0 : mdprof_fb.m \
	builtin.int3 \
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

mdprof_fb.date0 : mdprof_fb.m \
	builtin.int3 \
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



mdprof_fb.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



mdprof_fb.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


mdprof_fb.int0 : mdprof_fb.date0
	@:
mdprof_fb.int : mdprof_fb.date
	@:
mdprof_fb.int2 : mdprof_fb.date
	@:
mdprof_fb.int3 : mdprof_fb.date3
	@:
mdprof_fb.opt : mdprof_fb.optdate
	@:
mdprof_fb.trans_opt : mdprof_fb.trans_opt_date
	@:
