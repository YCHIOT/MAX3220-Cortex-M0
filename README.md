# STM32G070RCT6 驱动 UWB 模块（基于研创大功率UWB模块MAX3220）

本项目基于 STM32G070RCT6 微控制器，驱动 UWB 模块
工程使用 STM32CubeMX 配置，Keil MDK-ARM 编译调试，适用于开发高精度室内定位系统的通信控制部分。

## 📁 项目结构

```bash
├── Core/               # 用户代码与启动文件（STM32CubeMX 生成）
├── Drivers/            # STM32 HAL 驱动库
├── MDK-ARM/            # Keil 工程文件（.uvprojx, .uvoptx 等）
├── Src/                # 用户自定义代码目录（如 UWB 驱动）
├── DW3000_M0.ioc       # STM32CubeMX 工程配置文件
├── keilkilll.bat       # 一键清理 Keil 输出文件的批处理脚本
└── README.md           # 项目说明文件


📁 产品概述
YCHIOT® MAX3220 是一款基于YCHIOT® DW3220 IC 的超宽带（UWB）射频模块。它将所有射频电路、前端放大器、电源管理和时钟电路集成在一个模块中，极大简化了用户的设计时间与成本。本模块可用于基于双向测距(TOF)或TDOA定位系统，其定位误差小于10cm，并支持高达6.8 Mbps的数据传输速率。
MAX3220系列模块设计符合 FiRa™ PHY 和 MAC 规范，可与其他符合 FiRa™ 标准的设备实现相互通信。
MAX3220系列模块目前有两种型号，其中MAX3220-SMA为SMA接口，MAX3220-X天线端口可外接引出。


📬 联系方式

如需技术支持或商业合作，欢迎联系：

📧 邮箱：lds@ychiot.com
🌐 官网：www.ychiot.com
💬 或通过本项目 Issues 页面提交问题反馈
