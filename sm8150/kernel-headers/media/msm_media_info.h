/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __MEDIA_INFO_H__
#define __MEDIA_INFO_H__
#ifndef MSM_MEDIA_ALIGN
#define MSM_MEDIA_ALIGN(__sz,__align) (((__align) & ((__align) - 1)) ? ((((__sz) + (__align) - 1) / (__align)) * (__align)) : (((__sz) + (__align) - 1) & (~((__align) - 1))))
#endif
#ifndef MSM_MEDIA_ROUNDUP
#define MSM_MEDIA_ROUNDUP(__sz,__r) (((__sz) + ((__r) - 1)) / (__r))
#endif
#ifndef MSM_MEDIA_MAX
#define MSM_MEDIA_MAX(__a,__b) ((__a) > (__b) ? (__a) : (__b))
#endif
enum color_fmts {
  COLOR_FMT_NV12,
  COLOR_FMT_NV21,
  COLOR_FMT_NV12_MVTB,
  COLOR_FMT_NV12_UBWC,
  COLOR_FMT_NV12_BPP10_UBWC,
  COLOR_FMT_RGBA8888,
  COLOR_FMT_RGBA8888_UBWC,
  COLOR_FMT_RGBA1010102_UBWC,
  COLOR_FMT_RGB565_UBWC,
  COLOR_FMT_P010_UBWC,
  COLOR_FMT_P010,
  COLOR_FMT_RGBA16161616_F_UBWC,
  COLOR_FMT_NV12_512,
};
#define COLOR_FMT_RGBA16161616_F_UBWC COLOR_FMT_RGBA16161616_F_UBWC
#define COLOR_FMT_RGBA1010102_UBWC COLOR_FMT_RGBA1010102_UBWC
#define COLOR_FMT_RGB565_UBWC COLOR_FMT_RGB565_UBWC
#define COLOR_FMT_P010_UBWC COLOR_FMT_P010_UBWC
#define COLOR_FMT_P010 COLOR_FMT_P010
#define COLOR_FMT_NV12_512 COLOR_FMT_NV12_512
#endif
