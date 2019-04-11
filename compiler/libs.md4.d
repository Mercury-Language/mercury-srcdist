# vim: ts=8 sw=8 noexpandtab ft=make

ifeq (x,y)



libs.md4.optdate libs.md4.trans_opt_date md4.err libs.md4.c_date libs.md4.java_date : md4.m \
	libs.int0 \
	builtin.int \
	private_builtin.int \
	require.int


endif # ifeq(x,y)

# RULE date_file_deps
# source group names:
#   (unnamed)
#   parent deps
#   long deps
libs.md4.optdate libs.md4.trans_opt_date md4.err libs.md4.c_date libs.md4.java_date : \
		md4.m \
	\
		libs.int0 \
	\
		builtin.int \
		private_builtin.int \
		require.int

ifeq (x,y)



libs.md4.pic_o libs.md4.$O : \
	builtin.mih \
	libs.mih \
	private_builtin.mih \
	require.mih


endif # ifeq(x,y)

# RULE objs_on_mihs
libs.md4.pic_o libs.md4.$O : \
		builtin.mih \
		libs.mih \
		private_builtin.mih \
		require.mih

ifeq (x,y)



libs.md4.mh libs.md4.mih : libs.md4.c


endif # ifeq(x,y)

# RULE mh_and_mih_on_c
libs.md4.mh libs.md4.mih : libs.md4.c

ifeq (x,y)



ifeq ($(findstring java,$(GRADE)),java)
libs.md4.module_dep : jmercury/libs__md4.java
else
libs.md4.module_dep : libs.md4.c
endif


endif # ifeq(x,y)

ifeq ($(findstring java,$(GRADE)),java)

# RULE module_dep_on_java
libs.md4.module_dep : jmercury/libs__md4.java

else

# RULE module_dep_on_c
libs.md4.module_dep : libs.md4.c

endif # conditional fragment

ifeq (x,y)



libs.md4.date libs.md4.date0 \
	libs.date : md4.m \
	libs.int0 \
	builtin.int3 \
	private_builtin.int3 \
	require.int3


endif # ifeq(x,y)

# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   parent dep int0
#   long dep int3s
libs.md4.date libs.md4.date0 libs.date : \
		md4.m \
	\
		libs.int0 \
	\
		builtin.int3 \
		private_builtin.int3 \
		require.int3

ifeq (x,y)



libs.md4.date0 \
	libs.date0 : md4.m \
	builtin.int3 \
	private_builtin.int3 \
	require.int3


endif # ifeq(x,y)

# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
libs.md4.date0 libs.date0 : \
		md4.m \
	\
		builtin.int3 \
		private_builtin.int3 \
		require.int3

ifeq (x,y)



libs.md4.$O :  \
	libs.md4.mh



libs.md4.pic_o :  \
	libs.md4.mh


endif # ifeq(x,y)

# RULE foreign_deps_for_.mh
libs.md4.$O : libs.md4.mh

# RULE foreign_deps_for_.mh
libs.md4.pic_o : libs.md4.mh

ifeq (x,y)


libs.md4.int0 : libs.md4.date0
	@:
libs.md4.int : libs.md4.date
	@:
libs.md4.int2 : libs.md4.date
	@:
libs.md4.int3 : libs.md4.date3
	@:
libs.md4.opt : libs.md4.optdate
	@:
libs.md4.trans_opt : libs.md4.trans_opt_date
	@:


endif # ifeq(x,y)

libs.md4.int0 : libs.md4.date0
	@:

libs.md4.int : libs.md4.date
	@:

libs.md4.int2 : libs.md4.date
	@:

libs.md4.int3 : libs.md4.date3
	@:

libs.md4.opt : libs.md4.optdate
	@:

libs.md4.trans_opt : libs.md4.trans_opt_date
	@:

ifeq (x,y)


libs.md4.date0 : md4.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.md4
libs.md4.date : md4.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.md4
libs.md4.date3 : md4.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.md4
libs.md4.optdate : md4.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.md4
libs.md4.trans_opt_date : md4.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.md4
libs.md4.c_date : md4.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.md4 $(ERR_REDIRECT)
libs.md4.java_date : md4.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.md4 $(ERR_REDIRECT)


endif # ifeq(x,y)

libs.md4.date0 : md4.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.md4

libs.md4.date : md4.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.md4

libs.md4.date3 : md4.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.md4

libs.md4.optdate : md4.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.md4

libs.md4.trans_opt_date : md4.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.md4

libs.md4.c_date : md4.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.md4 $(ERR_REDIRECT)

libs.md4.java_date : md4.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.md4 $(ERR_REDIRECT)

ifeq (x,y)


endif # ifeq(x,y)

