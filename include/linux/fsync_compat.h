/*****************************************************************************\
 * KQ
\*****************************************************************************/

#ifndef _SPL_FSYNC_COMPAT_H
#define _SPL_FSYNC_COMPAT_H

#include <linux/fs.h>
#include <linux/buffer_head.h>

#ifdef HAVE_3ARGS_FILE_FSYNC
#define  LZFS_VNOP_FSYNC_HANDLER(lzfs_vnop_fsync) \
	int  lzfs_vnop_fsync(struct file *filep, struct dentry *dentry, int datasync)
#else
#define  LZFS_VNOP_FSYNC_HANDLER(lzfs_vnop_fsync) \
         int lzfs_vnop_fsync(struct file *filep, int datasync)

#endif /* HAVE_3ARGS_FILE_FSYNC */
#endif /* SPL_FSYNC_COMPAT_H */
