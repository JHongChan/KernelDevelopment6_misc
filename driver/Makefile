obj-m += btn_drv_misc_device.o
all:
	make -C /home/sice/kj_gjx_embedd_base/lab_8/linux-3.5 M=`pwd` modules
	cp btn_drv_misc_device.ko /opt/rootfs/lib/modules/3.5.0cyh/btn_drv_misc_device.ko
clean:
	make -C /home/sice/kj_gjx_embedd_base/lab_8/linux-3.5 M=`pwd` modules clean
