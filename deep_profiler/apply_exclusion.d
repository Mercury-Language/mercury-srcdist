

apply_exclusion.optdate apply_exclusion.trans_opt_date apply_exclusion.err apply_exclusion.c_date apply_exclusion.s_date apply_exclusion.pic_s_date apply_exclusion.il_date apply_exclusion.java_date : apply_exclusion.m \
	assoc_list.int \
	builtin.int \
	exclude.int \
	list.int \
	map.int \
	measurements.int \
	pair.int \
	private_builtin.int \
	profile.int \
	array.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	maybe.int2 \
	mdbcomp.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
apply_exclusion.mh apply_exclusion.mih : apply_exclusion.s
else
apply_exclusion.mh apply_exclusion.mih : apply_exclusion.c
endif

ifeq ($(TARGET_ASM),yes)
apply_exclusion.module_dep : apply_exclusion.s
else
 ifeq ($(findstring il,$(GRADE)),il)
apply_exclusion.module_dep : apply_exclusion.il
  ifeq ($(findstring java,$(GRADE)),java)
apply_exclusion.module_dep : mercury/apply_exclusion.java
  else
apply_exclusion.module_dep : apply_exclusion.c
  endif
 endif
endif

apply_exclusion.date apply_exclusion.date0 : apply_exclusion.m \
	assoc_list.int3 \
	builtin.int3 \
	exclude.int3 \
	list.int3 \
	map.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

apply_exclusion.date0 : apply_exclusion.m \
	assoc_list.int3 \
	builtin.int3 \
	exclude.int3 \
	list.int3 \
	map.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



apply_exclusion.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh \
	profile.mh \
	profile.mh



apply_exclusion.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh \
	profile.mh \
	profile.mh


apply_exclusion.int0 : apply_exclusion.date0
	@:
apply_exclusion.int : apply_exclusion.date
	@:
apply_exclusion.int2 : apply_exclusion.date
	@:
apply_exclusion.int3 : apply_exclusion.date3
	@:
apply_exclusion.opt : apply_exclusion.optdate
	@:
apply_exclusion.trans_opt : apply_exclusion.trans_opt_date
	@:
