--- third_party/perfetto/src/base/file_utils.cc.orig	2021-03-15 13:20:04 UTC
+++ third_party/perfetto/src/base/file_utils.cc
@@ -148,8 +148,9 @@ ssize_t WriteAllHandle(PlatformHandle h, const void* b
 
 bool FlushFile(int fd) {
   PERFETTO_DCHECK(fd != 0);
-#if PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
-    PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)
+#if PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) ||   \
+    PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID) || \
+    PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD)
   return !PERFETTO_EINTR(fdatasync(fd));
 #elif PERFETTO_BUILDFLAG(PERFETTO_OS_WIN)
   return !PERFETTO_EINTR(_commit(fd));
