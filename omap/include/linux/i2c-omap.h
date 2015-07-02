#ifndef __I2C_OMAP_H__
#define __I2C_OMAP_H__

#include <linux/platform_device.h>

struct omap_i2c_bus_platform_data {
	u32		clkrate;
	bool		needs_wakeup_latency;
	int		(*device_enable) (struct platform_device *pdev);
	int		(*device_shutdown) (struct platform_device *pdev);
	int		(*device_idle) (struct platform_device *pdev);
};

#endif
