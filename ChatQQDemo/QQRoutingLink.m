//
//  QQRoutingLink.m
//  ChatQQDemo
//
//  Created by WhatsXie on 2018/4/18.
//  Copyright © 2018年 WhatsXie. All rights reserved.
//

#import "QQRoutingLink.h"

@implementation QQRoutingLink
+ (BOOL)haveQQ {
    return [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"mqq://"]];
}
+ (void)chatWithQQ:(NSString *)QQ {
    NSString *url = [NSString stringWithFormat:@"mqq://im/chat?chat_type=wpa&uin=%@&version=1&src_type=web",QQ];
    
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:url]];
}
@end
