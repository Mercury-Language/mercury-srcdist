

generate_output.optdate generate_output.trans_opt_date generate_output.err generate_output.c_date generate_output.s_date generate_output.pic_s_date generate_output.il_date generate_output.java_date : generate_output.m \
	bool.int \
	builtin.int \
	float.int \
	globals.int \
	int.int \
	io.int \
	list.int \
	map.int \
	options.int \
	output_prof_info.int \
	private_builtin.int \
	prof_info.int \
	rbtree.int \
	string.int \
	svmap.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
generate_output.mh generate_output.mih : generate_output.s
else
generate_output.mh generate_output.mih : generate_output.c
endif

ifeq ($(TARGET_ASM),yes)
generate_output.module_dep : generate_output.s
else
 ifeq ($(findstring il,$(GRADE)),il)
generate_output.module_dep : generate_output.il
  ifeq ($(findstring java,$(GRADE)),java)
generate_output.module_dep : jmercury/generate_output.java
  else
generate_output.module_dep : generate_output.c
  endif
 endif
endif

generate_output.date generate_output.date0 : generate_output.m \
	bool.int3 \
	builtin.int3 \
	float.int3 \
	globals.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	options.int3 \
	output_prof_info.int3 \
	private_builtin.int3 \
	prof_info.int3 \
	rbtree.int3 \
	string.int3 \
	svmap.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

generate_output.date0 : generate_output.m \
	bool.int3 \
	builtin.int3 \
	float.int3 \
	globals.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	options.int3 \
	output_prof_info.int3 \
	private_builtin.int3 \
	prof_info.int3 \
	rbtree.int3 \
	string.int3 \
	svmap.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



generate_output.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



generate_output.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


generate_output.int0 : generate_output.date0
	@:
generate_output.int : generate_output.date
	@:
generate_output.int2 : generate_output.date
	@:
generate_output.int3 : generate_output.date3
	@:
generate_output.opt : generate_output.optdate
	@:
generate_output.trans_opt : generate_output.trans_opt_date
	@:
