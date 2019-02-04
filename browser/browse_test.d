browse_test.trans_opt_date : \
	assoc_list.trans_opt \
	builtin.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	mdb.trans_opt \
	private_builtin.trans_opt \
	string.trans_opt \
	tree234.trans_opt \
	mdb.browse.trans_opt \
	mdb.browser_info.trans_opt

browse_test.optdate browse_test.trans_opt_date browse_test.err browse_test.c_date browse_test.s_date browse_test.pic_s_date browse_test.il_date browse_test.java_date : browse_test.m \
	assoc_list.int \
	builtin.int \
	int.int \
	io.int \
	list.int \
	mdb.int \
	private_builtin.int \
	string.int \
	tree234.int \
	mdb.browse.int \
	mdb.browser_info.int \
	array.int2 \
	bimap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	cord.int2 \
	counter.int2 \
	deconstruct.int2 \
	exception.int2 \
	float.int2 \
	getopt.int2 \
	library.int2 \
	map.int2 \
	math.int2 \
	maybe.int2 \
	mdbcomp.int2 \
	pair.int2 \
	pprint.int2 \
	pretty_printer.int2 \
	require.int2 \
	set.int2 \
	std_util.int2 \
	store.int2 \
	stream.int2 \
	svmap.int2 \
	term_io.int2 \
	term_to_xml.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	mdb.browser_term.int2 \
	mdb.declarative_analyser.int2 \
	mdb.declarative_debugger.int2 \
	mdb.declarative_edt.int2 \
	mdb.declarative_execution.int2 \
	mdb.declarative_oracle.int2 \
	mdb.declarative_tree.int2 \
	mdb.declarative_user.int2 \
	mdb.frame.int2 \
	mdb.help.int2 \
	mdb.io_action.int2 \
	mdb.parse.int2 \
	mdb.sized_pretty.int2 \
	mdb.term_rep.int2 \
	mdb.util.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	stream.string_writer.int2

ifeq ($(TARGET_ASM),yes)
browse_test.mh browse_test.mih : browse_test.s
else
browse_test.mh browse_test.mih : browse_test.c
endif

ifeq ($(TARGET_ASM),yes)
browse_test.module_dep : browse_test.s
else
 ifeq ($(findstring il,$(GRADE)),il)
browse_test.module_dep : browse_test.il
  ifeq ($(findstring java,$(GRADE)),java)
browse_test.module_dep : mercury/browse_test.java
  else
browse_test.module_dep : browse_test.c
  endif
 endif
endif

browse_test.date browse_test.date0 : browse_test.m \
	assoc_list.int3 \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	mdb.int3 \
	private_builtin.int3 \
	string.int3 \
	tree234.int3 \
	mdb.browse.int3 \
	mdb.browser_info.int3 \
	array.int3 \
	bimap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	counter.int3 \
	deconstruct.int3 \
	exception.int3 \
	float.int3 \
	getopt.int3 \
	library.int3 \
	map.int3 \
	math.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	pprint.int3 \
	pretty_printer.int3 \
	require.int3 \
	set.int3 \
	std_util.int3 \
	store.int3 \
	stream.int3 \
	svmap.int3 \
	term_io.int3 \
	term_to_xml.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	mdb.browser_term.int3 \
	mdb.declarative_analyser.int3 \
	mdb.declarative_debugger.int3 \
	mdb.declarative_edt.int3 \
	mdb.declarative_execution.int3 \
	mdb.declarative_oracle.int3 \
	mdb.declarative_tree.int3 \
	mdb.declarative_user.int3 \
	mdb.frame.int3 \
	mdb.help.int3 \
	mdb.io_action.int3 \
	mdb.parse.int3 \
	mdb.sized_pretty.int3 \
	mdb.term_rep.int3 \
	mdb.util.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	stream.string_writer.int3

