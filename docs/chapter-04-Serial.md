# Serial


## 硬件串口
串口硬件的发送和接收表示序列位的电脉冲数据。

TTL电平

```C++

voltage_bit = {
    0V  : 0 bit,
    5V  : 1 bit
}
```

## 软件串口

通常用内置的Arduino串口库与硬件串口进行通信。

## 串口通信协议

硬件或软件串口库处理信息的发送和接收。

这个信息通常包括需要被一起发送的变量组。

为了正确地解释信息，在接受侧需要识别每个消息的开始和结束。

如果发送方和接收方完全同意消息里的信息是如何组织的，
有意义的串口通信或任何类型的机器对机器的通信才能实现。

消息里的信息的正规组织方式和对请求作出适当反应的范畴被成为通信协议。


## 有什么工具替代arduino serial monitor?
自带的serial monitor功能有限。无法记录log...

有如下工具可选:

| 3rd-party sw      | winos     | macos     | linux  | Free?   |
|-------------------|-----------|-----------|--------|---------|
| CoolTerm          | O         | O         | O      | O       |
| CuteCom           | X         | X         | O      | ?       |
| Bray Terminal     | O         | X         | X      | O       |
| GNU screen        | X         | O         | O      | O       |
| moserial          | X         | X         | O      | O       |
| PuTTY             | O         | X         | X      | ?       |
| RealTerm          | O         | X         | X      | O       |
| ZTerm             | X         | O         | X      | O       |
| TTY               | X         | X         | O      | ?       |
| VS code           | O         | O         | O      | O       |


