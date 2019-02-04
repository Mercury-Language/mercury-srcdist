

output_prof_info.optdate output_prof_info.trans_opt_date output_prof_info.err output_prof_info.c_date output_prof_info.s_date output_prof_info.pic_s_date output_prof_info.il_date output_prof_info.java_date : output_prof_info.m \
	builtin.int \
	list.int \
	map.int \
	private_builtin.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
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
output_prof_info.mh output_prof_info.mih : output_prof_info.s
else
output_prof_info.mh output_prof_info.mih : output_prof_info.c
endif

ifeq ($(TARGET_ASM),yes)
output_prof_info.module_dep : output_prof_info.s
else
 ifeq ($(findstring il,$(GRADE)),il)
output_prof_info.module_dep : output_prof_info.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
output_prof_info.module_dep : jmercury/output_prof_info.java
  else
output_prof_info.module_dep : output_prof_info.c
  endif
 endif
endif

output_prof_info.date output_prof_info.date0 : output_prof_info.m \
	builtin.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
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

output_prof_info.date0 : output_prof_info.m \
	builtin.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
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



output_prof_info.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



output_prof_info.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


output_prof_info.int0 : output_prof_info.date0
	@:
output_prof_info.int : output_prof_info.date
	@:
output_prof_info.int2 : output_prof_info.date
	@:
output_prof_info.int3 : output_prof_info.date3
	@:
output_prof_info.opt : output_prof_info.optdate
	@:
output_prof_info.trans_opt : output_prof_info.trans_opt_date
	@:
