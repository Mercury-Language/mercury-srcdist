

mer_analysis.optdate mer_analysis.trans_opt_date mer_analysis.err mer_analysis.c_date mer_analysis.s_date mer_analysis.pic_s_date mer_analysis.il_date mer_analysis.java_date : mer_analysis.m \
	analysis.int \
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
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
mer_analysis.mh mer_analysis.mih : mer_analysis.s
else
mer_analysis.mh mer_analysis.mih : mer_analysis.c
endif

ifeq ($(TARGET_ASM),yes)
mer_analysis.module_dep : mer_analysis.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mer_analysis.module_dep : mer_analysis.il
  ifeq ($(findstring java,$(GRADE)),java)
mer_analysis.module_dep : mer_analysis.java
  else
mer_analysis.module_dep : mer_analysis.c
  endif
 endif
endif

mer_analysis.date mer_analysis.date0 : mer_analysis.m \
	analysis.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3

mer_analysis.date0 : mer_analysis.m \
	analysis.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3



mer_analysis.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



mer_analysis.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


mer_analysis.int0 : mer_analysis.date0
	@:
mer_analysis.int : mer_analysis.date
	@:
mer_analysis.int2 : mer_analysis.date
	@:
mer_analysis.int3 : mer_analysis.date3
	@:
mer_analysis.opt : mer_analysis.optdate
	@:
mer_analysis.trans_opt : mer_analysis.trans_opt_date
	@:
