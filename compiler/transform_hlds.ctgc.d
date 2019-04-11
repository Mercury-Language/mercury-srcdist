# vim: ts=8 sw=8 noexpandtab ft=make

ifeq (x,y)



transform_hlds.ctgc.optdate transform_hlds.ctgc.trans_opt_date ctgc.err transform_hlds.ctgc.c_date transform_hlds.ctgc.java_date : ctgc.m transform_hlds.ctgc.int0 \
	transform_hlds.int0 \
	builtin.int \
	private_builtin.int


endif # ifeq(x,y)

# RULE date_file_deps
# source group names:
#   (unnamed)
#   (unnamed)
#   parent deps
#   long deps
transform_hlds.ctgc.optdate transform_hlds.ctgc.trans_opt_date ctgc.err transform_hlds.ctgc.c_date transform_hlds.ctgc.java_date : \
		ctgc.m \
	\
		transform_hlds.ctgc.int0 \
	\
		transform_hlds.int0 \
	\
		builtin.int \
		private_builtin.int

ifeq (x,y)



transform_hlds.ctgc.pic_o transform_hlds.ctgc.$O : \
	builtin.mih \
	private_builtin.mih \
	transform_hlds.mih


endif # ifeq(x,y)

# RULE objs_on_mihs
transform_hlds.ctgc.pic_o transform_hlds.ctgc.$O : \
		builtin.mih \
		private_builtin.mih \
		transform_hlds.mih

ifeq (x,y)



transform_hlds.ctgc.mh transform_hlds.ctgc.mih : transform_hlds.ctgc.c


endif # ifeq(x,y)

# RULE mh_and_mih_on_c
transform_hlds.ctgc.mh transform_hlds.ctgc.mih : transform_hlds.ctgc.c

ifeq (x,y)



ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.ctgc.module_dep : jmercury/transform_hlds__ctgc.java
else
transform_hlds.ctgc.module_dep : transform_hlds.ctgc.c
endif


endif # ifeq(x,y)

ifeq ($(findstring java,$(GRADE)),java)

# RULE module_dep_on_java
transform_hlds.ctgc.module_dep : jmercury/transform_hlds__ctgc.java

else

# RULE module_dep_on_c
transform_hlds.ctgc.module_dep : transform_hlds.ctgc.c

endif # conditional fragment

ifeq (x,y)



transform_hlds.ctgc.date transform_hlds.ctgc.date0 \
	transform_hlds.date : ctgc.m \
	transform_hlds.int0 \
	builtin.int3 \
	private_builtin.int3


endif # ifeq(x,y)

# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   parent dep int0
#   long dep int3s
transform_hlds.ctgc.date transform_hlds.ctgc.date0 transform_hlds.date : \
		ctgc.m \
	\
		transform_hlds.int0 \
	\
		builtin.int3 \
		private_builtin.int3

ifeq (x,y)



transform_hlds.ctgc.date0 \
	transform_hlds.date0 : ctgc.m \
	builtin.int3 \
	private_builtin.int3


endif # ifeq(x,y)

# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
transform_hlds.ctgc.date0 transform_hlds.date0 : \
		ctgc.m \
	\
		builtin.int3 \
		private_builtin.int3

ifeq (x,y)


transform_hlds.ctgc.int0 : transform_hlds.ctgc.date0
	@:
transform_hlds.ctgc.int : transform_hlds.ctgc.date
	@:
transform_hlds.ctgc.int2 : transform_hlds.ctgc.date
	@:
transform_hlds.ctgc.int3 : transform_hlds.ctgc.date3
	@:
transform_hlds.ctgc.opt : transform_hlds.ctgc.optdate
	@:
transform_hlds.ctgc.trans_opt : transform_hlds.ctgc.trans_opt_date
	@:


endif # ifeq(x,y)

transform_hlds.ctgc.int0 : transform_hlds.ctgc.date0
	@:

transform_hlds.ctgc.int : transform_hlds.ctgc.date
	@:

transform_hlds.ctgc.int2 : transform_hlds.ctgc.date
	@:

transform_hlds.ctgc.int3 : transform_hlds.ctgc.date3
	@:

transform_hlds.ctgc.opt : transform_hlds.ctgc.optdate
	@:

transform_hlds.ctgc.trans_opt : transform_hlds.ctgc.trans_opt_date
	@:

ifeq (x,y)


transform_hlds.ctgc.date0 : ctgc.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.ctgc
transform_hlds.ctgc.date : ctgc.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.ctgc
transform_hlds.ctgc.date3 : ctgc.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.ctgc
transform_hlds.ctgc.optdate : ctgc.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.ctgc
transform_hlds.ctgc.trans_opt_date : ctgc.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.ctgc
transform_hlds.ctgc.c_date : ctgc.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.ctgc $(ERR_REDIRECT)
transform_hlds.ctgc.java_date : ctgc.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.ctgc $(ERR_REDIRECT)


endif # ifeq(x,y)

transform_hlds.ctgc.date0 : ctgc.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.ctgc

transform_hlds.ctgc.date : ctgc.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.ctgc

transform_hlds.ctgc.date3 : ctgc.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.ctgc

transform_hlds.ctgc.optdate : ctgc.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.ctgc

transform_hlds.ctgc.trans_opt_date : ctgc.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.ctgc

transform_hlds.ctgc.c_date : ctgc.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.ctgc $(ERR_REDIRECT)

transform_hlds.ctgc.java_date : ctgc.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.ctgc $(ERR_REDIRECT)

ifeq (x,y)


endif # ifeq(x,y)

