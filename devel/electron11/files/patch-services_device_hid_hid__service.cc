--- services/device/hid/hid_service.cc.orig	2021-01-07 00:36:39 UTC
+++ services/device/hid/hid_service.cc
@@ -16,6 +16,8 @@
 
 #if (defined(OS_LINUX) || defined(OS_CHROMEOS)) && defined(USE_UDEV)
 #include "services/device/hid/hid_service_linux.h"
+#elif defined(OS_FREEBSD)
+#include "services/device/hid/hid_service_freebsd.h"
 #elif defined(OS_MAC)
 #include "services/device/hid/hid_service_mac.h"
 #elif defined(OS_WIN)
@@ -36,6 +38,8 @@ constexpr base::TaskTraits HidService::kBlockingTaskTr
 std::unique_ptr<HidService> HidService::Create() {
 #if (defined(OS_LINUX) || defined(OS_CHROMEOS)) && defined(USE_UDEV)
   return base::WrapUnique(new HidServiceLinux());
+#elif defined(OS_FREEBSD)
+  return base::WrapUnique(new HidServiceFreeBSD());
 #elif defined(OS_MAC)
   return base::WrapUnique(new HidServiceMac());
 #elif defined(OS_WIN)
