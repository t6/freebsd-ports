--- chrome/browser/ui/webui/settings/appearance_handler.h.orig	2021-01-07 00:36:25 UTC
+++ chrome/browser/ui/webui/settings/appearance_handler.h
@@ -36,7 +36,7 @@ class AppearanceHandler : public SettingsPageUIHandler
   // Changes the UI theme of the browser to the default theme.
   void HandleUseDefaultTheme(const base::ListValue* args);
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_BSD) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
   // Changes the UI theme of the browser to the system (GTK+) theme.
   void HandleUseSystemTheme(const base::ListValue* args);
 #endif