browse_test.date0 : browse_test.m \
	assoc_list.int3 \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	mdb.int3 \
	private_builtin.int3 \
	string.int3 \
	tree234.int3 \
	mdb.browse.int3 \
	mdb.browser_info.int3 \
	array.int3 \
	bimap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	counter.int3 \
	deconstruct.int3 \
	exception.int3 \
	float.int3 \
	getopt.int3 \
	library.int3 \
	map.int3 \
	math.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	pprint.int3 \
	pretty_printer.int3 \
	require.int3 \
	set.int3 \
	std_util.int3 \
	store.int3 \
	stream.int3 \
	svmap.int3 \
	term_io.int3 \
	term_to_xml.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	mdb.browser_term.int3 \
	mdb.declarative_analyser.int3 \
	mdb.declarative_debugger.int3 \
	mdb.declarative_edt.int3 \
	mdb.declarative_execution.int3 \
	mdb.declarative_oracle.int3 \
	mdb.declarative_tree.int3 \
	mdb.declarative_user.int3 \
	mdb.frame.int3 \
	mdb.help.int3 \
	mdb.io_action.int3 \
	mdb.parse.int3 \
	mdb.sized_pretty.int3 \
	mdb.term_rep.int3 \
	mdb.util.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	stream.string_writer.int3



browse_test.$O :  \
	construct.mh \
	std_util.mh \
	pprint.mh \
	cord.mh \
	set.mh \
	library.mh \
	store.mh \
	svmap.mh \
	counter.mh \
	bimap.mh \
	mdb.io_action.mh \
	mdb.help.mh \
	mdb.declarative_tree.mh \
	mdbcomp.rtti_access.mh \
	mdb.declarative_execution.mh \
	unit.mh \
	math.mh \
	float.mh \
	exception.mh \
	array.mh \
	mdb.declarative_user.mh \
	mdb.declarative_oracle.mh \
	mdb.declarative_edt.mh \
	mdb.declarative_debugger.mh \
	mdb.declarative_analyser.mh \
	mdbcomp.prim_data.mh \
	mdbcomp.program_representation.mh \
	mdb.term_rep.mh \
	stream.string_writer.mh \
	mdb.util.mh \
	mdb.sized_pretty.mh \
	mdb.parse.mh \
	mdb.frame.mh \
	type_desc.mh \
	term_to_xml.mh \
	term_io.mh \
	stream.mh \
	require.mh \
	pretty_printer.mh \
	pair.mh \
	map.mh \
	getopt.mh \
	deconstruct.mh \
	char.mh \
	bool.mh \
	mdb.browser_term.mh \
	univ.mh \
	maybe.mh \
	mdbcomp.mh \
	mdb.browser_info.mh \
	mdb.browse.mh \
	tree234.mh \
	string.mh \
	mdb.mh \
	list.mh \
	int.mh \
	assoc_list.mh \
	private_builtin.mh \
	io.mh \
	builtin.mh



browse_test.pic_o :  \
	construct.mh \
	std_util.mh \
	pprint.mh \
	cord.mh \
	set.mh \
	library.mh \
	store.mh \
	svmap.mh \
	counter.mh \
	bimap.mh \
	mdb.io_action.mh \
	mdb.help.mh \
	mdb.declarative_tree.mh \
	mdbcomp.rtti_access.mh \
	mdb.declarative_execution.mh \
	unit.mh \
	math.mh \
	float.mh \
	exception.mh \
	array.mh \
	mdb.declarative_user.mh \
	mdb.declarative_oracle.mh \
	mdb.declarative_edt.mh \
	mdb.declarative_debugger.mh \
	mdb.declarative_analyser.mh \
	mdbcomp.prim_data.mh \
	mdbcomp.program_representation.mh \
	mdb.term_rep.mh \
	stream.string_writer.mh \
	mdb.util.mh \
	mdb.sized_pretty.mh \
	mdb.parse.mh \
	mdb.frame.mh \
	type_desc.mh \
	term_to_xml.mh \
	term_io.mh \
	stream.mh \
	require.mh \
	pretty_printer.mh \
	pair.mh \
	map.mh \
	getopt.mh \
	deconstruct.mh \
	char.mh \
	bool.mh \
	mdb.browser_term.mh \
	univ.mh \
	maybe.mh \
	mdbcomp.mh \
	mdb.browser_info.mh \
	mdb.browse.mh \
	tree234.mh \
	string.mh \
	mdb.mh \
	list.mh \
	int.mh \
	assoc_list.mh \
	private_builtin.mh \
	io.mh \
	builtin.mh


browse_test.int0 : browse_test.date0
	@:
browse_test.int : browse_test.date
	@:
browse_test.int2 : browse_test.date
	@:
browse_test.int3 : browse_test.date3
	@:
browse_test.opt : browse_test.optdate
	@:
browse_test.trans_opt : browse_test.trans_opt_date
	@:
