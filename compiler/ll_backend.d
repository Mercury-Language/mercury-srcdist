

ll_backend.optdate ll_backend.trans_opt_date ll_backend.err ll_backend.c_date ll_backend.s_date ll_backend.pic_s_date ll_backend.il_date ll_backend.java_date : ll_backend.m ll_backend.int0 \
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
ll_backend.mh ll_backend.mih : ll_backend.s
else
ll_backend.mh ll_backend.mih : ll_backend.c
endif

ifeq ($(TARGET_ASM),yes)
ll_backend.module_dep : ll_backend.s
else
 ifeq ($(findstring il,$(GRADE)),il)
ll_backend.module_dep : ll_backend.il
  ifeq ($(findstring java,$(GRADE)),java)
ll_backend.module_dep : ll_backend.java
  else
ll_backend.module_dep : ll_backend.c
  endif
 endif
endif

ll_backend.date ll_backend.date0 : ll_backend.m \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

ll_backend.date0 : ll_backend.m \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



ll_backend.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



ll_backend.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


ll_backend.int0 : ll_backend.date0
	@:
ll_backend.int : ll_backend.date
	@:
ll_backend.int2 : ll_backend.date
	@:
ll_backend.int3 : ll_backend.date3
	@:
ll_backend.opt : ll_backend.optdate
	@:
ll_backend.trans_opt : ll_backend.trans_opt_date
	@:
