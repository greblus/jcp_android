LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := jcp_android
LOCAL_SRC_FILES := jcp.c
LOCAL_C_INCLUDES := $(LOCAL_PATH)/includes/
LOCAL_STATIC_LIBRARIES +=  lusb-compat lusb

LOCAL_CFLAGS += -W -Wall 
LOCAL_CFLAGS += -fPIC -DPIC
LOCAL_LDFLAGS += -static

ifeq ($(TARGET_BUILD_TYPE),release)
	LOCAL_CFLAGS += -O2
endif

include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := lusb
LOCAL_SRC_FILES := libs/libusb.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := lusb-compat
LOCAL_SRC_FILES := libs/libusb-compat.a
include $(PREBUILT_STATIC_LIBRARY)
		

