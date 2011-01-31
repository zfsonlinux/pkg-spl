/* spl_config.h.  Generated from spl_config.h.in by configure.  */
/* spl_config.h.in.  Generated from configure.ac by autoheader.  */

/* Atomic types use spinlocks */
/* #undef ATOMIC_SPINLOCK */

/* Define to 1 to enable basic kmem accounting */
#define DEBUG_KMEM 1

/* Define to 1 to enable detailed kmem tracking */
/* #undef DEBUG_KMEM_TRACKING */

/* blkdev_put() wants 1 args */
#define HAVE_1ARGS_BLKDEV_PUT 1

/* register_sysctl_table() wants 2 args */
/* #undef HAVE_2ARGS_REGISTER_SYSCTL */

/* set_fs_pwd() wants 2 args */
#define HAVE_2ARGS_SET_FS_PWD 1

/* vfs_unlink() wants 2 args */
#define HAVE_2ARGS_VFS_UNLINK 1

/* blkdev_get() wants 3 args */
#define HAVE_3ARGS_BLKDEV_GET 1

/* file_fsync() wants 3 args */
#define HAVE_3ARGS_FILE_FSYNC 1

/* INIT_WORK wants 3 args */
/* #undef HAVE_3ARGS_INIT_WORK */

/* on_each_cpu wants 3 args */
/* #undef HAVE_3ARGS_ON_EACH_CPU */

/* shrinker callback wants 3 args */
/* #undef HAVE_3ARGS_SHRINKER_CALLBACK */

/* vfs_rename() wants 4 args */
#define HAVE_4ARGS_VFS_RENAME 1

/* device_create wants 5 args */
/* #undef HAVE_5ARGS_DEVICE_CREATE */

/* proc_handler() wants 5 args */
/* #undef HAVE_5ARGS_PROC_HANDLER */

/* kernel defines atomic64_cmpxchg */
#define HAVE_ATOMIC64_CMPXCHG 1

/* kernel defines atomic64_t */
#define HAVE_ATOMIC64_T 1

/* kernel defines atomic64_xchg */
#define HAVE_ATOMIC64_XCHG 1

/* class_device_create() is available */
/* #undef HAVE_CLASS_DEVICE_CREATE */

/* struct cred exists */
/* #undef HAVE_CRED_STRUCT */

/* struct ctl_table has ctl_name */
#define HAVE_CTL_NAME 1

/* unnumbered sysctl support exists */
#define HAVE_CTL_UNNUMBERED 1

/* device_create() is available */
#define HAVE_DEVICE_CREATE 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* linux/fdtable.h exists */
#define HAVE_FDTABLE_HEADER 1

/* files_fdtable() is available */
#define HAVE_FILES_FDTABLE 1

/* first_online_pgdat() is available */
/* #undef HAVE_FIRST_ONLINE_PGDAT */

/* fls64() is available */
#define HAVE_FLS64 1

/* struct fs_struct uses spinlock_t */
/* #undef HAVE_FS_STRUCT_SPINLOCK */

/* get_vmalloc_info() is available */
/* #undef HAVE_GET_VMALLOC_INFO */

/* get_zone_counts() is available */
/* #undef HAVE_GET_ZONE_COUNTS */

/* global_page_state() is available */
#define HAVE_GLOBAL_PAGE_STATE 1

/* groups_search() is available */
/* #undef HAVE_GROUPS_SEARCH */

/* init_utsname() is available */
#define HAVE_INIT_UTSNAME 1

/* struct inode has i_mutex */
#define HAVE_INODE_I_MUTEX 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* kallsyms_lookup_name() is available */
/* #undef HAVE_KALLSYMS_LOOKUP_NAME */

/* kmalloc_node() is available */
#define HAVE_KMALLOC_NODE 1

/* kvasprintf() is available */
#define HAVE_KVASPRINTF 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* monotonic_clock() is available */
/* #undef HAVE_MONOTONIC_CLOCK */

/* mutex_lock_nested() is available */
#define HAVE_MUTEX_LOCK_NESTED 1

/* struct mutex has owner */
/* #undef HAVE_MUTEX_OWNER */

/* next_online_pgdat() is available */
/* #undef HAVE_NEXT_ONLINE_PGDAT */

/* next_zone() is available */
/* #undef HAVE_NEXT_ZONE */

/* struct path used in struct nameidata */
#define HAVE_PATH_IN_NAMEIDATA 1

/* pgdat helpers are available */
#define HAVE_PGDAT_HELPERS 1

/* pgdat_list is available */
/* #undef HAVE_PGDAT_LIST */

/* __put_task_struct() is available */
/* #undef HAVE_PUT_TASK_STRUCT */

/* set_fs_pwd() is available */
/* #undef HAVE_SET_FS_PWD */

/* set_normalized_timespec() is available as export */
#define HAVE_SET_NORMALIZED_TIMESPEC_EXPORT 1

/* set_normalized_timespec() is available as inline */
/* #undef HAVE_SET_NORMALIZED_TIMESPEC_INLINE */

/* set_shrinker() available */
/* #undef HAVE_SET_SHRINKER */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* task_curr() exported */
/* #undef HAVE_TASK_CURR */

/* timespec_sub() is available */
#define HAVE_TIMESPEC_SUB 1

/* linux/uaccess.h exists */
#define HAVE_UACCESS_HEADER 1

/* kernel defines uintptr_t */
#define HAVE_UINTPTR_T 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* user_path_dir() is available */
/* #undef HAVE_USER_PATH_DIR */

/* Page state NR_ACTIVE is available */
#define HAVE_ZONE_STAT_ITEM_NR_ACTIVE 1

/* Page state NR_ACTIVE_ANON is available */
/* #undef HAVE_ZONE_STAT_ITEM_NR_ACTIVE_ANON */

/* Page state NR_ACTIVE_FILE is available */
/* #undef HAVE_ZONE_STAT_ITEM_NR_ACTIVE_FILE */

/* Page state NR_FREE_PAGES is available */
#define HAVE_ZONE_STAT_ITEM_NR_FREE_PAGES 1

/* Page state NR_INACTIVE is available */
#define HAVE_ZONE_STAT_ITEM_NR_INACTIVE 1

/* Page state NR_INACTIVE_ANON is available */
/* #undef HAVE_ZONE_STAT_ITEM_NR_INACTIVE_ANON */

/* Page state NR_INACTIVE_FILE is available */
/* #undef HAVE_ZONE_STAT_ITEM_NR_INACTIVE_FILE */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* get_zone_counts() is needed */
/* #undef NEED_GET_ZONE_COUNTS */

/* rwsem_is_locked() acquires sem->wait_lock */
/* #undef RWSEM_IS_LOCKED_TAKES_WAIT_LOCK */

/* Define the project alias string. */
#define SPL_META_ALIAS "spl-0.5.2-1"

/* Define the project author. */
/* #undef SPL_META_AUTHOR */

/* Define the project release date. */
/* #undef SPL_META_DATA */

/* Define the libtool library 'age' version information. */
/* #undef SPL_META_LT_AGE */

/* Define the libtool library 'current' version information. */
/* #undef SPL_META_LT_CURRENT */

/* Define the libtool library 'revision' version information. */
/* #undef SPL_META_LT_REVISION */

/* Define the project name. */
#define SPL_META_NAME "spl"

/* Define the project release. */
#define SPL_META_RELEASE "1"

/* Define the project version. */
#define SPL_META_VERSION "0.5.2"

