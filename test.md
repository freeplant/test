# Seafile 国际化规范

Seafile 支持中文和英文两种语言。

### Daemon 和 Ccnet

Seafile daemon 和 ccnet 均只使用英文。

### Seafile Applet

Windows: seafile-applet 可以在编译时选择语言。

Linux: 目前只支持英文

Mac: seafile-applet 可以在编译时选择语言。

### Seafile Web

seafile-web 可以在运行时选择语言。

实现方法：

1. 在 topbar 上提供语言切换按钮 
2. 切换完后在 ccnet 中记录

   测试

3. 根据 ccnet 中的记录来选择语言

### Seahub

Seahub 在部署时可选择语言

