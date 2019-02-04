

mercury_profile.optdate mercury_profile.trans_opt_date mercury_profile.err mercury_profile.c_date mercury_profile.s_date mercury_profile.pic_s_date mercury_profile.il_date mercury_profile.java_date : mercury_profile.m \
	bool.int \
	builtin.int \
	call_graph.int \
	generate_output.int \
	getopt.int \
	globals.int \
	io.int \
	library.int \
	list.int \
	maybe.int \
	options.int \
	output.int \
	private_builtin.int \
	process_file.int \
	propagate.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	ops.int2 \
	output_prof_info.int2 \
	pair.int2 \
	prof_info.int2 \
	relation.int2 \
	set.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
mercury_profile.mh mercury_profile.mih : mercury_profile.s
else
mercury_profile.mh mercury_profile.mih : mercury_profile.c
endif

ifeq ($(TARGET_ASM),yes)
mercury_profile.module_dep : mercury_profile.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mercury_profile.module_dep : mercury_profile.il
  ifeq ($(findstring java,$(GRADE)),java)
mercury_profile.module_dep : mercury_profile.java
  else
mercury_profile.module_dep : mercury_profile.c
  endif
 endif
endif

mercury_profile.date mercury_profile.date0 : mercury_profile.m \
	bool.int3 \
	builtin.int3 \
	call_graph.int3 \
	generate_output.int3 \
	getopt.int3 \
	globals.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	maybe.int3 \
	options.int3 \
	output.int3 \
	private_builtin.int3 \
	process_file.int3 \
	propagate.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	output_prof_info.int3 \
	pair.int3 \
	prof_info.int3 \
	relation.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

mercury_profile.date0 : mercury_profile.m \
	bool.int3 \
	builtin.int3 \
	call_graph.int3 \
	generate_output.int3 \
	getopt.int3 \
	globals.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	maybe.int3 \
	options.int3 \
	output.int3 \
	private_builtin.int3 \
	process_file.int3 \
	propagate.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	output_prof_info.int3 \
	pair.int3 \
	prof_info.int3 \
	relation.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



mercury_profile.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



mercury_profile.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


mercury_profile.int0 : mercury_profile.date0
	@:
mercury_profile.int : mercury_profile.date
	@:
mercury_profile.int2 : mercury_profile.date
	@:
mercury_profile.int3 : mercury_profile.date3
	@:
mercury_profile.opt : mercury_profile.optdate
	@:
mercury_profile.trans_opt : mercury_profile.trans_opt_date
	@:
