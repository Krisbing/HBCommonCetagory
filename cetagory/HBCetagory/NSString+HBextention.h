//
//  NSString+HBextention.h
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/27.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface NSString (HBextention)

/**
 正则匹配用户密码6-24位数字和字母组合
 
 @param password 密码
 @return YES 可用 NO 不可用
 */
+ (BOOL)checkPassword:(NSString *)password;

/**
 正则匹配是否为银行卡号

 @param cardNumber 银行卡号
 @return YES 是 NO 不是
 */
+ (BOOL)IsBankCard:(NSString *)cardNumber;

/**
 正则匹配是否为身份证号

 @param IDCardNumber 身份证号码
 @return YES 是 NO 不是
 */
+ (BOOL)IsIdentityCard:(NSString *)IDCardNumber;

/**
 正则匹配是否为电话号码

 @param number 电话号码
 @return YES 是 NO 不是
 */
+ (BOOL)IsPhoneNumber:(NSString *)number;

/**
 判断名称是否合法

 @param name 名字
 @return YES 合法 NO 不合法
 */
+ (BOOL)isNameValid:(NSString *)name;

/**
 根据字符串生成二维码

 @param size 生成二维码大小
 @return 二维码
 */
- (UIImage *)generateQRCode:(CGFloat)size;

/**
 md5加密

 @return 加密后的字符串
 */
-(NSString *)MD5String;

/**
 base64加密

 @return 加密后的字符串
 */
- (NSString *)stringToBase64;

/**
 base64解密

 @return 解密后的字符串
 */
- (NSString *)base64ToString;
@end
