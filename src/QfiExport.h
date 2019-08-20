#ifndef __QFI_EXPORT_H__
#define __QFI_EXPORT_H__

#ifndef QFI_STATIC
#  if defined(QFI_LIBRARY)
#    define QFI_EXPORT __declspec(dllexport)
#  else
#    define QFI_EXPORT __declspec(dllimport)
#  endif
#else
#  define QFI_EXPORT
#endif

#endif
