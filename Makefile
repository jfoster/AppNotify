export DEBUG = 0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = AppNotify
AppNotify_FILES = $(wildcard *.x*) $(wildcard *.m*)
AppNotify_OBJCFLAGS = -fno-objc-arc -Iheaders

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"
