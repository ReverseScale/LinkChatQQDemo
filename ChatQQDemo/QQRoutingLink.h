//
//  QQRoutingLink.h
//  ChatQQDemo
//
//  Created by WhatsXie on 2018/4/18.
//  Copyright © 2018年 WhatsXie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface QQRoutingLink : NSObject

/**
 * 是否有安装QQ客户端(请在info.plist文件中 将QQ(mqq)添加到白名单)
 *
 * 设置方法:
 * 1.在info.plist添加LSApplicationQueriesSchemes 类型Array
 * 2.添加一个 item 值设为:mqq
 *
 @return BOOL
 */
+(BOOL)haveQQ;

/**
 * 发起QQ临时会话
 *
 * @param QQ 开通QQ推广的QQ号码
 * (开通QQ推广方法:1.打开QQ推广网址http://shang.qq.com并用QQ登录  2.点击顶部导航栏:推广工具  3.在弹出菜单中点击'立即免费开通')
 */
+(void)chatWithQQ:(NSString *)QQ;
@end
