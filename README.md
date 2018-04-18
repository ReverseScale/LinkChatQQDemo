# LinkChatQQDemo
Invoke QQ to initiate a temporary session

## 🎨 测试 UI 什么样子？

在App内调用QQ客户端,在不是好友前提下,向指定的客服QQ发起临时会话,很简单的演示：

![](http://og1yl0w9z.bkt.clouddn.com/18-4-18/47406588.jpg)

进入手机 QQ 指定客服人员进行临时会话：

![](http://og1yl0w9z.bkt.clouddn.com/18-4-18/72232091.jpg)

## 🎯 安装方法

#### 开通
用来接收临时消息QQ号需开通QQ推广功能,未开通QQ推广功能,是不能接收陌生人消息的,开通方法如下:

![](http://og1yl0w9z.bkt.clouddn.com/18-4-18/63830266.jpg)

点击开通就 OK 了（免费）

![](http://og1yl0w9z.bkt.clouddn.com/18-4-18/89069619.jpg)

## 🛠 配置

1.将QQ(mqq字段)添加到项目plist文件白名单中(iOS9新出要求),方法如下:
- 1.在项目info.plist添加LSApplicationQueriesSchemes字段 类型Array
- 2.在此Array中添加一个 item 值设为:mqq(如图)

![](http://og1yl0w9z.bkt.clouddn.com/18-4-18/1347081.jpg)

2.调用方法：
```objc
- (IBAction)chatQQ:(UIButton *)sender {
    //是否有安装QQ客户端
    if([QQRoutingLink haveQQ]) {
        [QQRoutingLink chatWithQQ:@"1129998515"];//发起QQ临时会话
    } else {
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"温馨提示" message:@"您的设备尚未安装QQ客户端,不能进行QQ临时会话" delegate:nil cancelButtonTitle:@"确定" otherButtonTitles:nil, nil];
        [alert show];
    }
}
```

> 由于开发文档中规定App的正常使用不能依赖其他App,所以在项目中集成此功能的童鞋要注意,在未安装QQ客户端时建议影藏此功能,不然上架有被拒风险.

## ⚖ 协议

```
MIT License

Copyright (c) 2017 ReverseScale

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

## 😬  联系

* 微信 : WhatsXie
* 邮件 : ReverseScale@iCloud.com
* 博客 : https://reversescale.github.io
