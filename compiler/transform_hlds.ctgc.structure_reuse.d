# vim: ts=8 sw=8 noexpandtab ft=make



transform_hlds.ctgc.structure_reuse.optdate transform_hlds.ctgc.structure_reuse.trans_opt_date structure_reuse.err transform_hlds.ctgc.structure_reuse.c_date transform_hlds.ctgc.structure_reuse.java_date : structure_reuse.m transform_hlds.ctgc.structure_reuse.int0 \
	transform_hlds.int0 \
	transform_hlds.ctgc.int0 \
	builtin.int \
	private_builtin.int

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   (unnamed)
#   parent deps
#   long deps
transform_hlds.ctgc.structure_reuse.optdate transform_hlds.ctgc.structure_reuse.trans_opt_date structure_reuse.err transform_hlds.ctgc.structure_reuse.c_date transform_hlds.ctgc.structure_reuse.java_date : \
		structure_reuse.m \
	\
		transform_hlds.ctgc.structure_reuse.int0 \
	\
		transform_hlds.int0 \
		transform_hlds.ctgc.int0 \
	\
		builtin.int \
		private_builtin.int
endif



transform_hlds.ctgc.structure_reuse.pic_o transform_hlds.ctgc.structure_reuse.$O : \
	builtin.mih \
	private_builtin.mih \
	transform_hlds.mih \
	transform_hlds.ctgc.mih

ifeq (x,y)
# RULE objs_on_mihs
transform_hlds.ctgc.structure_reuse.pic_o transform_hlds.ctgc.structure_reuse.$O : \
		builtin.mih \
		private_builtin.mih \
		transform_hlds.mih \
		transform_hlds.ctgc.mih
endif



transform_hlds.ctgc.structure_reuse.mh transform_hlds.ctgc.structure_reuse.mih : transform_hlds.ctgc.structure_reuse.c

ifeq (x,y)
# RULE mh_and_mih_on_c
transform_hlds.ctgc.structure_reuse.mh transform_hlds.ctgc.structure_reuse.mih : transform_hlds.ctgc.structure_reuse.c
endif



ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.ctgc.structure_reuse.module_dep : jmercury/transform_hlds__ctgc__structure_reuse.java
else
transform_hlds.ctgc.structure_reuse.module_dep : transform_hlds.ctgc.structure_reuse.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
transform_hlds.ctgc.structure_reuse.module_dep : jmercury/transform_hlds__ctgc__structure_reuse.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
transform_hlds.ctgc.structure_reuse.module_dep : transform_hlds.ctgc.structure_reuse.c
endif

endif # conditional fragment



transform_hlds.ctgc.structure_reuse.date transform_hlds.ctgc.structure_reuse.date0 \
	transform_hlds.date \
	transform_hlds.ctgc.date : structure_reuse.m \
	transform_hlds.int0 \
	transform_hlds.ctgc.int0 \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   parent dep int0
#   long dep int3s
transform_hlds.ctgc.structure_reuse.date transform_hlds.ctgc.structure_reuse.date0 transform_hlds.date transform_hlds.ctgc.date : \
		structure_reuse.m \
	\
		transform_hlds.int0 \
		transform_hlds.ctgc.int0 \
	\
		builtin.int3 \
		private_builtin.int3
endif



transform_hlds.ctgc.structure_reuse.date0 \
	transform_hlds.date0 \
	transform_hlds.ctgc.date0 : structure_reuse.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
transform_hlds.ctgc.structure_reuse.date0 transform_hlds.date0 transform_hlds.ctgc.date0 : \
		structure_reuse.m \
	\
		builtin.int3 \
		private_builtin.int3
endif


transform_hlds.ctgc.structure_reuse.int0 : transform_hlds.ctgc.structure_reuse.date0
	@:
transform_hlds.ctgc.structure_reuse.int : transform_hlds.ctgc.structure_reuse.date
	@:
transform_hlds.ctgc.structure_reuse.int2 : transform_hlds.ctgc.structure_reuse.date
	@:
transform_hlds.ctgc.structure_reuse.int3 : transform_hlds.ctgc.structure_reuse.date3
	@:
transform_hlds.ctgc.structure_reuse.opt : transform_hlds.ctgc.structure_reuse.optdate
	@:
transform_hlds.ctgc.structure_reuse.trans_opt : transform_hlds.ctgc.structure_reuse.trans_opt_date
	@:

ifeq (x,y)
transform_hlds.ctgc.structure_reuse.int0 : transform_hlds.ctgc.structure_reuse.date0
	@:
endif

ifeq (x,y)
transform_hlds.ctgc.structure_reuse.int : transform_hlds.ctgc.structure_reuse.date
	@:
endif

ifeq (x,y)
transform_hlds.ctgc.structure_reuse.int2 : transform_hlds.ctgc.structure_reuse.date
	@:
endif

ifeq (x,y)
transform_hlds.ctgc.structure_reuse.int3 : transform_hlds.ctgc.structure_reuse.date3
	@:
endif

ifeq (x,y)
transform_hlds.ctgc.structure_reuse.opt : transform_hlds.ctgc.structure_reuse.optdate
	@:
endif

ifeq (x,y)
transform_hlds.ctgc.structure_reuse.trans_opt : transform_hlds.ctgc.structure_reuse.trans_opt_date
	@:
endif


transform_hlds.ctgc.structure_reuse.date0 : structure_reuse.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.ctgc.structure_reuse
transform_hlds.ctgc.structure_reuse.date : structure_reuse.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.ctgc.structure_reuse
transform_hlds.ctgc.structure_reuse.date3 : structure_reuse.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.ctgc.structure_reuse
transform_hlds.ctgc.structure_reuse.optdate : structure_reuse.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.ctgc.structure_reuse
transform_hlds.ctgc.structure_reuse.trans_opt_date : structure_reuse.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.ctgc.structure_reuse
transform_hlds.ctgc.structure_reuse.c_date : structure_reuse.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.ctgc.structure_reuse $(ERR_REDIRECT)
transform_hlds.ctgc.structure_reuse.java_date : structure_reuse.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.ctgc.structure_reuse $(ERR_REDIRECT)

ifeq (x,y)
transform_hlds.ctgc.structure_reuse.date0 : structure_reuse.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.ctgc.structure_reuse
endif

ifeq (x,y)
transform_hlds.ctgc.structure_reuse.date : structure_reuse.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.ctgc.structure_reuse
endif

ifeq (x,y)
transform_hlds.ctgc.structure_reuse.date3 : structure_reuse.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.ctgc.structure_reuse
endif

ifeq (x,y)
transform_hlds.ctgc.structure_reuse.optdate : structure_reuse.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.ctgc.structure_reuse
endif

ifeq (x,y)
transform_hlds.ctgc.structure_reuse.trans_opt_date : structure_reuse.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.ctgc.structure_reuse
endif

ifeq (x,y)
transform_hlds.ctgc.structure_reuse.c_date : structure_reuse.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.ctgc.structure_reuse $(ERR_REDIRECT)
endif

ifeq (x,y)
transform_hlds.ctgc.structure_reuse.java_date : structure_reuse.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.ctgc.structure_reuse $(ERR_REDIRECT)
endif

