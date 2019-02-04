

exclude.optdate exclude.trans_opt_date exclude.err exclude.c_date exclude.s_date exclude.pic_s_date exclude.il_date exclude.java_date : exclude.m \
	bool.int \
	builtin.int \
	char.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	private_builtin.int \
	profile.int \
	set.int \
	string.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	measurements.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
exclude.mh exclude.mih : exclude.s
else
exclude.mh exclude.mih : exclude.c
endif

ifeq ($(TARGET_ASM),yes)
exclude.module_dep : exclude.s
else
 ifeq ($(findstring il,$(GRADE)),il)
exclude.module_dep : exclude.il
  ifeq ($(findstring java,$(GRADE)),java)
exclude.module_dep : exclude.java
  else
exclude.module_dep : exclude.c
  endif
 endif
endif

exclude.date exclude.date0 : exclude.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	profile.int3 \
	set.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

exclude.date0 : exclude.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	profile.int3 \
	set.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



exclude.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh



exclude.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh


exclude.int0 : exclude.date0
	@:
exclude.int : exclude.date
	@:
exclude.int2 : exclude.date
	@:
exclude.int3 : exclude.date3
	@:
exclude.opt : exclude.optdate
	@:
exclude.trans_opt : exclude.trans_opt_date
	@:
